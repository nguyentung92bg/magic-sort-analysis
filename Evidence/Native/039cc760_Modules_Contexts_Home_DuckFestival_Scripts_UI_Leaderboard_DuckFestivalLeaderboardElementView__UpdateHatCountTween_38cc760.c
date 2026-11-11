/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementView$$UpdateHatCountTween
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__UpdateHatCountTween (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o* __this, int32_t currentRewardAmount, int32_t targetRewardAmount, float totalDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementView$$UpdateHatCountTween
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__UpdateHatCountTween
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o*
   __this, int32_t currentRewardAmount, int32_t targetRewardAmount, float totalDuration, const
   MethodInfo* method); */

long Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__UpdateHatCountTween_38cc760
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               int param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_057693a8;
  if ((bRam0000000005c34b75 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
                    /* catch() { ... } // from try @ 039cc900 with catch @ 039cc7a8
                       catch() { ... } // from try @ 039cc93c with catch @ 039cc7a8
                       catch() { ... } // from try @ 039cc978 with catch @ 039cc7a8
                       catch() { ... } // from try @ 039cc9a4 with catch @ 039cc7a8
                       catch() { ... } // from try @ 039cca28 with catch @ 039cc7a8 */
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577fe10);
    FUN_012d0dc8(PTR_DAT_057f65b8);
    FUN_012d0dc8(PTR_DAT_057dd6d0);
    FUN_012d0dc8(PTR_DAT_057bbca8);
                    /* try { // try from 039cc7e0 to 03acc7e3 has its CatchHandler @ 039cc900 */
    FUN_012d0dc8(PTR_DAT_057693a8);
    bRam0000000005c34b75 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 039cc7fc to 03acc8ff has its CatchHandler @ 039cc90c */
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_4);
    lVar4 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,0 < param_6,0);
      if ((*(long *)(param_4 + 0x30) != 0) &&
         (lVar4 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_4 + 0x30),0), lVar4 != 0)
         ) {
        uVar7 = UnityEngine_Transform__get_localScale_4093230(lVar4,0);
        *(undefined4 *)(lVar3 + 0x18) = uVar7;
        *(undefined4 *)(lVar3 + 0x1c) = param_2;
        *(undefined4 *)(lVar3 + 0x20) = param_3;
        puVar1 = PTR_DAT_057cc518;
        if (*(long *)(param_4 + 0x30) != 0) {
          uVar5 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_4 + 0x30),0);
          DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                    (_UNK_0432e0b4,_UNK_0432e0b4,_UNK_0432e0b4,param_1._0_4_ * 0.5,uVar5,0);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057f65b8;
          puVar1 = PTR_DAT_057606c8;
          if (lVar4 != 0) {
            DG_Tweening_TweenCallback_float____ctor_341f244
                      (lVar4,lVar3,*(undefined8 *)PTR_DAT_057dd6d0,0);
            uVar5 = DG_Tweening_DOVirtual__Float_1edbb8c
                              ((float)param_5,(float)param_6,param_1._0_8_,lVar4,0);
            lVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                              (uVar5,3,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cc7e0 with catch @ 039cc900
                       try { // try from 039cc900 to 03acc923 has its CatchHandler @ 039cc7a8 */
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0577fe10;
            if (lVar6 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cc7fc with catch @ 039cc90c
                        */
                    /* try { // try from 039cc924 to 03acc93b has its CatchHandler @ 039cca20 */
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,lVar3,*(undefined8 *)PTR_DAT_057bbca8,0);
              uVar5 = *(undefined8 *)puVar1;
                    /* try { // try from 039cc93c to 03acc95f has its CatchHandler @ 039cc7a8 */
              if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
                *(long *)(lVar4 + 0x80) = lVar6;
                FUN_012d0d74((long *)(lVar4 + 0x80),lVar6,uVar5);
              }
              return lVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

