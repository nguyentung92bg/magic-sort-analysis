/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$GetHashCode
int32_t MagicSort_V1_GetStrikeShowLeaderboardRequest__GetHashCode (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$GetHashCode
   int32_t MagicSort_V1_GetStrikeShowLeaderboardRequest__GetHashCode
   (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, const MethodInfo* method); */

uint MagicSort_V1_GetStrikeShowLeaderboardRequest__GetHashCode_3867180(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lStack_18;
  
  lStack_18 = 0;
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    if ((int)plVar3[2] == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      uVar1 = uVar1 ^ 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lStack_18 = *(long *)(param_1 + 0x20);
      uVar2 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
      uVar1 = uVar2 ^ uVar1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      lStack_18 = *(long *)(param_1 + 0x28);
      uVar2 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
      uVar1 = uVar2 ^ uVar1;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

