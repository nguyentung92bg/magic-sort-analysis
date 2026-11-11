/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$ManipulateLeaderboardResponse
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__ManipulateLeaderboardResponse (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$ManipulateLeaderboardResponse
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__ManipulateLeaderboardResponse
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__ManipulateLeaderboardResponse_32d96e0
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
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
  puVar1 = PTR_DAT_057a2088;
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 0x18);
    lVar7 = *plVar5;
    lVar3 = *(long *)PTR_DAT_057a2088;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_057ea1d0;
    lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      uVar9 = **(undefined8 **)(lVar3 + 0xb8);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar8 == 0) goto LAB_033d985c;
      System_Func_object__int____ctor_3381cbc(lVar8,uVar9,*(undefined8 *)PTR_DAT_057d9000,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar4 = lVar8;
      FUN_012d0d74(plVar4,lVar8);
    }
    puVar1 = PTR_DAT_057cc3c8;
    uVar9 = System_Linq_Enumerable__OrderByDescending_object__int__2423b50
                      (lVar7,lVar8,*(undefined8 *)PTR_DAT_05815da0);
    lVar3 = System_Linq_Enumerable__ToList_object__242f814(uVar9,*(undefined8 *)puVar1);
    *plVar5 = lVar3;
    FUN_012d0d74(plVar5,lVar3);
    puVar1 = PTR_DAT_057efbc0;
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      iVar6 = 0;
      do {
        if (*(int *)(lVar3 + 0x18) <= iVar6) {
          return;
        }
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar3,iVar6,*(undefined8 *)puVar1);
        if (lVar3 == 0) break;
        iVar6 = iVar6 + 1;
        *(int *)(lVar3 + 0x28) = iVar6;
        lVar3 = *plVar5;
      } while (lVar3 != 0);
    }
  }
LAB_033d985c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

