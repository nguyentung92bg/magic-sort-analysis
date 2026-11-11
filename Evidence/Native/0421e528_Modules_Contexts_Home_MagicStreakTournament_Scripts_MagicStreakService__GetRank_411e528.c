/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetRank
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetRank
   int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c3ac7e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2fd8);
    FUN_012d0dc8(PTR_DAT_057e9860);
    FUN_012d0dc8(PTR_DAT_057f0490);
    FUN_012d0dc8(PTR_DAT_05783f10);
    FUN_012d0dc8(PTR_DAT_0580ccc8);
    bRam0000000005c3ac7e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 == 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__UpdateLeaderboard_411edb4
              (param_1);
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 == 0) {
      return 0;
    }
  }
  puVar2 = PTR_DAT_0580ccc8;
  if (*(int *)(lVar5 + 0x18) == 0) {
    return 0;
  }
  lVar3 = *(long *)PTR_DAT_0580ccc8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057e9860;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Func_object__bool____ctor_338137c(lVar6,uVar7,*(undefined8 *)PTR_DAT_05783f10,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    FUN_012d0d74(plVar4,lVar6);
  }
  lVar5 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                    (lVar5,lVar6,*(undefined8 *)PTR_DAT_057d2fd8);
  if (lVar5 != 0) {
    return *(undefined4 *)(lVar5 + 0x10);
  }
  return 0;
}

