/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$Clone
MagicSort_V1_StrikeShowLeaderboardResponse_o* MagicSort_V1_StrikeShowLeaderboardResponse__Clone (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$Clone
   MagicSort_V1_StrikeShowLeaderboardResponse_o* MagicSort_V1_StrikeShowLeaderboardResponse__Clone
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method); */

long MagicSort_V1_StrikeShowLeaderboardResponse__Clone_386a270(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057f2b00;
  if ((bRam0000000005c349ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f2b00);
    bRam0000000005c349ea = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    MagicSort_V1_StrikeShowLeaderboardResponse___ctor_386a12c(lVar2,param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

