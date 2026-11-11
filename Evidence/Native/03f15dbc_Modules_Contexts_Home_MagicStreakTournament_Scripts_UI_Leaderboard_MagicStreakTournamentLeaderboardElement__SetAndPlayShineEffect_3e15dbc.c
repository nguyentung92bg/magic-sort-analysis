/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetAndPlayShineEffect
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetAndPlayShineEffect (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* __this, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetAndPlayShineEffect
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetAndPlayShineEffect
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   __this, float duration, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetAndPlayShineEffect_3e15dbc
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_057cacd0;
  if ((bRam0000000005c380ac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576ec60);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05807f18);
    FUN_012d0dc8(PTR_DAT_05780160);
    FUN_012d0dc8(PTR_DAT_05792348);
    FUN_012d0dc8(PTR_DAT_057cacd0);
    bRam0000000005c380ac = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x18) = param_2;
    FUN_012d0d74((long *)(lVar4 + 0x18),param_2);
    if (*(long *)(param_2 + 0x50) != 0) {
      plVar8 = (long *)(lVar4 + 0x10);
      *plVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x18);
      FUN_012d0d74(plVar8);
      if ((*(long *)(param_2 + 0x30) != 0) && (*plVar8 != 0)) {
        UnityEngine_Renderer__set_material_4082930
                  (*plVar8,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30),0);
        puVar2 = PTR_DAT_0576ec60;
        if (*plVar8 != 0) {
          lVar5 = UnityEngine_Renderer__get_material_40828f4(*plVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          if (lVar5 != 0) {
            UnityEngine_Material__SetFloat_383f1c0
                      (0,lVar5,**(undefined4 **)(*(long *)puVar2 + 0xb8),0);
            puVar3 = PTR_DAT_05780160;
            puVar1 = PTR_DAT_057606c8;
            if (*plVar8 != 0) {
              uVar6 = UnityEngine_Renderer__get_material_40828f4(*plVar8,0);
              uVar6 = DG_Tweening_ShortcutExtensions__DOFloat_1ee3edc
                                (0x3f800000,param_1,uVar6,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                                 0);
              lVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar6,2,*(undefined8 *)puVar3);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar2 = PTR_DAT_05807f18;
              if (lVar7 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar7,lVar4,*(undefined8 *)PTR_DAT_05792348,0);
                uVar6 = *(undefined8 *)puVar2;
                if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
                  *(long *)(lVar5 + 0x80) = lVar7;
                  FUN_012d0d74((long *)(lVar5 + 0x80),lVar7,uVar6);
                }
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

