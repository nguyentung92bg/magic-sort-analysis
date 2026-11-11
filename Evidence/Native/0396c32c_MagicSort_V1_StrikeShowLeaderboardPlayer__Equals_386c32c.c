/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$Equals
bool MagicSort_V1_StrikeShowLeaderboardPlayer__Equals (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, Il2CppObject* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$Equals
   bool MagicSort_V1_StrikeShowLeaderboardPlayer__Equals
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, Il2CppObject* other, const MethodInfo*
   method); */

ulong MagicSort_V1_StrikeShowLeaderboardPlayer__Equals_386c32c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  if ((bRam0000000005c34a06 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057588d8);
    bRam0000000005c34a06 = 1;
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != *(long *)PTR_DAT_057588d8) {
    param_2 = (long *)0x0;
  }
  if (param_2 != (long *)0x0) {
    if (param_2 == param_1) {
      return 1;
    }
    uVar1 = System_String__op_Inequality_1ecf400(param_1[3],param_2[3],0);
    if (((((((uVar1 & 1) == 0) &&
           (uVar1 = System_String__op_Inequality_1ecf400(param_1[4],param_2[4],0), (uVar1 & 1) == 0)
           ) && (param_1[5] == param_2[5])) &&
         ((param_1[6] == param_2[6] && (((char)param_1[7] != '\0') == ((char)param_2[7] != '\0')))))
        && (((*(char *)((long)param_1 + 0x39) != '\0') == (*(char *)((long)param_2 + 0x39) != '\0')
            && (((*(char *)((long)param_1 + 0x3a) != '\0') ==
                 (*(char *)((long)param_2 + 0x3a) != '\0') &&
                ((*(char *)((long)param_1 + 0x3b) != '\0') ==
                 (*(char *)((long)param_2 + 0x3b) != '\0'))))))) &&
       ((uVar1 = System_String__op_Inequality_1ecf400(param_1[8],param_2[8],0), (uVar1 & 1) == 0 &&
        ((((uVar1 = System_String__op_Inequality_1ecf400(param_1[9],param_2[9],0), (uVar1 & 1) == 0
           && (uVar1 = System_String__op_Inequality_1ecf400(param_1[10],param_2[10],0),
              (uVar1 & 1) == 0)) &&
          (uVar1 = System_String__op_Inequality_1ecf400(param_1[0xb],param_2[0xb],0),
          (uVar1 & 1) == 0)) &&
         ((uVar1 = System_String__op_Inequality_1ecf400(param_1[0xc],param_2[0xc],0),
          (uVar1 & 1) == 0 &&
          (uVar1 = System_String__op_Inequality_1ecf400(param_1[0xd],param_2[0xd],0),
          (uVar1 & 1) == 0)))))))) {
      plVar2 = (long *)param_1[2];
      plVar3 = (long *)param_2[2];
      if (plVar2 == plVar3) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        if ((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x024edf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x140));
          return uVar1;
        }
      }
      return (ulong)uVar4;
    }
  }
  return 0;
}

