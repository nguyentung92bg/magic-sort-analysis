/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$SetRaycastOrder
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, int32_t itemRaycastOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$SetRaycastOrder
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, int32_t itemRaycastOrder,
   const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder_410baa4
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057b8520;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c39383 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ff2e0,param_2,0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05778270);
    bRam0000000005c39383 = 1;
  }
  *(int *)(lVar4 + 0x18) = (int)param_2;
  puVar2 = PTR_DAT_057ff2e0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05778270 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar3 + 0x10),lVar4);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

