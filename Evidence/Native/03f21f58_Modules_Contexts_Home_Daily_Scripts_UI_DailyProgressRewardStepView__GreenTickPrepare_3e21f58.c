/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$GreenTickPrepare
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__GreenTickPrepare (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$GreenTickPrepare
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__GreenTickPrepare
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__GreenTickPrepare_3e21f58
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
      lVar2 = *(long *)(param_1 + 0x38);
      if ((lVar2 != 0) && (lVar1 != 0)) {
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                   *(undefined4 *)(lVar2 + 0x2c),lVar1,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x40);
          if (lVar1 == 0) {
            return;
          }
          lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0);
          if (lVar1 != 0) {
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

