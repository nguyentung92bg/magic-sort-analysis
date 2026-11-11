/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Complete_274cf40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam0000000005c2c6ce & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758610);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2c6ce = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1,0);
    puVar2 = PTR_DAT_057b8520;
    puVar1 = PTR_DAT_05758610;
    if (*(long *)(param_1 + 0x58) != 0) {
      Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__RemoveBlocker_1e90d64
                (*(long *)(param_1 + 0x58),param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
        plVar4 = *(long **)(param_1 + 0x48);
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0284d008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

