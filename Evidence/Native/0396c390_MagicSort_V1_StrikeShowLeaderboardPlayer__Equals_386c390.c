/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$Equals
bool MagicSort_V1_StrikeShowLeaderboardPlayer__Equals (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, MagicSort_V1_StrikeShowLeaderboardPlayer_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$Equals
   bool MagicSort_V1_StrikeShowLeaderboardPlayer__Equals
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, MagicSort_V1_StrikeShowLeaderboardPlayer_o*
   other, const MethodInfo* method); */

ulong MagicSort_V1_StrikeShowLeaderboardPlayer__Equals_386c390(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    if (param_2 == param_1) {
      return 1;
    }
    uVar1 = System_String__op_Inequality_1ecf400
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
    if (((((((uVar1 & 1) == 0) &&
           (uVar1 = System_String__op_Inequality_1ecf400
                              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),0),
           (uVar1 & 1) == 0)) && (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) &&
         ((*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30) &&
          ((*(char *)(param_1 + 0x38) != '\0') == (*(char *)(param_2 + 0x38) != '\0'))))) &&
        (((*(char *)(param_1 + 0x39) != '\0') == (*(char *)(param_2 + 0x39) != '\0') &&
         (((*(char *)(param_1 + 0x3a) != '\0') == (*(char *)(param_2 + 0x3a) != '\0') &&
          ((*(char *)(param_1 + 0x3b) != '\0') == (*(char *)(param_2 + 0x3b) != '\0'))))))) &&
       ((uVar1 = System_String__op_Inequality_1ecf400
                           (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40),0),
        (uVar1 & 1) == 0 &&
        ((((uVar1 = System_String__op_Inequality_1ecf400
                              (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48),0),
           (uVar1 & 1) == 0 &&
           (uVar1 = System_String__op_Inequality_1ecf400
                              (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50),0),
           (uVar1 & 1) == 0)) &&
          (uVar1 = System_String__op_Inequality_1ecf400
                             (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58),0),
          (uVar1 & 1) == 0)) &&
         ((uVar1 = System_String__op_Inequality_1ecf400
                             (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60),0),
          (uVar1 & 1) == 0 &&
          (uVar1 = System_String__op_Inequality_1ecf400
                             (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68),0),
          (uVar1 & 1) == 0)))))))) {
      plVar2 = *(long **)(param_1 + 0x10);
      plVar3 = *(long **)(param_2 + 0x10);
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

