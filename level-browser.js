'use strict';
(()=>{
const data=window.MAGIC_DATA,el=id=>document.getElementById(id),esc=s=>String(s??'—').replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
let page=0,filtered=[],current=null,reveal=false;
const rows=[...data.levels].sort((a,b)=>{
 const rank=x=>Math.min(...x.refs.filter(r=>r.group==='LevelsConfigv2').map(r=>r.index),999999);
 return rank(a)-rank(b)||a.id.localeCompare(b.id,undefined,{numeric:true});
});
function render(){
 const q=el('level-query').value.trim().toLowerCase(),group=el('level-group').value,special=el('level-special').value;
 filtered=rows.filter(x=>(!group||x.group===group)&&(!special||x.specials[special])&&(!q||(/^\d+$/.test(q)?x.refs.some(r=>r.index===+q):x.id.toLowerCase().includes(q))));
 const pages=Math.max(1,Math.ceil(filtered.length/30));page=Math.min(page,pages-1);
 el('level-count').textContent=`${filtered.length.toLocaleString('vi')} / ${rows.length.toLocaleString('vi')} bố cục. Tìm số dùng levelIndex/dayIndex trong ánh xạ; tìm chữ dùng LId.`;
 el('level-table').innerHTML='<div class="scroll"><table><thead><tr><th>LId / xem sơ đồ</th><th>Ánh xạ cấu hình</th><th>Chai / cell / CC</th><th>Cơ chế</th></tr></thead><tbody>'+filtered.slice(page*30,page*30+30).map(x=>`<tr><td><button class="link-button" data-seed="${esc(x.id)}">${esc(x.id)}</button></td><td>${x.refs.map(r=>esc(r.group+' #'+r.index+' · '+r.difficulty)).join('<br>')||'Chưa có trong bảng seeds chính'}</td><td>${x.bottles} / ${x.cells} / ${x.colorCount}</td><td>${Object.entries(x.specials).map(([k,n])=>esc(k)+' ×'+n).join(', ')||'Không có entry đặc biệt'}</td></tr>`).join('')+'</tbody></table></div>';
 el('level-page').textContent=`Trang ${page+1} / ${pages}`;el('level-prev').disabled=page===0;el('level-next').disabled=page===pages-1;
}
function itemLabel(m){return m&&m.Id!==undefined?(data.itemNames[m.Id]||'Id '+m.Id):'Trống';}
function draw(){
 const x=current;if(!x)return;
 const root=el('level-detail');
 root.innerHTML=`<h2>${esc(x.id)}</h2><p>${x.bottles} entry chai · ${x.cells} cell · CC=${x.colorCount} · ${x.water} cell Water/QuestionMark · ${x.hidden} cell QuestionMark.</p><p><a href="${esc(x.file)}">Mở JSON gốc</a> · <a href="${esc(x.file)}" download>Tải JSON</a></p><div class="note">Sơ đồ dữ liệu cell, không mô phỏng luật hoặc animation. Chai được nhóm theo tọa độ P.y và xếp theo P.x; không tự coi mỗi hàng là một collection runtime. Màu lấy từ ColorConfig, nhãn số là CI. QuestionMark được che bằng “?”; cờ V chỉ được giữ trong JSON, chưa dùng làm quy tắc hiển thị.</div><p><label><input id="reveal-data" type="checkbox" ${reveal?'checked':''}> Hiện CI của QuestionMark để phân tích</label></p><div id="bottle-board"></div><h3>Thuộc tính từng chai</h3><div class="scroll"><table><thead><tr><th>Entry</th><th>P</th><th>Cell theo LP.y tăng dần</th><th>OBIM / OVBIM</th></tr></thead><tbody>${x.raw.B.map((b,i)=>`<tr><td>#${i} · ${esc(itemLabel(b))}</td><td>${esc(JSON.stringify(b.P))}</td><td>${(b.C||[]).slice().sort((a,b)=>(a.LP?.y||0)-(b.LP?.y||0)).map(c=>`${esc(c.LP?.y)}: ${esc(itemLabel(c.BIM))}, CI=${esc(c.BIM?.CI)}, V=${esc(c.BIM?.V)}${c.BM?' / BM='+esc(JSON.stringify(c.BM)):''}`).join('<br>')}</td><td><pre>${esc(JSON.stringify({OBIM:b.OBIM,OVBIM:b.OVBIM},null,2))}</pre></td></tr>`).join('')}</tbody></table></div><details><summary>Toàn bộ payload bố cục</summary><pre>${esc(JSON.stringify(x.raw,null,2))}</pre></details>`;
 if(el('daily-period')&&location.pathname.endsWith('/DailyChallenge.html'))root.innerHTML=`<h2>Bố cục biến thể đang xem</h2><p>${x.bottles} chai · ${x.colorCount} màu · ${x.hidden} ô nước bị che.</p><p>Sơ đồ vẽ vị trí và các lớp nước từ dữ liệu màn, chưa mô phỏng thao tác hoặc hiệu ứng. Mỗi số trong ô là mã màu; dấu hỏi là màu đang bị che.</p><p><label><input id="reveal-data" type="checkbox" ${reveal?'checked':''}> Xem màu thật của các ô bị che để phân tích</label></p><div id="bottle-board"></div><details><summary>Dữ liệu đối chiếu của bố cục</summary><p>Mã bố cục: ${esc(x.id)} · <a href="${esc(x.file)}">Mở dữ liệu gốc</a></p></details>`;
 const ys=[...new Set(x.raw.B.map(b=>b.P?.y??0))].sort((a,b)=>b-a);
 el('bottle-board').innerHTML=ys.map(y=>`<div class="board-row"><small>P.y = ${esc(y)}</small><div class="bottle-row">${x.raw.B.map((b,i)=>({b,i})).filter(({b})=>(b.P?.y??0)===y).sort((a,b)=>(a.b.P?.x||0)-(b.b.P?.x||0)).map(({b,i})=>`<figure class="bottle-figure"><div class="bottle">${(b.C||[]).slice().sort((a,b)=>(b.LP?.y||0)-(a.LP?.y||0)).map(c=>{const m=c.BIM||{},water=[1,2].includes(m.Id),hidden=m.Id===2&&!reveal,color=water&&!hidden?(data.palette[m.CI]?.color||'#b8c5d2'):'#e5eaf0';return `<div class="cell ${hidden?'hidden-cell':''}" style="background:${color}" title="${esc(itemLabel(m)+'; CI='+m.CI+'; LP.y='+c.LP?.y)}">${hidden?'?':water?esc(m.CI):m.Id===undefined?'·':esc(itemLabel(m))}</div>`;}).join('')}</div><figcaption>#${i}<br>x=${esc(b.P?.x)}<br><small>${[...(b.OBIM||[]),...(b.OVBIM?[b.OVBIM]:[])].map(itemLabel).map(esc).join(', ')}</small></figcaption></figure>`).join('')}</div></div>`).join('');
 const visibleCodes=[...new Set(x.raw.B.flatMap(b=>(b.C||[]).map(c=>c.BIM||{})).filter(m=>m.Id===1||(m.Id===2&&reveal)).map(m=>m.CI))].sort((a,b)=>a-b);
 const legend=document.createElement('div');legend.className='level-color-legend';legend.innerHTML='<h3>Chú giải mã màu CI đang hiển thị</h3><div class="color-chips">'+visibleCodes.map(id=>{const p=data.palette[id];return `<span class="color-chip"><i style="background:${p?.color||'#e5eaf0'}"></i><b>CI=${esc(id)}</b> ${esc(p?.name.replace(/ColorConfig$/,'')||'Chưa có ColorConfig')}</span>`;}).join('')+'</div><p><a href="Items/Items.html#color-code-table">Bảng đầy đủ CI → ColorId → màu gốc</a>. CI là chữ I, không phải CL. QuestionMark còn che không được đưa vào chú giải này.</p>';el('bottle-board').after(legend);
 el('reveal-data').addEventListener('change',e=>{reveal=e.target.checked;draw();});
}
function select(id,focus){current=data.levels.find(x=>x.id===id);reveal=false;if(current){draw();if(focus){el('level-detail').scrollIntoView({behavior:'smooth'});el('level-detail').focus({preventScroll:true});}}}
window.MAGIC_PREVIEW=select;
if(!el('level-query'))return;
['level-query','level-group','level-special'].forEach(id=>el(id).addEventListener(id==='level-query'?'input':'change',()=>{page=0;render();}));
el('level-prev').addEventListener('click',()=>{page--;render();});el('level-next').addEventListener('click',()=>{page++;render();});
el('level-table').addEventListener('click',e=>{let b=e.target.closest('[data-seed]');if(b){const h='#seed='+encodeURIComponent(b.dataset.seed);if(location.hash===h)select(b.dataset.seed,true);else location.hash=h;}});
function hash(){if(window.MAGIC_INDEX)return;if(location.hash.startsWith('#seed=')){try{select(decodeURIComponent(location.hash.slice(6)),true);}catch{}}}
window.addEventListener('hashchange',hash);render();if(location.hash)hash();else select(rows[0].id,false);
})();
