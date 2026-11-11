/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardPopUp$$DarkenUnselectedHats
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__DarkenUnselectedHats (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp_o* __this, DailyRewardPopUpHatView_o* selectedHatView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardPopUp$$DarkenUnselectedHats
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__DarkenUnselectedHats
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp_o* __this,
   DailyRewardPopUpHatView_o* selectedHatView, const MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__DarkenUnselectedHats_38d6150
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000005c34bda & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c34bda = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = UnityEngine_Object__op_Equality_407f288(lVar3,param_2,0);
        if ((uVar2 & 1) == 0) {
          if (lVar3 == 0) goto LAB_039d6218;
          DailyRewardPopUpHatView__DarkenHatViews_19ed7a8(lVar3,0);
        }
        uVar2 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_039d6218:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

