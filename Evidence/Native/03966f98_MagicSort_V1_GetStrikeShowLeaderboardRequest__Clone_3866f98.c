/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$Clone
MagicSort_V1_GetStrikeShowLeaderboardRequest_o* MagicSort_V1_GetStrikeShowLeaderboardRequest__Clone (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$Clone
   MagicSort_V1_GetStrikeShowLeaderboardRequest_o*
   MagicSort_V1_GetStrikeShowLeaderboardRequest__Clone
   (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, const MethodInfo* method); */

long MagicSort_V1_GetStrikeShowLeaderboardRequest__Clone_3866f98(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057c26a0;
  if ((bRam0000000005c349ba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c26a0);
    bRam0000000005c349ba = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    MagicSort_V1_GetStrikeShowLeaderboardRequest___ctor_3866f40(lVar2,param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

