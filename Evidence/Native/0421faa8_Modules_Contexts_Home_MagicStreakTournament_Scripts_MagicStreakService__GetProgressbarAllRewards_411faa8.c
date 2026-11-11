/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetProgressbarAllRewards
System_Collections_Generic_List_MagicStreakProgressbarRewardElementViewModel__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarAllRewards (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetProgressbarAllRewards
   System_Collections_Generic_List_MagicStreakProgressbarRewardElementViewModel__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarAllRewards
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarAllRewards_411faa8
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000005c3ac80 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    bRam0000000005c3ac80 = 1;
  }
  puVar2 = PTR_DAT_057a2920;
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) &&
     (lVar3 = *(long *)(param_1 + 0x60), lVar3 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x20);
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar5,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      *(bool *)(lVar4 + 0x1a) = iVar1 == iVar5;
      *(bool *)(lVar4 + 0x1b) = iVar5 < iVar1;
      lVar3 = *(long *)(param_1 + 0x60);
      iVar5 = iVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

