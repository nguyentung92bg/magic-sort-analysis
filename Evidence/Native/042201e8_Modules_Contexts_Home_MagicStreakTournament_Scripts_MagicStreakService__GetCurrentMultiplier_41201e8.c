/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetCurrentMultiplier
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplier (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetCurrentMultiplier
   int32_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplier
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplier_41201e8
          (long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000005c3ac89 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a308);
    bRam0000000005c3ac89 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                    (param_1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,uVar1,*(undefined8 *)PTR_DAT_0577a308);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

