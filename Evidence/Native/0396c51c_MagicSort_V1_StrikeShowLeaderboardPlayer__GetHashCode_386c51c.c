/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$GetHashCode
int32_t MagicSort_V1_StrikeShowLeaderboardPlayer__GetHashCode (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$GetHashCode
   int32_t MagicSort_V1_StrikeShowLeaderboardPlayer__GetHashCode
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, const MethodInfo* method); */

uint MagicSort_V1_StrikeShowLeaderboardPlayer__GetHashCode_386c51c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  if ((bRam0000000005c34a07 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    bRam0000000005c34a07 = 1;
  }
  lStack_28 = 0;
  auStack_2c[0] = 0;
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if ((int)plVar4[2] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
      uVar2 = uVar2 ^ 1;
    }
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 != (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        uVar2 = uVar3 ^ uVar2;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        lStack_28 = *(long *)(param_1 + 0x28);
        uVar3 = System_Int64__GetHashCode_26ca870(&lStack_28,0);
        uVar2 = uVar3 ^ uVar2;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        lStack_28 = *(long *)(param_1 + 0x30);
        uVar3 = System_Int64__GetHashCode_26ca870(&lStack_28,0);
        uVar2 = uVar3 ^ uVar2;
      }
      puVar1 = PTR_DAT_057b4910;
      if (*(char *)(param_1 + 0x38) != '\0') {
        auStack_2c[0] = 1;
        if (*(int *)(*(long *)PTR_DAT_057b4910 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = System_Boolean__GetHashCode_21272c4(auStack_2c,0);
        uVar2 = uVar3 ^ uVar2;
      }
      if (*(char *)(param_1 + 0x39) != '\0') {
        auStack_2c[0] = 1;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = System_Boolean__GetHashCode_21272c4(auStack_2c,0);
        uVar2 = uVar3 ^ uVar2;
      }
      if (*(char *)(param_1 + 0x3a) != '\0') {
        auStack_2c[0] = 1;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = System_Boolean__GetHashCode_21272c4(auStack_2c,0);
        uVar2 = uVar3 ^ uVar2;
      }
      if (*(char *)(param_1 + 0x3b) != '\0') {
        auStack_2c[0] = 1;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = System_Boolean__GetHashCode_21272c4(auStack_2c,0);
        uVar2 = uVar3 ^ uVar2;
      }
      plVar4 = *(long **)(param_1 + 0x40);
      if (plVar4 != (long *)0x0) {
        if ((int)plVar4[2] != 0) {
          uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          uVar2 = uVar3 ^ uVar2;
        }
        plVar4 = *(long **)(param_1 + 0x48);
        if (plVar4 != (long *)0x0) {
          if ((int)plVar4[2] != 0) {
            uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
            uVar2 = uVar3 ^ uVar2;
          }
          plVar4 = *(long **)(param_1 + 0x50);
          if (plVar4 != (long *)0x0) {
            if ((int)plVar4[2] != 0) {
              uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
              uVar2 = uVar3 ^ uVar2;
            }
            plVar4 = *(long **)(param_1 + 0x58);
            if (plVar4 != (long *)0x0) {
              if ((int)plVar4[2] != 0) {
                uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
                uVar2 = uVar3 ^ uVar2;
              }
              plVar4 = *(long **)(param_1 + 0x60);
              if (plVar4 != (long *)0x0) {
                if ((int)plVar4[2] != 0) {
                  uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
                  uVar2 = uVar3 ^ uVar2;
                }
                plVar4 = *(long **)(param_1 + 0x68);
                if (plVar4 != (long *)0x0) {
                  if ((int)plVar4[2] != 0) {
                    uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
                    uVar2 = uVar3 ^ uVar2;
                  }
                  plVar4 = *(long **)(param_1 + 0x10);
                  if (plVar4 != (long *)0x0) {
                    uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
                    uVar2 = uVar3 ^ uVar2;
                  }
                  return uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

