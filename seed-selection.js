'use strict';
// Reconstruction of LevelModelService selection branches, not a running game.
(function(root){
function choose(config,state={}){
 const seeds=config.seeds||[],dlb=config.dlbSeeds||[],cap=config.dlbCap||0;
 const retry=Math.max(0,Math.trunc(Number(state.retry)||0)),snitch=Math.max(0,Math.trunc(Number(state.snitchRetry)||0));
 const effective=Math.max(0,retry-snitch),force=Number(state.force??-1);
 if(!state.cached&&Number.isInteger(force)&&force>=0&&force<seeds.length)return {mode:'forced',seed:seeds[force],index:force,effective,reason:`ForceSeedIndex=${force} hợp lệ: lấy seeds[${force}].`};
 if(state.snitchActive&&config.slSeed)return {mode:'sl',seed:config.slSeed,effective,reason:'Snitch đang active và slSeed không rỗng: dùng slSeed.'};
 const useDlb=dlb.length>0&&effective>=cap,list=useDlb?dlb:seeds,key=useDlb?'dlbSeeds':'seeds',i=useDlb?effective-cap:effective;
 if(!list.length)return {mode:'invalid',effective,reason:'Danh sách rỗng; không suy ra seed hợp lệ.'};
 if(i<list.length)return {mode:key,seed:list[i],index:i,effective,reason:`r=${effective}; ${key}[${i}]${useDlb?' (r − dlbCap)':''}.`};
 const remaining=list.slice(),lastIndex=remaining.indexOf(state.lastSeed);if(lastIndex>=0)remaining.splice(lastIndex,1);
 const candidates=remaining.length?remaining:list.slice(),counts=candidates.map((_,i)=>Math.floor((99-i)/candidates.length)+1);
 return {mode:'random',list:key,effective,candidates,weights:counts,reason:`Vượt ${key}; bỏ một lần xuất hiện seed vừa chọn nếu còn ứng viên, rồi dùng Random.Range(0,100) % ${candidates.length}.`};
}
function resolve(orders,level){
 const regular=orders.filter(x=>x.group==='LevelsConfigv2'),loop=orders.filter(x=>x.group==='LoopLevelsConfig');
 if(!Number.isInteger(level)||level<1||!regular.length||!loop.length)return null;
 const slot=level<=regular.length?level-1:(level-regular.length-1)%loop.length;
 return {row:(level<=regular.length?regular:loop)[slot],slot,liveLevel:level,loopCycle:level<=regular.length?0:Math.floor((level-regular.length-1)/loop.length)+1};
}
const api={choose,resolve};if(typeof module!=='undefined'&&module.exports)module.exports=api;else root.MAGIC_SELECTION=api;
})(typeof window!=='undefined'?window:globalThis);
