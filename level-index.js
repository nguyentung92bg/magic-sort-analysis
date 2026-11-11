'use strict';
(()=>{
window.MAGIC_INDEX=true;
const D=window.MAGIC_DATA,S=window.MAGIC_SELECTION,$=id=>document.getElementById(id),E=s=>String(s??'—').replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
const lookup=new Map(D.levels.map(x=>[x.id,x]));let p=0,filtered=[],selected=null,live=1,variant='';
function render(){
 const q=$('index-query').value.trim().toLowerCase(),g=$('index-group').value,d=$('index-difficulty').value;
 filtered=D.orders.filter(x=>(!g||x.group===g)&&(!d||x.difficulty===d)&&(!q||(/^\d+$/.test(q)?x.index===+q:([...x.seeds,...x.secondarySeeds].some(s=>s.toLowerCase().includes(q))))));
 const count=Math.max(1,Math.ceil(filtered.length/20));p=Math.min(p,count-1);
 $('index-count').textContent=`${filtered.length} / ${D.orders.length} entry theo level index; 1–219 regular, 220–299 template loop.`;
 $('index-table').innerHTML='<div class="scroll"><table><thead><tr><th>Level index</th><th>Loại / bảng</th><th>Các bố cục</th><th>Quy tắc mặc định</th></tr></thead><tbody>'+filtered.slice(p*20,p*20+20).map(x=>`<tr class="${selected===x?'selected-index':''}"><td><button class="link-button" data-order="${E(x.group)}:${x.index}">Level ${x.index}</button>${x.index>=2&&x.index<=4?'<br><small>Entry tutorial phụ</small>':''}</td><td>${E(x.difficulty)}<br><small>${E(x.group)}</small></td><td>${x.seeds.length} seeds${x.secondarySeeds.length?' + '+x.secondarySeeds.length+' DLB':''}<br><small>${lookup.get(x.seeds[0])?.bottles??'—'} chai ở seeds[0]</small></td><td>${x.index===1?'Tải tuần tự cả 4 bố cục tutorial':x.secondarySeeds.length?'r ≥ '+x.raw.dlbCap+' → DLB':'Theo r; vượt mảng → random'}</td></tr>`).join('')+'</tbody></table></div>';
 $('index-page').textContent=`Trang ${p+1} / ${count}`;$('index-prev').disabled=p===0;$('index-next').disabled=p>=count-1;
}
function mini(id){let x=lookup.get(id);if(!x)return '';return '<span class="mini-board" aria-hidden="true">'+x.raw.B.map(b=>'<span class="mini-bottle">'+(b.C||[]).slice().sort((a,b)=>(b.LP?.y||0)-(a.LP?.y||0)).map(c=>{let m=c.BIM||{},color=m.Id===1?D.palette[m.CI]?.color||'#b8c5d2':m.Id===2?'#aca0c5':'#e4e9ee';return `<i style="background:${color}"></i>`;}).join('')+'</span>').join('')+'</span>';}
function condition(kind,i){let cap=selected.raw.dlbCap||0,dlb=selected.secondarySeeds.length;
 if(selected.index===1)return `Chặng ${i+1} của chuỗi tutorial level 1; tải cùng các chặng khác.`;
 if(kind==='dlbSeeds')return `Chọn trực tiếp khi r = ${cap+i}; sau r ≥ ${cap+dlb} còn có thể được chọn ngẫu nhiên trong DLB.`;
 const direct=dlb&&i>=cap?'Không tới bằng r trực tiếp vì đã chuyển sang DLB.':`Chọn trực tiếp khi r = ${i}.`;
 const random=!dlb?' Còn thuộc pool random khi r ≥ '+selected.seeds.length+'.':cap>selected.seeds.length?' Còn thuộc pool random ở '+selected.seeds.length+' ≤ r < '+cap+'.':'';
 return direct+random+' ForceSeedIndex='+i+' cũng có thể chọn nếu đi nhánh config hiện hành.';
}
function preview(id){variant=id;window.MAGIC_PREVIEW(id,false);document.querySelectorAll('[data-variant]').forEach(b=>b.setAttribute('aria-pressed',String(b.dataset.variant===id)));}
function panel(){
 let x=selected;if(!x)return;
 const all=[...x.seeds.map((id,i)=>({id,i,kind:'seeds'})),...x.secondarySeeds.map((id,i)=>({id,i,kind:'dlbSeeds'}))];
 $('variant-panel').innerHTML=`<h2>Level ${live} · ${x.difficulty}</h2><p id="selected-order">${E(x.group)} · levelIndex ${x.index} · slot ${D.orders.filter(r=>r.group===x.group).indexOf(x)} (0-based).${live!==x.index?' Level đang chơi '+live+' dùng template '+x.index+'.':''} ${x.index>=2&&x.index<=4?'Entry này có trong config, nhưng tiến trình thường chạy các bố cục 1–4 trong level 1 rồi nhảy thẳng tới 5.':''}</p><p><a href="${E(x.file)}">JSON bảng thứ tự</a> · ${x.secondarySeeds.length?'dlbCap = '+x.raw.dlbCap:'Không có dlbSeeds trong entry này.'}</p><div class="variant-cards">${all.map(({id,i,kind})=>`<button class="variant-card" data-variant="${E(id)}" aria-pressed="${id===variant}"><strong>${kind}[${i}]${x.index===1?' · chặng '+(i+1):''}</strong>${mini(id)}<span>${E(id)}</span><small>${E(condition(kind,i))}</small></button>`).join('')}</div><h3>Thử điều kiện chọn biến thể</h3><p>Nhập bộ đếm <b>trước khi tải màn</b>. Bộ thử dùng danh sách fallback của entry đang chọn; chưa có cache/remote của tài khoản. Không bấm chơi hoặc thay đổi game thật.</p><div class="order-controls"><label>RetryCount<input id="sim-retry" type="number" min="0" step="1" value="0"></label><label>SnitchRetryCount<input id="sim-snitch-retry" type="number" min="0" step="1" value="0"></label><label>ForceSeedIndex (−1 = không ép)<input id="sim-force" type="number" min="-1" step="1" value="-1"></label><label>Seed vừa chọn<select id="sim-last"><option value="">Không có / không biết</option>${all.map(({id})=>`<option value="${E(id)}">${E(id)}</option>`).join('')}</select></label></div><p><label><input id="sim-snitch-active" type="checkbox"> Snitch active (entry này ${x.raw.slSeed?'có':'không có'} slSeed)</label></p><div id="sim-result" class="infobox" role="status"></div>`;
 $('variant-panel').querySelectorAll('[data-variant]').forEach(b=>b.addEventListener('click',()=>preview(b.dataset.variant)));
 ['sim-retry','sim-snitch-retry','sim-force','sim-last','sim-snitch-active'].forEach(id=>$(id).addEventListener('input',simulate));
 simulate();
}
function simulate(){
 let x=selected;if(!x)return;
 if(live===1){$('sim-result').innerHTML='<b>Chuỗi tutorial:</b> tải lần lượt '+x.seeds.length+' seed, không áp bộ chọn biến thể theo RetryCount. Chọn thẻ chặng để xem bố cục.';return;}
 const result=S.choose(x.raw,{retry:$('sim-retry').value,snitchRetry:$('sim-snitch-retry').value,force:$('sim-force').value,lastSeed:$('sim-last').value,snitchActive:$('sim-snitch-active').checked});
 $('sim-result').innerHTML=`<b>r = ${result.effective}</b><p>${E(result.reason)}</p>`+(result.seed?`<p id="sim-selected-seed"><strong>${E(result.seed)}</strong></p>`:`<ul>${(result.candidates||[]).map((id,i)=>`<li><button class="link-button" data-candidate="${E(id)}">${E(id)}</button> · ${result.weights[i]}/100 kết quả của phép random</li>`).join('')}</ul>`);
 $('sim-result').querySelectorAll('[data-candidate]').forEach(b=>b.addEventListener('click',()=>preview(b.dataset.candidate)));
 if(result.seed)preview(result.seed);
}
function select(row,number,seed){selected=row;live=number??row.index;variant=seed||row.seeds[0];$('live-level').value=live;render();panel();if(seed)preview(seed);else if(live===1)preview(row.seeds[0]);}
function openLive(){let n=Number($('live-level').value),r=S.resolve(D.orders,n);if(!r){$('live-result').textContent='Nhập số level nguyên từ 1.';return;}select(r.row,n);$('live-result').textContent=n<=219?`Level ${n}: regular slot ${r.slot}, levelIndex ${r.row.index}.`:`Level ${n}: loop slot ${r.slot}, template levelIndex ${r.row.index}, vòng loop ${r.loopCycle}.`;location.hash='level='+n;}
function hash(){let h=location.hash;if(h.startsWith('#level=')){let n=Number(h.slice(7)),r=S.resolve(D.orders,n);if(r)select(r.row,n);}else if(h.startsWith('#seed=')){let id;try{id=decodeURIComponent(h.slice(6));}catch{return;}let r=D.orders.find(x=>x.seeds.includes(id)||x.secondarySeeds.includes(id));if(r)select(r,r.index,id);else{selected=null;$('variant-panel').innerHTML=`<h2>Asset ${E(id)}</h2><p>LId này không có trong bảng thứ tự regular/loop fallback. Có thể thuộc daily hoặc kho asset chưa ánh xạ; không tự gán level index.</p>`;window.MAGIC_PREVIEW(id,false);}}}
['index-query','index-group','index-difficulty'].forEach(id=>$(id).addEventListener(id==='index-query'?'input':'change',()=>{p=0;render();}));
 $('index-table').addEventListener('click',e=>{let b=e.target.closest('[data-order]');if(!b)return;let [g,i]=b.dataset.order.split(':'),r=D.orders.find(x=>x.group===g&&x.index===+i);select(r,+i);location.hash='level='+i;});
 $('index-prev').addEventListener('click',()=>{p--;render();});$('index-next').addEventListener('click',()=>{p++;render();});$('open-live-level').addEventListener('click',openLive);$('live-level').addEventListener('keydown',e=>{if(e.key==='Enter')openLive();});window.addEventListener('hashchange',hash);
 render();if(location.hash)hash();else select(D.orders[0],1);
})();
