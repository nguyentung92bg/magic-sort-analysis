/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$Clone
MagicSort_V1_StrikeShowLeaderboardPlayer_o* MagicSort_V1_StrikeShowLeaderboardPlayer__Clone (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$Clone
   MagicSort_V1_StrikeShowLeaderboardPlayer_o* MagicSort_V1_StrikeShowLeaderboardPlayer__Clone
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, const MethodInfo* method); */

long MagicSort_V1_StrikeShowLeaderboardPlayer__Clone_386be3c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057588d8;
  if ((bRam0000000005c349fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057588d8);
    bRam0000000005c349fd = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    MagicSort_V1_StrikeShowLeaderboardPlayer___ctor_386bd54(lVar2,param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

