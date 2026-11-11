/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetNeededScoreForProgressbarCurrentStep
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetNeededScoreForProgressbarCurrentStep (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetNeededScoreForProgressbarCurrentStep
   int32_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetNeededScoreForProgressbarCurrentStep
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetNeededScoreForProgressbarCurrentStep_41202a4
          (long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c3ac8a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    bRam0000000005c3ac8a = 1;
  }
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) &&
     (lVar3 = *(long *)(param_1 + 0x60), lVar3 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x20);
    if (iVar1 < *(int *)(lVar3 + 0x18)) {
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar1,*(undefined8 *)PTR_DAT_057a2920);
      if (lVar4 == 0) goto LAB_04220330;
      uVar2 = *(undefined4 *)(lVar4 + 0x20);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_04220330:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

