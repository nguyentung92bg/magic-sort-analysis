/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$UnlockStepSequence
DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__UnlockStepSequence (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$UnlockStepSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__UnlockStepSequence
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__UnlockStepSequence_3e218dc
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c38116 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0577e970);
    FUN_012d0dc8(PTR_DAT_05808af8);
    FUN_012d0dc8(PTR_DAT_0577d8a8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c38116 = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar4 = (undefined8 *)(param_1 + 0x68);
  *puVar4 = uVar2;
  FUN_012d0d74(puVar4,uVar2);
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = *puVar4;
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x48);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar3 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_1,*(undefined8 *)PTR_DAT_0577d8a8,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar6,uVar2,lVar3,0);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_1,*(undefined8 *)PTR_DAT_0577e970,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar2,lVar3,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x68);
          uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x48);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar3,param_1,*(undefined8 *)PTR_DAT_05808af8,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar6,uVar2,lVar3,0);
            uVar5 = *(undefined8 *)(param_1 + 0x68);
            uVar2 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__PlayRewardStep_3e21fe4
                              (param_1);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar2,0);
            return *(undefined8 *)(param_1 + 0x68);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

