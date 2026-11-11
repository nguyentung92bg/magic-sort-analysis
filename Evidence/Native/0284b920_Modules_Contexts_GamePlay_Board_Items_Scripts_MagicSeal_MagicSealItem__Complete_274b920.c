/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, bool updateDisappearSorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, bool
   updateDisappearSorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Complete_274b920
               (long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000005c2c6c1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581bd48);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2c6c1 = 1;
  }
  puVar2 = PTR_DAT_0581bd48;
  puVar1 = PTR_DAT_057b8520;
  if ((char)param_1[8] != '\0') {
    return;
  }
  if (param_1[10] != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (param_1[10],param_1,0);
    Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__RemoveFromCells_274ba0c
              (param_1);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
      *(undefined1 *)(param_1 + 8) = 1;
      if ((param_2 & 1) == 0) {
        param_1 = (long *)param_1[9];
        if (param_1 == (long *)0x0) goto LAB_0284ba08;
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c8);
        uVar4 = *(undefined8 *)(*param_1 + 0x1d0);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x288);
        uVar4 = *(undefined8 *)(*param_1 + 0x290);
      }
                    /* WARNING: Could not recover jumptable at 0x0284ba04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
      return;
    }
  }
LAB_0284ba08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

