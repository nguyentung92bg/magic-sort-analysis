/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedView$$UpdateProgressBar
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateProgressBar (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView_o* __this, int32_t current, int32_t target, bool instant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedView$$UpdateProgressBar
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateProgressBar
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView_o* __this, int32_t
   current, int32_t target, bool instant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateProgressBar_16068fc
               (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4,int param_5,
               ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iStack_58;
  int iStack_54;
  
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
    lVar5 = *(long *)(param_3 + 0x60);
    iStack_54 = param_4;
    uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_54);
    iStack_58 = param_5;
    uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_58);
    uVar3 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar3,uVar4,0);
    if (lVar5 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar5,uVar3,1,0);
      if ((param_6 & 1) == 0) {
        Modules_Infrastructure_Utils_TweenExtensions__DoSize_3de76f8
                  (((float)param_4 / (float)param_5) * *(float *)(param_3 + 0x58),param_2,
                   _UNK_04339bdc,*(undefined8 *)(param_3 + 0x50),0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Kill_1eda9a4(param_3,0,0);
        if (*(long *)(param_3 + 0x50) == 0) goto LAB_01706a80;
        UnityEngine_SpriteRenderer__set_size_4095cb8
                  (((float)param_4 / (float)param_5) * *(float *)(param_3 + 0x58),param_2,
                   *(long *)(param_3 + 0x50),0);
      }
      return;
    }
  }
LAB_01706a80:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

