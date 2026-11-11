/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$add_OnRecycled
void Modules_Infrastructure_Common_Scripts_Component_AItem__add_OnRecycled (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, System_Action_AItem__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$add_OnRecycled
   void Modules_Infrastructure_Common_Scripts_Component_AItem__add_OnRecycled
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, System_Action_AItem__o* value,
   const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__add_OnRecycled_40e9b84
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 041e9b84 to 042e9b87 has its CatchHandler @ 041e9c1c */
                    /* try { // try from 041e9b88 to 042e9b9f has its CatchHandler @ 041e9c20 */
                    /* try { // try from 041e9ba0 to 042e9ba7 has its CatchHandler @ 041e9c18 */
  if ((bRam0000000005c3aa85 & 1) == 0) {
                    /* try { // try from 041e9bac to 042e9be3 has its CatchHandler @ 041e9c34 */
    FUN_012d0dc8(PTR_DAT_057ba368);
    bRam0000000005c3aa85 = 1;
  }
  puVar1 = PTR_DAT_057ba368;
  lVar5 = *(long *)(param_1 + 0x10);
  do {
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
                    /* try { // try from 041e9be4 to 042e9beb has its CatchHandler @ 041e9c14 */
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
                    /* try { // try from 041e9bec to 042e9c03 has its CatchHandler @ 041e986c */
      if (lVar4 == 0) {
                    /* try { // try from 041e9c2c to 042e9c83 has its CatchHandler @ 041e9c98 */
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
                    /* try { // try from 041e9c04 to 042e9c13 has its CatchHandler @ 041e9c24 */
    lVar3 = FUN_01351224((long *)(param_1 + 0x10),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
                    /* catch() { ... } // from try @ 041e9be4 with catch @ 041e9c14 */
                    /* catch() { ... } // from try @ 041e9ba0 with catch @ 041e9c18 */
                    /* catch() { ... } // from try @ 041e9b84 with catch @ 041e9c1c */
                    /* catch() { ... } // from try @ 041e9b88 with catch @ 041e9c20 */
                    /* catch() { ... } // from try @ 041e9b64 with catch @ 041e9c24
                       catch() { ... } // from try @ 041e9c04 with catch @ 041e9c24 */
  return;
}

