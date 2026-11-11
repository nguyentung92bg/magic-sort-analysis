/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$add_OnRecycled
void Modules_Infrastructure_Common_Scripts_Component_AItemPart__add_OnRecycled (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, System_Action_AItemPart__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$add_OnRecycled
   void Modules_Infrastructure_Common_Scripts_Component_AItemPart__add_OnRecycled
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, System_Action_AItemPart__o*
   value, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__add_OnRecycled_40ea2bc
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c3aa8c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4430);
    bRam0000000005c3aa8c = 1;
  }
  puVar1 = PTR_DAT_057f4430;
  lVar5 = *(long *)(param_1 + 0x18);
  do {
                    /* try { // try from 041ea30c to 042ea31b has its CatchHandler @ 041ea544 */
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
                    /* try { // try from 041ea328 to 042ea32f has its CatchHandler @ 041ea534 */
      if (lVar4 == 0) {
                    /* try { // try from 041ea364 to 042ea36b has its CatchHandler @ 041ea530 */
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
    lVar3 = FUN_01351224((long *)(param_1 + 0x18),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
                    /* try { // try from 041ea348 to 042ea34f has its CatchHandler @ 041ea538 */
  } while (bVar2);
  return;
}

