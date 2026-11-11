/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultView$$RecycleCurrentCurrencyView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__RecycleCurrentCurrencyView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultView$$RecycleCurrentCurrencyView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__RecycleCurrentCurrencyView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__RecycleCurrentCurrencyView_3e10b04
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_0576c200;
  if ((bRam0000000005c3807c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3807c = 1;
  }
  plVar7 = (long *)(param_1 + 0x38);
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if ((*plVar7 != 0) &&
       (lVar8 = UnityEngine_Component__get_transform_408b444(*plVar7,0), lVar8 != 0)) {
      UnityEngine_Transform__SetParent_409352c(lVar8,0,0);
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x1d8))(plVar6,*plVar7,*(undefined8 *)(*plVar6 + 0x1e0));
        *plVar7 = 0;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
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

