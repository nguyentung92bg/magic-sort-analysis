/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetModel
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetModel (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o* playerViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetModel
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetModel
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o*
   playerViewModel, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetModel_3e155b0
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__Show_3e15664
              (*(long *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x10),
               *(undefined1 *)(param_2 + 0x24));
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView__Show_3e15774
                (*(long *)(param_1 + 0x50),*(undefined1 *)(param_2 + 0x24));
      if (*(long *)(param_1 + 0x58) != 0) {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardView__Show_3e157d8
                  (*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x48));
        if (*(long *)(param_1 + 0x60) != 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardImage__UpdateDisplay_3e15918
                    (*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x28));
          plVar4 = *(long **)(param_1 + 0x38);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x558))
                      (plVar4,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(*plVar4 + 0x560));
            puVar2 = PTR_DAT_05774390;
            puVar1 = PTR_DAT_0576aae0;
            lVar5 = *(long *)(param_1 + 0x40);
            if (*(char *)(param_2 + 0x24) == '\0') {
              if (lVar5 != 0) {
                uVar6 = *(undefined8 *)(param_2 + 0x40);
                uVar3 = *(undefined8 *)(param_2 + 0x30);
                if ((bRam0000000005c2d758 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0578f608,uVar3,uVar6,0);
                  FUN_012d0dc8(PTR_DAT_0576aae0);
                  bRam0000000005c2d758 = 1;
                }
                *(undefined1 *)(lVar5 + 0x30) = 0;
                *(undefined8 *)(lVar5 + 0x20) = uVar3;
                FUN_012d0d74((undefined8 *)(lVar5 + 0x20),uVar3);
                *(undefined8 *)(lVar5 + 0x28) = uVar6;
                FUN_012d0d74((undefined8 *)(lVar5 + 0x28),uVar6);
                lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
                if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
                   (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar7,*(undefined8 *)PTR_DAT_0578f608), lVar7 != 0)) {
                  lVar5 = *(long *)(lVar5 + 0x18);
                  uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite_3e09630
                                    (lVar7,uVar3,uVar6,0);
                  if (lVar5 != 0) goto UnityEngine_SpriteRenderer__set_sprite_4095b64;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
            else if (lVar5 != 0) {
              if ((bRam0000000005c2d759 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057870b8,0);
                FUN_012d0dc8(PTR_DAT_0576aae0);
                FUN_012d0dc8(PTR_DAT_05774390);
                bRam0000000005c2d759 = 1;
              }
              *(undefined1 *)(lVar5 + 0x30) = 1;
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
              FUN_012d0d74();
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)puVar2;
              FUN_012d0d74();
              lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
              if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
                 (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar7,*(undefined8 *)PTR_DAT_057870b8), lVar7 != 0)) {
                lVar5 = *(long *)(lVar5 + 0x18);
                uVar3 = Modules_Contexts_Home_Profile_Scripts_ProfileSpriteService__GetActiveSprite_2ae0254
                                  (lVar7,0);
                if (lVar5 != 0) {
UnityEngine_SpriteRenderer__set_sprite_4095b64:
                  if (pcRam0000000005c3a730 == (code *)0x0) {
                    pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
                  }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c3a730)(lVar5,uVar3);
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

