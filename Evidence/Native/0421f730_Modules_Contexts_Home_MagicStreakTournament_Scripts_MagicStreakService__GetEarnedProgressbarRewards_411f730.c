/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetEarnedProgressbarRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEarnedProgressbarRewards (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetEarnedProgressbarRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEarnedProgressbarRewards
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEarnedProgressbarRewards_411f730
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  if ((bRam0000000005c3ac7b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c3ac7b = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
    iVar9 = *(int *)(lVar7 + 0x2c);
    iVar1 = *(int *)(*(long *)(lVar7 + 0x20) + 0x20);
    if (iVar9 < iVar1) {
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
      puVar4 = PTR_DAT_057a2920;
      puVar3 = PTR_DAT_05766c50;
      if (lVar7 == 0) goto LAB_0421f898;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057994c8);
      do {
        lVar5 = *(long *)(param_1 + 0x60);
        if (lVar5 == 0) goto LAB_0421f898;
        if (iVar9 < *(int *)(lVar5 + 0x18)) {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,iVar9,*(undefined8 *)puVar4);
          if (lVar5 == 0) goto LAB_0421f898;
          uVar6 = *(undefined8 *)(lVar5 + 0x10);
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_0421f898;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar7);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar1 != iVar9);
    }
    else {
      lVar7 = 0;
    }
    return lVar7;
  }
LAB_0421f898:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

