/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$Initialize
void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__Initialize (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$Initialize
   void 
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__Initialize
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__Initialize_2de0ca0
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000005c2fd48 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ada8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05768590);
    FUN_012d0dc8(PTR_DAT_057c4060);
    FUN_012d0dc8(PTR_DAT_057de310);
    FUN_012d0dc8(PTR_DAT_05816c90);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2fd48 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x1d0));
    plVar7 = *(long **)(param_1 + 0x20);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1d0));
      puVar5 = PTR_DAT_05816c90;
      puVar4 = PTR_DAT_0578a3a8;
      if (*(long *)(param_1 + 0x40) != 0) {
        System_Collections_Generic_Dictionary_object__Vector3___Clear_420a164
                  (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_057c4060);
        lVar9 = *(long *)(param_1 + 0x40);
        uVar10 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar10 = System_Type__GetTypeFromHandle_2690398(uVar10,0);
        if ((plVar6 != (long *)0x0) &&
           (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_LeaderboardElementView__get_Size_2de07b4
                      (plVar6), puVar5 = PTR_DAT_057de310, puVar4 = PTR_DAT_05768590, lVar9 != 0)) {
          System_Collections_Generic_Dictionary_object__Vector3___Add_4209fac
                    (lVar9,uVar10,*(undefined8 *)PTR_DAT_05768590);
          lVar9 = *(long *)(param_1 + 0x40);
          uVar10 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar5,0);
          if ((plVar7 != (long *)0x0) &&
             (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_LeaderboardElementView__get_Size_2de07b4
                        (plVar7), puVar5 = PTR_DAT_0576aae0, lVar9 != 0)) {
            System_Collections_Generic_Dictionary_object__Vector3___Add_4209fac
                      (lVar9,uVar10,*(undefined8 *)puVar4);
            (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            if (((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
                (lVar9 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar9 != 0)) &&
               (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_0579ada8), lVar9 != 0)) {
              uVar10 = Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestService__GetLeaderboardViewModel_2dd7f00
                                 ();
              puVar8 = (undefined8 *)(param_1 + 0x38);
              *puVar8 = uVar10;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

