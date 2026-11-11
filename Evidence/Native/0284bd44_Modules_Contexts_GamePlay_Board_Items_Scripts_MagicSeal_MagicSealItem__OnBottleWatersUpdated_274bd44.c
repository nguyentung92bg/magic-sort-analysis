/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleWatersUpdated
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleWatersUpdated (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0284b9e8) */
/* WARNING: Removing unreachable block (ram,0x0284b9f0) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleWatersUpdated
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleWatersUpdated
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleWatersUpdated_274bd44
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_1[0xb] + 0x20) == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0284ba04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

