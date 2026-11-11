/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, System_String_o* countText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, System_String_o* countText, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__Prepare_2f583e0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c308c1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813180);
    bRam0000000005c308c1 = 1;
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__SetFrontSorting_2f58940
            (param_1,param_2,param_3);
  Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__SetBackSorting_2f593e4
            (param_1,param_4,param_5);
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_05813180;
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

