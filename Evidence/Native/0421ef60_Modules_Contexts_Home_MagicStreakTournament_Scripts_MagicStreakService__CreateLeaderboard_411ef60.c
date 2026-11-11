/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CreateLeaderboard
System_Collections_Generic_List_MagicStreakTournamentLeaderboardPlayerViewModel__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateLeaderboard (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentModel_o* cachedModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CreateLeaderboard
   System_Collections_Generic_List_MagicStreakTournamentLeaderboardPlayerViewModel__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateLeaderboard
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentModel_o* cachedModel,
   const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateLeaderboard_411ef60
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_05800ab0;
  if ((bRam0000000005c3ac73 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581bd50);
    FUN_012d0dc8(PTR_DAT_05793160);
    FUN_012d0dc8(PTR_DAT_057b49b8);
    FUN_012d0dc8(PTR_DAT_0578ee48);
    FUN_012d0dc8(PTR_DAT_05800ab0);
    bRam0000000005c3ac73 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService___c__DisplayClass31_0___ctor_3e07258
              (lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    FUN_012d0d74((undefined8 *)(lVar5 + 0x10),param_1);
    plVar8 = (long *)(lVar5 + 0x18);
    *plVar8 = param_2;
    FUN_012d0d74(plVar8,param_2);
    if (*plVar8 != 0) {
      uVar7 = *(undefined8 *)(*plVar8 + 0x30);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057b49b8);
      puVar2 = PTR_DAT_0581bd50;
      puVar1 = PTR_DAT_05793160;
      if (lVar6 != 0) {
        System_Func_object__object____ctor_33820ac(lVar6,lVar5,*(undefined8 *)PTR_DAT_0578ee48,0);
        lVar5 = System_Linq_Enumerable__Select_object__object__2427df8
                          (uVar7,lVar6,*(undefined8 *)puVar2);
        lVar6 = *(long *)puVar1;
        if (lVar5 == 0) {
          uVar7 = thunk_FUN_0136d790(PTR_DAT_057ab1a0);
          uVar7 = System_Linq_Error__ArgumentNull_3d79794(uVar7,0);
          uVar4 = thunk_FUN_0136d790(PTR_DAT_058031f8);
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar7,uVar4);
        }
        if ((*(byte *)(**(long **)(lVar6 + 0x38) + 0x132) & 1) == 0) {
          FUN_0131942c();
        }
        lVar3 = thunk_FUN_01320e48();
        if (lVar3 != 0) {
          (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 8) + 8))(lVar3,lVar5);
          return lVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

