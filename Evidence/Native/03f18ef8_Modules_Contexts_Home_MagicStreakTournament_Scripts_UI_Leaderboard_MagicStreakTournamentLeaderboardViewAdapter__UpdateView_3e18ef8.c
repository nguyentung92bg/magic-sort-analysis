/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateView_3e18ef8
               (long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
                    /* try { // try from 03f18f08 to 04018f0b has its CatchHandler @ 03f18f6c */
                    /* try { // try from 03f18f0c to 04018f1b has its CatchHandler @ 03f18f88 */
  if ((bRam0000000005c380c7 & 1) == 0) {
                    /* try { // try from 03f18f20 to 04018f2b has its CatchHandler @ 03f18f74 */
    FUN_012d0dc8(PTR_DAT_05813eb8);
                    /* try { // try from 03f18f2c to 04018f5f has its CatchHandler @ 03f18dc0 */
    FUN_012d0dc8(PTR_DAT_0576ec60);
    bRam0000000005c380c7 = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)PTR_DAT_05813eb8),
     param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 03f18f60 to 04018f63 has its CatchHandler @ 03f18f68 */
                    /* try { // try from 03f18f64 to 04018f67 has its CatchHandler @ 03f18f84 */
                    /* catch() { ... } // from try @ 03f18f60 with catch @ 03f18f68
                       try { // try from 03f18f68 to 04018fa3 has its CatchHandler @ 03f18dc0 */
                    /* catch() { ... } // from try @ 03f18f08 with catch @ 03f18f6c */
                    /* catch() { ... } // from try @ 03f18e90 with catch @ 03f18f70 */
  bVar1 = *(byte *)(*(long *)PTR_DAT_0576ec60 + 300);
                    /* catch() { ... } // from try @ 03f18f20 with catch @ 03f18f74 */
                    /* catch() { ... } // from try @ 03f18ea4 with catch @ 03f18f78 */
                    /* catch() { ... } // from try @ 03f18e74 with catch @ 03f18f7c */
                    /* catch() { ... } // from try @ 03f18e60 with catch @ 03f18f80 */
                    /* catch() { ... } // from try @ 03f18e4c with catch @ 03f18f84
                       catch() { ... } // from try @ 03f18f64 with catch @ 03f18f84 */
                    /* catch() { ... } // from try @ 03f18f0c with catch @ 03f18f88 */
                    /* catch() { ... } // from try @ 03f18eec with catch @ 03f18f8c */
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0576ec60)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  if ((lVar7 != 0) && (param_2[9] != 0)) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__Show_3e15664
              (param_2[9],*(undefined4 *)(lVar7 + 0x10),*(undefined1 *)(lVar7 + 0x24));
    if (param_2[10] != 0) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementBackgroundView__Show_3e15774
                (param_2[10],*(undefined1 *)(lVar7 + 0x24));
      if (param_2[0xb] != 0) {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardView__Show_3e157d8
                  (param_2[0xb],*(undefined8 *)(lVar7 + 0x48));
        if (param_2[0xc] != 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardImage__UpdateDisplay_3e15918
                    (param_2[0xc],*(undefined4 *)(lVar7 + 0x28));
          plVar5 = (long *)param_2[7];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x558))
                      (plVar5,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(*plVar5 + 0x560));
            puVar3 = PTR_DAT_05774390;
            puVar2 = PTR_DAT_0576aae0;
            lVar6 = param_2[8];
            if (*(char *)(lVar7 + 0x24) == '\0') {
              if (lVar6 != 0) {
                uVar8 = *(undefined8 *)(lVar7 + 0x40);
                uVar4 = *(undefined8 *)(lVar7 + 0x30);
                if ((bRam0000000005c2d758 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0578f608,uVar4,uVar8,0);
                  FUN_012d0dc8(PTR_DAT_0576aae0);
                  bRam0000000005c2d758 = 1;
                }
                *(undefined1 *)(lVar6 + 0x30) = 0;
                *(undefined8 *)(lVar6 + 0x20) = uVar4;
                FUN_012d0d74((undefined8 *)(lVar6 + 0x20),uVar4);
                *(undefined8 *)(lVar6 + 0x28) = uVar8;
                FUN_012d0d74((undefined8 *)(lVar6 + 0x28),uVar8);
                lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
                if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
                   (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar7,*(undefined8 *)PTR_DAT_0578f608), lVar7 != 0)) {
                  lVar6 = *(long *)(lVar6 + 0x18);
                  uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite_3e09630
                                    (lVar7,uVar4,uVar8,0);
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
              lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
              if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
                 (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar7,*(undefined8 *)PTR_DAT_057870b8), lVar7 != 0)) {
                lVar6 = *(long *)(lVar6 + 0x18);
                uVar4 = Modules_Contexts_Home_Profile_Scripts_ProfileSpriteService__GetActiveSprite_2ae0254
                                  (lVar7,0);
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

