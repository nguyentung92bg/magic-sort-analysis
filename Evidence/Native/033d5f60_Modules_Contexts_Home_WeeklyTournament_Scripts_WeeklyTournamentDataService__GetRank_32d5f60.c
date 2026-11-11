/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$GetRank
int32_t Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$GetRank
   int32_t Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c31d51 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a5c8);
    FUN_012d0dc8(PTR_DAT_0578eec0);
    FUN_012d0dc8(PTR_DAT_0576f630);
    FUN_012d0dc8(PTR_DAT_057e3a50);
    bRam0000000005c31d51 = 1;
  }
  puVar2 = PTR_DAT_057e3a50;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
      lVar3 = *(long *)PTR_DAT_057e3a50;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar2;
      }
      puVar1 = PTR_DAT_0578eec0;
      lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar3 = *(long *)puVar2;
        }
        uVar7 = **(undefined8 **)(lVar3 + 0xb8);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_033d6088;
        System_Func_object__bool____ctor_338137c(lVar6,uVar7,*(undefined8 *)PTR_DAT_0576f630,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar4 = lVar6;
        FUN_012d0d74(plVar4,lVar6);
      }
      lVar5 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                        (lVar5,lVar6,*(undefined8 *)PTR_DAT_0575a5c8);
      if (lVar5 != 0) {
        return *(undefined4 *)(lVar5 + 0x28);
      }
    }
    return 0xffffffff;
  }
LAB_033d6088:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

