/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$ScaleCurrency
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__ScaleCurrency (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$ScaleCurrency
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__ScaleCurrency
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, float scale, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__ScaleCurrency_3e21218
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if (*(long *)(param_2 + 0x60) != 0) {
    lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_2 + 0x60),0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fStack_30 = *(float *)(lVar2 + 0xc) * param_1;
      fStack_2c = *(float *)(lVar2 + 0x10) * param_1;
      fStack_28 = *(float *)(lVar2 + 0x14) * param_1;
      if (pcRam0000000005c3a650 == (code *)0x0) {
        pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
      }
      (*pcRam0000000005c3a650)(lVar1,&fStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

