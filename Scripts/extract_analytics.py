import pathlib,json,re,struct,collections
B=pathlib.Path(__file__).resolve().parents[1];R=B.parents[1]/'Results/Magic Sort'
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
blob=(R/'Inputs/libil2cpp.so').read_bytes();ph=struct.unpack_from('<Q',blob,32)[0];sz,num=struct.unpack_from('<HH',blob,54);segments=[struct.unpack_from('<IIQQQQQQ',blob,ph+i*sz) for i in range(num)]
strings={x['Address']:x['Value'] for x in read(R/'script.json')['ScriptString']}
def literal(ptr):
 if not ptr:return None
 va=int(ptr.removeprefix('PTR_DAT_'),16)-0x100000
 for t,fl,off,v,pa,fs,ms,al in segments:
  if t==1 and v<=va<v+fs:
   slot=struct.unpack_from('<Q',blob,off+va-v)[0];return strings.get(slot)
focus=read(B/'Data/native_focus.json');records=[]
pattern=re.compile(r'\b(puVar\d+)\s*=\s*([^;,\n]+)|Modules_Contexts_Application_Events_Scripts_Event__(?P<kind>_ctor|AddData)_\w+\s*\(\s*[^,]+,\s*\*\(undefined8 \*\)(?P<ref>PTR_DAT_[0-9a-f]+|puVar\d+)',re.S)
for r in focus:
 if r['method'].split('$$')[0].split('.')[-1] not in ['EventSender','FirebaseEventSender','GrandEventSender']:continue
 if not r.get('evidence'):continue
 text=(B/r['evidence']).read_text(encoding='utf-8');aliases={};names=[];keys=[];traces=[]
 for m in pattern.finditer(text):
  if m.group(1):
   name,expr=m.group(1),m.group(2).strip();direct=re.fullmatch(r'PTR_DAT_[0-9a-f]+|puVar\d+',expr)
   aliases[name]=(expr if expr.startswith('PTR_DAT_') else aliases.get(expr)) if direct else None
  else:
   ref=m['ref'];ptr=ref if ref.startswith('PTR_DAT_') else aliases.get(ref);value=literal(ptr)
   if value is not None:
    target=names if m['kind']=='_ctor' else keys
    if value not in target:target.append(value)
    traces.append(dict(kind='eventName' if m['kind']=='_ctor' else 'AddDataKey',value=value,pointer=ptr,line=text.count('\n',0,m.start())+1))
 refs=[]
 for ptr in dict.fromkeys(re.findall(r'PTR_DAT_[0-9a-f]+',text)):
  v=literal(ptr)
  if v is not None and len(v)<300:refs.append(dict(pointer=ptr,value=v))
 records.append(dict(method=r['method'],address=r['address'],file=r['evidence'],eventNames=names,addDataKeys=keys,traces=traces,stringReferences=refs,sdkFactories=sorted(set(re.findall(r'GrandSDK_Models_MagicSort_Events_AnalyticsEvents__(\w+?)_[0-9a-f]+\s*\(',text)))))
result=dict(scope='Native Event constructor and AddData string literals; GOT pointer read from ELF, string slot resolved through script.json. Simple pointer aliases tracked in source order; verify branches in linked pseudo-C. Keys are method-level, not runtime payload captures.',methods=len(records),withEventNames=sum(bool(x['eventNames']) for x in records),uniqueEventNames=len(set(n for x in records for n in x['eventNames'])),uniqueKeys=len(set(n for x in records for n in x['addDataKeys'])),records=records)
(B/'Data/analytics_catalog.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8')
print({k:v for k,v in result.items() if k!='records'});print(next((x for x in records if 'SendDailyProgressBarFill' in x['method']),None))
