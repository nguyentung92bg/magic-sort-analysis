/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.SingleUseBottleTutorialFlow$$OnButtonClicked
void Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow__OnButtonClicked (Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.SuperCharger.Scripts.UI.SingleUseBottleTutorialFlow$$OnButtonClicked
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow__OnButtonClicked
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow__OnButtonClicked_297803c
               (long param_1)

{
  long lVar1;
  
  lVar1 = Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem_2975fb4
                    (*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__SetDefaultSorting_2f59428
              (lVar1,0);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a78070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

