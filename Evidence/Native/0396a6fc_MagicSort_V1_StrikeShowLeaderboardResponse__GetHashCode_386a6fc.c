/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$GetHashCode
int32_t MagicSort_V1_StrikeShowLeaderboardResponse__GetHashCode (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$GetHashCode
   int32_t MagicSort_V1_StrikeShowLeaderboardResponse__GetHashCode
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method); */

uint MagicSort_V1_StrikeShowLeaderboardResponse__GetHashCode_386a6fc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_24 [4];
  long lStack_18;
  
  if ((bRam0000000005c349f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    bRam0000000005c349f0 = 1;
  }
  lStack_18 = 0;
  auStack_24[0] = 0;
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if ((int)plVar4[2] == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
      uVar1 = uVar1 ^ 1;
    }
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 != (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        uVar2 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        uVar1 = uVar2 ^ uVar1;
      }
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        uVar2 = uVar2 ^ uVar1;
        if (*(long *)(param_1 + 0x30) != 0) {
          lStack_18 = *(long *)(param_1 + 0x30);
          uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
          uVar2 = uVar1 ^ uVar2;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          lStack_18 = *(long *)(param_1 + 0x38);
          uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
          uVar2 = uVar1 ^ uVar2;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          lStack_18 = *(long *)(param_1 + 0x40);
          uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
          uVar2 = uVar1 ^ uVar2;
        }
        plVar4 = *(long **)(param_1 + 0x48);
                    /* try { // try from 0396a7ec to 03a6a8a7 has its CatchHandler @ 0396a7ec
                       catch() { ... } // from try @ 0396a7ec with catch @ 0396a7ec
                       catch() { ... } // from try @ 0396a9ec with catch @ 0396a7ec
                       catch() { ... } // from try @ 0396aa54 with catch @ 0396a7ec
                       catch() { ... } // from try @ 0396ab1c with catch @ 0396a7ec
                       catch() { ... } // from try @ 0396ab68 with catch @ 0396a7ec
                       catch() { ... } // from try @ 0396ab98 with catch @ 0396a7ec
                       catch() { ... } // from try @ 0396ac0c with catch @ 0396a7ec */
        if (plVar4 != (long *)0x0) {
          uVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          plVar4 = *(long **)(param_1 + 0x50);
          if (plVar4 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
            uVar3 = uVar1 ^ uVar2 ^ uVar3;
            if (*(long *)(param_1 + 0x58) != 0) {
              lStack_18 = *(long *)(param_1 + 0x58);
              uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
              uVar3 = uVar1 ^ uVar3;
            }
            if (*(long *)(param_1 + 0x60) != 0) {
              lStack_18 = *(long *)(param_1 + 0x60);
              uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
              uVar3 = uVar1 ^ uVar3;
            }
            plVar4 = *(long **)(param_1 + 0x68);
            if (plVar4 != (long *)0x0) {
              if ((int)plVar4[2] != 0) {
                uVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
                uVar3 = uVar1 ^ uVar3;
              }
              if (*(long *)(param_1 + 0x70) != 0) {
                lStack_18 = *(long *)(param_1 + 0x70);
                uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
                uVar3 = uVar1 ^ uVar3;
              }
              if (*(char *)(param_1 + 0x78) != '\0') {
                    /* try { // try from 0396a8a8 to 03a6a8bf has its CatchHandler @ 0396aa80 */
                auStack_24[0] = 1;
                if (*(int *)(*(long *)PTR_DAT_057b4910 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                uVar1 = System_Boolean__GetHashCode_21272c4(auStack_24,0);
                uVar3 = uVar1 ^ uVar3;
              }
              if (*(long *)(param_1 + 0x80) != 0) {
                lStack_18 = *(long *)(param_1 + 0x80);
                uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
                uVar3 = uVar1 ^ uVar3;
              }
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 != (long *)0x0) {
                    /* try { // try from 0396a8f0 to 03a6a90b has its CatchHandler @ 0396aa7c */
                uVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
                uVar3 = uVar1 ^ uVar3;
              }
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

