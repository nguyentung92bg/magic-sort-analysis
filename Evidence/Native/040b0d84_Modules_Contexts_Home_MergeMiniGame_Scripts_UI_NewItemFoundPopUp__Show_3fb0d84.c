/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$Show
DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__Show (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, int32_t level, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, UnityEngine_Vector3_o fromPosition, System_Action_o* onClosed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$Show
   DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__Show
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, int32_t level,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, UnityEngine_Vector3_o
   fromPosition, System_Action_o* onClosed, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__Show_3fb0d84
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_x1;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_057a0418;
  if ((bRam0000000005c39059 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057e7670);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_0577b270);
    FUN_012d0dc8(PTR_DAT_057a0418);
    bRam0000000005c39059 = 1;
  }
  *(undefined8 *)(param_4 + 0x78) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x78),param_7);
  uVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__ShowAnimation_3fb0f08
                    (param_1,param_2,param_3,param_4,param_5,param_6);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c(lVar5);
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057606c8;
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,uVar7,*(undefined8 *)PTR_DAT_0577b270,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar6;
    FUN_012d0d74(plVar4,lVar6);
  }
  puVar2 = PTR_DAT_057e7670;
  lVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                    (uVar3,lVar6,*(undefined8 *)PTR_DAT_0579e470);
  uVar3 = *(undefined8 *)puVar2;
  if ((bRam0000000005c2c3bb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058163b8,uVar3);
    bRam0000000005c2c3bb = 1;
    uVar3 = extraout_x1;
  }
  if (lVar5 == 0) {
    if (cRam0000000005c24e31 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ddc60,uVar3);
      cRam0000000005c24e31 = '\x01';
    }
    if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogNullTween_362a2b0(0,0);
    }
  }
  else if (*(char *)(lVar5 + 0xe8) == '\0') {
    if (cRam0000000005c24e31 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ddc60,uVar3);
      cRam0000000005c24e31 = '\x01';
    }
    if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogInvalidTween_362a224(lVar5,0);
    }
  }
  else if (*(char *)(lVar5 + 0xe9) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    DG_Tweening_Core_TweenManager__Play_3330e80(lVar5,0);
  }
  else {
    if (cRam0000000005c24e31 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ddc60,uVar3);
      cRam0000000005c24e31 = '\x01';
    }
    if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogNestedTween_362a268(lVar5,0);
    }
  }
  return lVar5;
}

