/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$remove_OnRecycled
void Modules_Infrastructure_Common_Scripts_Component_AItem__remove_OnRecycled (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, System_Action_AItem__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$remove_OnRecycled
   void Modules_Infrastructure_Common_Scripts_Component_AItem__remove_OnRecycled
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, System_Action_AItem__o* value,
   const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__remove_OnRecycled_40e9c34
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 041e9bac with catch @ 041e9c34 */
                    /* catch() { ... } // from try @ 041e9b4c with catch @ 041e9c40 */
  if ((bRam0000000005c3aa86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba368);
    bRam0000000005c3aa86 = 1;
  }
  puVar1 = PTR_DAT_057ba368;
  lVar5 = *(long *)(param_1 + 0x10);
  do {
                    /* try { // try from 041e9c84 to 042e9c8f has its CatchHandler @ 041e986c */
    lVar3 = System_Delegate__Remove_23e3b70(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
                    /* try { // try from 041e9c90 to 042e9c97 has its CatchHandler @ 041e9c98 */
                    /* catch() { ... } // from try @ 041e9c2c with catch @ 041e9c98
                       catch() { ... } // from try @ 041e9c90 with catch @ 041e9c98 */
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
                    /* try { // try from 041e9c9c to 042e9e0b has its CatchHandler @ 041e9c9c
                       catch() { ... } // from try @ 041e9c9c with catch @ 041e9c9c
                       catch() { ... } // from try @ 041e9ec8 with catch @ 041e9c9c
                       catch() { ... } // from try @ 041e9f8c with catch @ 041e9c9c
                       catch() { ... } // from try @ 041e9fa0 with catch @ 041e9c9c
                       catch() { ... } // from try @ 041ea00c with catch @ 041e9c9c
                       catch() { ... } // from try @ 041ea094 with catch @ 041e9c9c
                       catch() { ... } // from try @ 041ea0d0 with catch @ 041e9c9c
                       catch() { ... } // from try @ 041ea16c with catch @ 041e9c9c
                       catch() { ... } // from try @ 041ea204 with catch @ 041e9c9c */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
    lVar3 = FUN_01351224((long *)(param_1 + 0x10),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

