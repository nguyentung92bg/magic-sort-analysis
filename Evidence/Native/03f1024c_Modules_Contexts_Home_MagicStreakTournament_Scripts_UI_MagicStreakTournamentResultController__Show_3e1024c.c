/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultController$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultController__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultController$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultController__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultController__Show_3e1024c
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000005c3807b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3807b = 1;
  }
  lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar1 = PTR_DAT_0576aae0;
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
       (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar3,*(undefined8 *)PTR_DAT_058030e0), lVar3 != 0)) {
      uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetFinalRankText_411fdc8
                        (lVar3,0);
      uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRankIndex_411fa90
                        (lVar3,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__Initialize_3e0e78c
                  (*(long *)(param_1 + 0x18),uVar2);
        lVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetTournamentReward_411fe30
                          (lVar3,0);
        puVar1 = PTR_DAT_057720a0;
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          if ((bRam0000000005c3807d & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057720a0);
            bRam0000000005c3807d = 1;
          }
          plVar6 = *(long **)(lVar5 + 0x18);
          uVar4 = System_String__Concat_1ec3580(*(undefined8 *)puVar1,uVar4,0);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
            if (lVar3 == 0) {
              lVar3 = *(long *)(lVar5 + 0x20);
              if (lVar3 == 0) goto LAB_03f10ad0;
              uVar4 = 1;
            }
            else {
              Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__ShowReward_3e10bd0
                        (lVar5,lVar3);
              lVar3 = *(long *)(lVar5 + 0x20);
              if (lVar3 == 0) goto LAB_03f10ad0;
              uVar4 = 0;
            }
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar3,uVar4);
            return;
          }
LAB_03f10ad0:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

