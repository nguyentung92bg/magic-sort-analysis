/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateView_3e18fb8
               (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
                    /* try { // try from 03f18fbc to 0401900b has its CatchHandler @ 03f18dc0 */
  if ((bRam0000000005c380c8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576ec60);
    FUN_012d0dc8(PTR_DAT_0575a528);
    bRam0000000005c380c8 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 03f1900c to 0401901b has its CatchHandler @ 03f1901c */
  bVar1 = *(byte *)(*(long *)PTR_DAT_0576ec60 + 300);
                    /* catch() { ... } // from try @ 03f18fa4 with catch @ 03f1901c
                       catch() { ... } // from try @ 03f1900c with catch @ 03f1901c */
                    /* try { // try from 03f19020 to 04019023 has its CatchHandler @ 03f1902c */
                    /* try { // try from 03f19024 to 0401902f has its CatchHandler @ 03f18dc0 */
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0576ec60)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* catch() { ... } // from try @ 03f19020 with catch @ 03f1902c */
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0575a528 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0575a528))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_3);
    }
  }
  if ((param_3 != (long *)0x0) && (param_2[9] != 0)) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__Show_3e15664
              (param_2[9],(int)param_3[2],*(undefined1 *)((long)param_3 + 0x24));
    if (param_2[10] != 0) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView__Show_3e15774
                (param_2[10],*(undefined1 *)((long)param_3 + 0x24));
      if (param_2[0xb] != 0) {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardView__Show_3e157d8
                  (param_2[0xb],param_3[9]);
        if (param_2[0xc] != 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardImage__UpdateDisplay_3e15918
                    (param_2[0xc],(int)param_3[5]);
          plVar5 = (long *)param_2[7];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x558))(plVar5,param_3[3],*(undefined8 *)(*plVar5 + 0x560));
            puVar3 = PTR_DAT_05774390;
            puVar2 = PTR_DAT_0576aae0;
            lVar6 = param_2[8];
            if (*(char *)((long)param_3 + 0x24) == '\0') {
              if (lVar6 != 0) {
                lVar7 = param_3[8];
                lVar9 = param_3[6];
                if ((bRam0000000005c2d758 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0578f608,lVar9,lVar7,0);
                  FUN_012d0dc8(PTR_DAT_0576aae0);
                  bRam0000000005c2d758 = 1;
                }
                *(undefined1 *)(lVar6 + 0x30) = 0;
                *(long *)(lVar6 + 0x20) = lVar9;
                FUN_012d0d74((long *)(lVar6 + 0x20),lVar9);
                *(long *)(lVar6 + 0x28) = lVar7;
                FUN_012d0d74((long *)(lVar6 + 0x28),lVar7);
                lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
                if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) &&
                   (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar8,*(undefined8 *)PTR_DAT_0578f608), lVar8 != 0)) {
                  lVar6 = *(long *)(lVar6 + 0x18);
                  uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite_3e09630
                                    (lVar8,lVar9,lVar7,0);
                  if (lVar6 != 0) goto UnityEngine_SpriteRenderer__set_sprite_4095b64;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
            else if (lVar6 != 0) {
              if ((bRam0000000005c2d759 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057870b8,0);
                FUN_012d0dc8(PTR_DAT_0576aae0);
                FUN_012d0dc8(PTR_DAT_05774390);
                bRam0000000005c2d759 = 1;
              }
              *(undefined1 *)(lVar6 + 0x30) = 1;
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
              FUN_012d0d74();
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)puVar3;
              FUN_012d0d74();
              lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
              if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) &&
                 (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar9,*(undefined8 *)PTR_DAT_057870b8), lVar9 != 0)) {
                lVar6 = *(long *)(lVar6 + 0x18);
                uVar4 = Modules_Contexts_Home_Profile_Scripts_ProfileSpriteService__GetActiveSprite_2ae0254
                                  (lVar9,0);
                if (lVar6 != 0) {
UnityEngine_SpriteRenderer__set_sprite_4095b64:
                  if (pcRam0000000005c3a730 == (code *)0x0) {
                    pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
                  }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c3a730)(lVar6,uVar4);
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

