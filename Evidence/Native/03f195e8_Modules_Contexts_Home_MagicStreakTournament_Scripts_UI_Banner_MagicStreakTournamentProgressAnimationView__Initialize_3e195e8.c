/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t streakCount, System_Collections_Generic_List_int__o* multipliers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$Initialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t streakCount, System_Collections_Generic_List_int__o* multipliers, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__Initialize_3e195e8
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
                    /* try { // try from 03f19600 to 04019607 has its CatchHandler @ 03f1967c */
  if (*(long *)(param_1 + 0x38) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x38),0,0);
  }
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SendMultiplierPositions_3e1a99c
            (param_1);
                    /* try { // try from 03f19618 to 04019623 has its CatchHandler @ 03f19678 */
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SetStreakCount_3e1a9c0
            (param_1,param_2,param_3);
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f1963c to 04019647 has its CatchHandler @ 03f1968c */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c380ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ca58);
    FUN_012d0dc8(PTR_DAT_057c9888);
    FUN_012d0dc8(PTR_DAT_057c2030);
    bRam0000000005c380ec = 1;
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    fVar11 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(lVar7 + 0x18),0);
    puVar6 = PTR_DAT_057c9888;
    puVar5 = PTR_DAT_057c2030;
    lVar9 = *(long *)(lVar7 + 0x28);
    if (lVar9 != 0) {
      iVar10 = 0;
      do {
        if (*(int *)(lVar9 + 0x18) <= iVar10) {
          return;
        }
        if ((*(long *)(lVar7 + 0x78) == 0) ||
           (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(lVar7 + 0x78),iVar10,*(undefined8 *)puVar5), lVar9 == 0))
        break;
        fVar12 = (float)UnityEngine_Transform__get_position_4092b08(lVar9,0);
        if (*(long *)(lVar7 + 0x28) == 0) break;
        plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(lVar7 + 0x28),iVar10,*(undefined8 *)puVar6);
        lVar9 = *(long *)(lVar7 + 0x20);
        if (lVar9 == 0) break;
        if (fVar11 <= fVar12) {
          puVar1 = (undefined4 *)(lVar9 + 0x19c);
          puVar2 = (undefined4 *)(lVar9 + 0x1a0);
          puVar3 = (undefined4 *)(lVar9 + 0x1a4);
          puVar4 = (undefined4 *)(lVar9 + 0x1a8);
        }
        else {
          puVar1 = (undefined4 *)(lVar9 + 0x18c);
          puVar2 = (undefined4 *)(lVar9 + 400);
          puVar3 = (undefined4 *)(lVar9 + 0x194);
          puVar4 = (undefined4 *)(lVar9 + 0x198);
        }
        if (plVar8 == (long *)0x0) break;
        (**(code **)(*plVar8 + 0x2a8))
                  (*puVar1,*puVar2,*puVar3,*puVar4,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        lVar9 = *(long *)(lVar7 + 0x28);
        iVar10 = iVar10 + 1;
      } while (lVar9 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

