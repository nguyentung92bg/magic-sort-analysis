/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedView$$UpdateView
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateView (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView_o* __this, int32_t currentProgress, int32_t progressTarget, int32_t playOnBehaviours, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01706a34) */
/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedView$$UpdateView
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateView
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView_o* __this, int32_t
   currentProgress, int32_t progressTarget, int32_t playOnBehaviours, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateView_1606a90
               (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4,int param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iStack_58;
  int iStack_54;
  
  if ((bRam0000000005c243f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_05791448);
    FUN_012d0dc8(PTR_DAT_05813318);
    FUN_012d0dc8(PTR_DAT_057683b0);
    FUN_012d0dc8(PTR_DAT_0576cf98);
    bRam0000000005c243f4 = 1;
  }
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_01706cd0;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_3 + 0x48),0,0);
  puVar4 = PTR_DAT_05813318;
  puVar3 = PTR_DAT_05791448;
  puVar2 = PTR_DAT_0576cf98;
  puVar1 = PTR_DAT_057683b0;
  switch(param_6) {
  case 0:
    lVar8 = *(long *)(param_3 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar3,0);
    if (lVar8 == 0) goto LAB_01706cd0;
    TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar5,1,0);
    lVar8 = *(long *)(param_3 + 0x20);
    if (lVar8 == 0) goto LAB_01706cd0;
    puVar7 = (undefined8 *)(param_3 + 0x28);
    break;
  case 1:
    lVar8 = *(long *)(param_3 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar2,0);
    if (lVar8 == 0) goto LAB_01706cd0;
    TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar5,1,0);
    lVar8 = *(long *)(param_3 + 0x20);
    if (lVar8 == 0) goto LAB_01706cd0;
    puVar7 = (undefined8 *)(param_3 + 0x30);
    break;
  default:
    goto LAB_01706c84;
  case 3:
    lVar8 = *(long *)(param_3 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar4,0);
    if (lVar8 == 0) goto LAB_01706cd0;
    TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar5,1,0);
    lVar8 = *(long *)(param_3 + 0x20);
    if (lVar8 == 0) goto LAB_01706cd0;
    puVar7 = (undefined8 *)(param_3 + 0x38);
    break;
  case 4:
    lVar8 = *(long *)(param_3 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar1,0);
    if (lVar8 == 0) goto LAB_01706cd0;
    TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar5,1,0);
    lVar8 = *(long *)(param_3 + 0x20);
    if (lVar8 == 0) goto LAB_01706cd0;
    puVar7 = (undefined8 *)(param_3 + 0x40);
  }
  UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar8,*puVar7,0);
LAB_01706c84:
  if (param_5 < 2) {
                    /* try { // try from 01706cc0 to 01806e7b has its CatchHandler @ 01706cc0
                       catch() { ... } // from try @ 01706cc0 with catch @ 01706cc0
                       catch() { ... } // from try @ 01706f24 with catch @ 01706cc0
                       catch() { ... } // from try @ 01706fd8 with catch @ 01706cc0
                       catch() { ... } // from try @ 01707070 with catch @ 01706cc0 */
    return;
  }
  if (*(long *)(param_3 + 0x48) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_3 + 0x48),1,0);
    if ((bRam0000000005c243f5 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_057db748);
      FUN_012d0dc8(PTR_DAT_057c0628);
      bRam0000000005c243f5 = 1;
    }
    puVar2 = PTR_DAT_057db748;
    puVar1 = PTR_DAT_057c0628;
    if (*(long *)(param_3 + 0x50) != 0) {
      UnityEngine_SpriteRenderer__get_size_4095c28(*(long *)(param_3 + 0x50),0);
      lVar8 = *(long *)(param_3 + 0x60);
      iStack_54 = param_4;
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_54);
      iStack_58 = param_5;
      uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_58);
      uVar5 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar5,uVar6,0);
      if (lVar8 != 0) {
        TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar5,1,0);
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Kill_1eda9a4(param_3,0,0);
        if (*(long *)(param_3 + 0x50) != 0) {
          UnityEngine_SpriteRenderer__set_size_4095cb8
                    (((float)param_4 / (float)param_5) * *(float *)(param_3 + 0x58),param_2,
                     *(long *)(param_3 + 0x50),0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_01706cd0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

