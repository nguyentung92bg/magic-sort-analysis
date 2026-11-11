/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Rewards.DuckFestivalLeaderboardElementRankImageSelector$$Select
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select (Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector_o* __this, int32_t rank, bool isMe, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Rewards.DuckFestivalLeaderboardElementRankImageSelector$$Select
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector_o*
   __this, int32_t rank, bool isMe, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Rewards_DuckFestivalLeaderboardElementRankImageSelector__Select_38c62b0
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 == 3) {
    if (*(long *)(param_1 + 0x10) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x10),0,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),0,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_039c63f4;
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_039c63f4;
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),0,0);
        lVar1 = *(long *)(param_1 + 0x30);
        if (lVar1 == 0) goto LAB_039c63f4;
        uVar2 = 1;
        goto LAB_039c63e8;
      }
    }
  }
  else {
    if (param_2 == 2) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_039c63f4;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x10),0,0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_039c63f4;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),0,0);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_039c63f4;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 == 0) goto LAB_039c63f4;
      uVar2 = 1;
    }
    else {
      if (param_2 == 1) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_039c63f4;
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x10),0,0);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_039c63f4;
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),0,0);
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 == 0) goto LAB_039c63f4;
        uVar2 = 1;
      }
      else {
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 == 0) goto LAB_039c63f4;
        uVar2 = 0;
      }
      UnityEngine_GameObject__SetActive_408e318(lVar1,uVar2,0);
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 == 0) goto LAB_039c63f4;
      uVar2 = 0;
    }
    UnityEngine_GameObject__SetActive_408e318(lVar1,uVar2,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      uVar2 = 0;
LAB_039c63e8:
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,uVar2);
      return;
    }
  }
LAB_039c63f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

