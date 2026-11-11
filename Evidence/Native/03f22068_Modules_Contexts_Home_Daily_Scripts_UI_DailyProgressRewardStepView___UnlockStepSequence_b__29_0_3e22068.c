/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$<UnlockStepSequence>b__29_0
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView___UnlockStepSequence_b__29_0 (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$<UnlockStepSequence>b__29_0
   void 
   Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView___UnlockStepSequence_b__29_0
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView___UnlockStepSequence_b__29_0_3e22068
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48);
  if ((bRam0000000005c38117 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c38117 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar3,uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

