/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$SetUnclaimedView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetUnclaimedView (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$SetUnclaimedView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetUnclaimedView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetUnclaimedView_3e21b08
               (long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetSeparatorSprite_3e21ea4
              (param_1,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x40));
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x40);
      if (lVar1 != 0) {
        lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0);
        if (lVar1 == 0) goto LAB_03f21b70;
        UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0),
         lVar1 != 0)) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,0);
        return;
      }
    }
  }
LAB_03f21b70:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

