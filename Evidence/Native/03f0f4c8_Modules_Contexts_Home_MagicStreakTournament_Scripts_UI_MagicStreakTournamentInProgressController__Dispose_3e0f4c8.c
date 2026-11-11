/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$Dispose
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Dispose (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$Dispose
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Dispose
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Dispose_3e0f4c8
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Dispose_3e0f540
              ();
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowScrollBar_412018c
                        (*(long *)(param_1 + 0x58),0);
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0x30);
      }
      else {
        lVar7 = *(long *)(param_1 + 0x28);
      }
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
        Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                  (*(long *)(lVar7 + 0x18),0);
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar7 != 0)) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414(lVar7,0);
          puVar4 = PTR_DAT_0576c200;
          lVar7 = *(long *)(param_1 + 0x48);
          if (lVar7 != 0) {
            if ((bRam0000000005c38079 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0576c200);
              bRam0000000005c38079 = 1;
            }
            plVar8 = (long *)(lVar7 + 0x48);
            lVar9 = *plVar8;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar5 = UnityEngine_Object__op_Inequality_408e110(lVar9,0,0);
            if ((uVar5 & 1) != 0) {
              if ((*plVar8 != 0) &&
                 (lVar9 = UnityEngine_Component__get_transform_408b444(*plVar8,0), lVar9 != 0)) {
                UnityEngine_Transform__SetParent_409352c(lVar9,0,0);
                plVar6 = *(long **)(lVar7 + 0x18);
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x1d8))(plVar6,*plVar8,*(undefined8 *)(*plVar6 + 0x1e0));
                  *plVar8 = 0;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

