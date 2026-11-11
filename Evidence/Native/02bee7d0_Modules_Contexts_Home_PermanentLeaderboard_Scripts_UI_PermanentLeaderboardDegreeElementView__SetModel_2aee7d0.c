/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardDegreeElementView$$SetModel
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView__SetModel (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardDegreeElementView$$SetModel
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView__SetModel
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView_o*
   __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o*
   model, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView__SetModel_2aee7d0
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 02bee7d8 to 02cee7e3 has its CatchHandler @ 02bee74c */
                    /* try { // try from 02bee7e4 to 02cee7eb has its CatchHandler @ 02bee7ec */
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bee7cc with catch @ 02bee7ec
                       catch(type#2 @ 00000000) { ... } // from try @ 02bee7e4 with catch @ 02bee7ec
                        */
                    /* try { // try from 02bee7f0 to 02cee873 has its CatchHandler @ 02bee7f0
                       catch() { ... } // from try @ 02bee7f0 with catch @ 02bee7f0
                       catch() { ... } // from try @ 02bee934 with catch @ 02bee7f0
                       catch() { ... } // from try @ 02bee9bc with catch @ 02bee7f0 */
    Modules_Contexts_Home_WeeklyTournament_Scripts_UI_LeaderboardElementNameView__SetName_32dbbf0
              (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
               *(undefined1 *)(param_2 + 0x28),0);
    puVar2 = PTR_DAT_05774390;
    puVar1 = PTR_DAT_0576aae0;
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(char *)(param_2 + 0x28) == '\0') {
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x38);
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        if ((bRam0000000005c2d758 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578f608,uVar3,uVar5,0);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          bRam0000000005c2d758 = 1;
        }
        *(undefined1 *)(lVar4 + 0x30) = 0;
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        FUN_012d0d74((undefined8 *)(lVar4 + 0x20),uVar3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        FUN_012d0d74((undefined8 *)(lVar4 + 0x28),uVar5);
        lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
        if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) &&
           (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar6,*(undefined8 *)PTR_DAT_0578f608), lVar6 != 0)) {
          lVar4 = *(long *)(lVar4 + 0x18);
          uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite_3e09630
                            (lVar6,uVar3,uVar5,0);
          if (lVar4 != 0) goto UnityEngine_SpriteRenderer__set_sprite_4095b64;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
    else if (lVar4 != 0) {
      if ((bRam0000000005c2d759 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057870b8,0);
        FUN_012d0dc8(PTR_DAT_0576aae0);
        FUN_012d0dc8(PTR_DAT_05774390);
        bRam0000000005c2d759 = 1;
      }
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
      FUN_012d0d74();
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
      FUN_012d0d74();
      lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
      if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) &&
         (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar6,*(undefined8 *)PTR_DAT_057870b8), lVar6 != 0)) {
        lVar4 = *(long *)(lVar4 + 0x18);
        uVar3 = Modules_Contexts_Home_Profile_Scripts_ProfileSpriteService__GetActiveSprite_2ae0254
                          (lVar6,0);
        if (lVar4 != 0) {
UnityEngine_SpriteRenderer__set_sprite_4095b64:
          if (pcRam0000000005c3a730 == (code *)0x0) {
            pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
          }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a730)(lVar4,uVar3);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

