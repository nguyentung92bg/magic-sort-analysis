/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryHandleNotSyncedScoreAndManipulateResponse
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryHandleNotSyncedScoreAndManipulateResponse (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryHandleNotSyncedScoreAndManipulateResponse
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryHandleNotSyncedScoreAndManipulateResponse
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryHandleNotSyncedScoreAndManipulateResponse_32da108
               (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_2 != 0) {
    lVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__FindPlayer_32d9400
                      (param_1,*(undefined8 *)(param_2 + 0x18));
    if ((lVar5 != 0) && (*(char *)(param_2 + 0x31) == '\0')) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar6 == 0)) goto LAB_033da180;
      iVar8 = *(int *)(lVar5 + 0x18);
      iVar1 = *(int *)(lVar6 + 0x14);
      if (iVar8 < iVar1) {
        *(int *)(lVar5 + 0x18) = iVar1;
        Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SendSetScoreRequest_32d9628
                  (param_1);
        if ((bRam0000000005c31d73 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05815da0);
          FUN_012d0dc8(PTR_DAT_057cc3c8);
          FUN_012d0dc8(PTR_DAT_057ea1d0);
          FUN_012d0dc8(PTR_DAT_05809c98);
          FUN_012d0dc8(PTR_DAT_057efbc0);
          FUN_012d0dc8(PTR_DAT_057d9000);
          FUN_012d0dc8(PTR_DAT_057a2088);
          bRam0000000005c31d73 = 1;
        }
        puVar2 = PTR_DAT_057a2088;
        if (param_2 != 0) {
          plVar7 = (long *)(param_2 + 0x18);
          lVar6 = *plVar7;
          lVar5 = *(long *)PTR_DAT_057a2088;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar5 = *(long *)puVar2;
          }
          puVar3 = PTR_DAT_057ea1d0;
          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar2;
            }
            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if (lVar9 == 0) goto LAB_033d985c;
            System_Func_object__int____ctor_3381cbc(lVar9,uVar10,*(undefined8 *)PTR_DAT_057d9000,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            *plVar4 = lVar9;
            FUN_012d0d74(plVar4,lVar9);
          }
          puVar2 = PTR_DAT_057cc3c8;
          uVar10 = System_Linq_Enumerable__OrderByDescending_object__int__2423b50
                             (lVar6,lVar9,*(undefined8 *)PTR_DAT_05815da0);
          lVar5 = System_Linq_Enumerable__ToList_object__242f814(uVar10,*(undefined8 *)puVar2);
          *plVar7 = lVar5;
          FUN_012d0d74(plVar7,lVar5);
          puVar2 = PTR_DAT_057efbc0;
          lVar5 = *plVar7;
          if (lVar5 != 0) {
            iVar8 = 0;
            do {
              if (*(int *)(lVar5 + 0x18) <= iVar8) {
                return;
              }
              lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar5,iVar8,*(undefined8 *)puVar2);
              if (lVar5 == 0) break;
              iVar8 = iVar8 + 1;
              *(int *)(lVar5 + 0x28) = iVar8;
              lVar5 = *plVar7;
            } while (lVar5 != 0);
          }
        }
LAB_033d985c:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (iVar1 < iVar8) {
        *(int *)(lVar6 + 0x14) = iVar8;
      }
    }
    return;
  }
LAB_033da180:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

