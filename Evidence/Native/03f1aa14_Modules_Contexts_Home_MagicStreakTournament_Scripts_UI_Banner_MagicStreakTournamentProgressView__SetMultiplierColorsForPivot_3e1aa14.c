/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$SetMultiplierColorsForPivot
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierColorsForPivot (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$SetMultiplierColorsForPivot
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierColorsForPivot
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierColorsForPivot_3e1aa14
               (long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000005c380ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ca58);
    FUN_012d0dc8(PTR_DAT_057c9888);
    FUN_012d0dc8(PTR_DAT_057c2030);
    bRam0000000005c380ec = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    fVar10 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0x18),0);
    puVar6 = PTR_DAT_057c9888;
    puVar5 = PTR_DAT_057c2030;
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 != 0) {
      iVar9 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar9) {
          return;
        }
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x78),iVar9,*(undefined8 *)puVar5), lVar8 == 0))
        break;
        fVar11 = (float)UnityEngine_Transform__get_position_4092b08(lVar8,0);
        if (*(long *)(param_1 + 0x28) == 0) break;
        plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(param_1 + 0x28),iVar9,*(undefined8 *)puVar6);
        lVar8 = *(long *)(param_1 + 0x20);
        if (lVar8 == 0) break;
        if (fVar10 <= fVar11) {
          puVar1 = (undefined4 *)(lVar8 + 0x19c);
          puVar2 = (undefined4 *)(lVar8 + 0x1a0);
          puVar3 = (undefined4 *)(lVar8 + 0x1a4);
          puVar4 = (undefined4 *)(lVar8 + 0x1a8);
        }
        else {
          puVar1 = (undefined4 *)(lVar8 + 0x18c);
          puVar2 = (undefined4 *)(lVar8 + 400);
          puVar3 = (undefined4 *)(lVar8 + 0x194);
          puVar4 = (undefined4 *)(lVar8 + 0x198);
        }
        if (plVar7 == (long *)0x0) break;
        (**(code **)(*plVar7 + 0x2a8))
                  (*puVar1,*puVar2,*puVar3,*puVar4,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
        lVar8 = *(long *)(param_1 + 0x28);
        iVar9 = iVar9 + 1;
      } while (lVar8 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

