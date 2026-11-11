/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$GetHashCode
int32_t MagicSort_V1_OnePlusOneOfferResponse__GetHashCode (MagicSort_V1_OnePlusOneOfferResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$GetHashCode
   int32_t MagicSort_V1_OnePlusOneOfferResponse__GetHashCode
   (MagicSort_V1_OnePlusOneOfferResponse_o* __this, const MethodInfo* method); */

uint MagicSort_V1_OnePlusOneOfferResponse__GetHashCode_38614d4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auStack_2c [4];
  long lStack_28;
  
                    /* try { // try from 039614d4 to 03a614d7 has its CatchHandler @ 039614e0 */
                    /* try { // try from 039614d8 to 03a614e3 has its CatchHandler @ 039612c4 */
                    /* catch() { ... } // from try @ 03961454 with catch @ 039614e0
                       catch() { ... } // from try @ 039614d4 with catch @ 039614e0 */
  if ((bRam0000000005c3498c & 1) == 0) {
                    /* try { // try from 039614f0 to 03a6159f has its CatchHandler @ 039614f0
                       catch() { ... } // from try @ 039614f0 with catch @ 039614f0
                       catch() { ... } // from try @ 039615cc with catch @ 039614f0
                       catch() { ... } // from try @ 03961640 with catch @ 039614f0
                       catch() { ... } // from try @ 03961670 with catch @ 039614f0 */
    FUN_012d0dc8(PTR_DAT_057b4910);
    bRam0000000005c3498c = 1;
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
    if (*(long *)(param_1 + 0x20) != 0) {
      lStack_28 = *(long *)(param_1 + 0x20);
      uVar3 = System_Int64__GetHashCode_26ca870(&lStack_28,0);
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
                    /* try { // try from 039615a0 to 03a615a7 has its CatchHandler @ 03961620 */
      auStack_2c[0] = 1;
      if (*(int *)(*(long *)PTR_DAT_057b4910 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = System_Boolean__GetHashCode_21272c4(auStack_2c,0);
                    /* try { // try from 039615bc to 03a615cb has its CatchHandler @ 03961624 */
      uVar2 = uVar3 ^ uVar2;
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
                    /* try { // try from 039615cc to 03a6163b has its CatchHandler @ 039614f0 */
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
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039615a0 with catch @ 03961620
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039615bc with catch @ 03961624
                        */
          uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          uVar2 = uVar3 ^ uVar2;
        }
        plVar4 = *(long **)(param_1 + 0x50);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 0396163c to 03a6163f has its CatchHandler @ 03961660 */
                    /* try { // try from 03961640 to 03a61667 has its CatchHandler @ 039614f0 */
          uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          uVar2 = uVar3 ^ uVar2;
        }
        plVar4 = *(long **)(param_1 + 0x58);
        if (plVar4 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          uVar2 = uVar3 ^ uVar2;
        }
                    /* catch() { ... } // from try @ 0396163c with catch @ 03961660 */
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 03961668 to 03a6166f has its CatchHandler @ 03961684 */
                    /* try { // try from 03961670 to 03a6167b has its CatchHandler @ 039614f0 */
          uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          uVar2 = uVar3 ^ uVar2;
        }
                    /* try { // try from 0396167c to 03a61683 has its CatchHandler @ 03961684 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03961668 with catch @ 03961684
                       catch(type#2 @ 00000000) { ... } // from try @ 0396167c with catch @ 03961684
                        */
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

