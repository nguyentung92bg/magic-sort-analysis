/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$Equals
bool MagicSort_V1_StrikeShowLeaderboardResponse__Equals (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, MagicSort_V1_StrikeShowLeaderboardResponse_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$Equals
   bool MagicSort_V1_StrikeShowLeaderboardResponse__Equals
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this,
   MagicSort_V1_StrikeShowLeaderboardResponse_o* other, const MethodInfo* method); */

ulong MagicSort_V1_StrikeShowLeaderboardResponse__Equals_386a55c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
                    /* catch() { ... } // from try @ 0396a534 with catch @ 0396a55c */
                    /* catch() { ... } // from try @ 0396a530 with catch @ 0396a560 */
                    /* catch() { ... } // from try @ 0396a4e0 with catch @ 0396a564 */
                    /* catch() { ... } // from try @ 0396a4c4 with catch @ 0396a568 */
                    /* catch() { ... } // from try @ 0396a4b8 with catch @ 0396a56c */
                    /* catch() { ... } // from try @ 0396a48c with catch @ 0396a570 */
                    /* catch() { ... } // from try @ 0396a3a8 with catch @ 0396a574 */
  if ((bRam0000000005c349ef & 1) == 0) {
                    /* catch() { ... } // from try @ 0396a464 with catch @ 0396a578 */
                    /* catch() { ... } // from try @ 0396a454 with catch @ 0396a57c */
                    /* catch() { ... } // from try @ 0396a3bc with catch @ 0396a580 */
    FUN_012d0dc8(PTR_DAT_057f5080);
                    /* catch() { ... } // from try @ 0396a38c with catch @ 0396a584 */
                    /* catch() { ... } // from try @ 0396a378 with catch @ 0396a588 */
                    /* catch() { ... } // from try @ 0396a33c with catch @ 0396a58c
                       catch() { ... } // from try @ 0396a548 with catch @ 0396a58c */
    FUN_012d0dc8(PTR_DAT_05758970);
                    /* catch() { ... } // from try @ 0396a438 with catch @ 0396a590
                       catch() { ... } // from try @ 0396a54c with catch @ 0396a590 */
                    /* catch() { ... } // from try @ 0396a41c with catch @ 0396a594 */
    bRam0000000005c349ef = 1;
  }
                    /* catch() { ... } // from try @ 0396a404 with catch @ 0396a598 */
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 0396a30c with catch @ 0396a59c
                       catch() { ... } // from try @ 0396a540 with catch @ 0396a59c */
    if (param_2 == param_1) {
      return 1;
    }
    uVar2 = System_String__op_Inequality_1ecf400
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
                    /* try { // try from 0396a5b8 to 03a6a5cf has its CatchHandler @ 0396a60c */
    if (((uVar2 & 1) == 0) &&
       (uVar2 = System_String__op_Inequality_1ecf400
                          (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),0),
       (uVar2 & 1) == 0)) {
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_0396a6f8:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* try { // try from 0396a5d4 to 03a6a5d7 has its CatchHandler @ 0396a600 */
                    /* try { // try from 0396a5d8 to 03a6a5eb has its CatchHandler @ 0396a1f4 */
      uVar2 = Google_Protobuf_Collections_RepeatedField_object___Equals_3662cbc
                        (*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                         *(undefined8 *)PTR_DAT_05758970);
      puVar1 = PTR_DAT_057f5080;
                    /* try { // try from 0396a5ec to 03a6a5fb has its CatchHandler @ 0396a60c */
                    /* catch() { ... } // from try @ 0396a5d4 with catch @ 0396a600 */
                    /* catch() { ... } // from try @ 0396a5b8 with catch @ 0396a60c
                       catch() { ... } // from try @ 0396a5ec with catch @ 0396a60c */
                    /* try { // try from 0396a614 to 03a6a617 has its CatchHandler @ 0396a6c4 */
                    /* try { // try from 0396a618 to 03a6a62f has its CatchHandler @ 0396a1f4 */
      if (((((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30))) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_2 + 0x40))) {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_0396a6f8;
                    /* try { // try from 0396a630 to 03a6a647 has its CatchHandler @ 0396a6b4 */
        uVar2 = Google_Protobuf_Collections_MapField_long__long___Equals_2260984
                          (*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48),
                           *(undefined8 *)PTR_DAT_057f5080);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_0396a6f8;
                    /* try { // try from 0396a648 to 03a6a6a3 has its CatchHandler @ 0396a1f4 */
          uVar2 = Google_Protobuf_Collections_MapField_long__long___Equals_2260984
                            (*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50),
                             *(undefined8 *)puVar1);
                    /* try { // try from 0396a6a4 to 03a6a6b3 has its CatchHandler @ 0396a6b4 */
                    /* catch() { ... } // from try @ 0396a630 with catch @ 0396a6b4
                       catch() { ... } // from try @ 0396a6a4 with catch @ 0396a6b4 */
                    /* try { // try from 0396a6b8 to 03a6a6bb has its CatchHandler @ 0396a6c4 */
                    /* try { // try from 0396a6bc to 03a6a6c7 has its CatchHandler @ 0396a1f4 */
                    /* catch() { ... } // from try @ 0396a614 with catch @ 0396a6c4
                       catch() { ... } // from try @ 0396a6b8 with catch @ 0396a6c4 */
          if ((((((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x58) == *(long *)(param_2 + 0x58))) &&
               ((*(long *)(param_1 + 0x60) == *(long *)(param_2 + 0x60) &&
                ((uVar2 = System_String__op_Inequality_1ecf400
                                    (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68)
                                     ,0), (uVar2 & 1) == 0 &&
                 (*(long *)(param_1 + 0x70) == *(long *)(param_2 + 0x70))))))) &&
              ((*(char *)(param_1 + 0x78) != '\0') == (*(char *)(param_2 + 0x78) != '\0'))) &&
             (*(long *)(param_1 + 0x80) == *(long *)(param_2 + 0x80))) {
            plVar3 = *(long **)(param_1 + 0x10);
            plVar4 = *(long **)(param_2 + 0x10);
            if (plVar3 == plVar4) {
              uVar5 = 1;
            }
            else {
              uVar5 = 0;
              if ((plVar3 != (long *)0x0) && (plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x024edf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar2 = (**(code **)(*plVar3 + 0x138))
                                  (plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x140));
                return uVar2;
              }
            }
            return (ulong)uVar5;
          }
        }
      }
    }
  }
  return 0;
}

