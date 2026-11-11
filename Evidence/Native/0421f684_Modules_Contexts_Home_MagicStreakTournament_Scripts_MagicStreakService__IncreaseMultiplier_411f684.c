/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseMultiplier
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseMultiplier (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseMultiplier
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseMultiplier
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseMultiplier_411f684
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000005c3ac7c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    bRam0000000005c3ac7c = 1;
  }
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) &&
     (*(long *)(param_1 + 0x58) != 0)) {
    iVar1 = *(int *)(lVar4 + 0x24);
    iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = System_Math__Min_26cd444(iVar1 + 1,iVar2 + -1,0);
    lVar4 = *(long *)(param_1 + 0x28);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
      *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x24) = uVar3;
      *(undefined2 *)(lVar4 + 0x18) = 0x101;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

