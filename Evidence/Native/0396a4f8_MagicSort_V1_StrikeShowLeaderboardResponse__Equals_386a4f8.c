/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$Equals
bool MagicSort_V1_StrikeShowLeaderboardResponse__Equals (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Il2CppObject* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$Equals
   bool MagicSort_V1_StrikeShowLeaderboardResponse__Equals
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Il2CppObject* other, const MethodInfo*
   method); */

ulong MagicSort_V1_StrikeShowLeaderboardResponse__Equals_386a4f8(long *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  if ((bRam0000000005c349ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f2b00);
    bRam0000000005c349ee = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* try { // try from 0396a548 to 03a6a54b has its CatchHandler @ 0396a58c */
    param_2 = (long *)0x0;
  }
  else {
                    /* try { // try from 0396a530 to 03a6a533 has its CatchHandler @ 0396a560 */
                    /* try { // try from 0396a534 to 03a6a537 has its CatchHandler @ 0396a55c */
                    /* try { // try from 0396a538 to 03a6a53b has its CatchHandler @ 0396a558 */
                    /* try { // try from 0396a53c to 03a6a53f has its CatchHandler @ 0396a554 */
                    /* try { // try from 0396a540 to 03a6a543 has its CatchHandler @ 0396a59c */
    if (*param_2 != *(long *)PTR_DAT_057f2b00) {
      param_2 = (long *)0x0;
    }
  }
                    /* try { // try from 0396a54c to 03a6a54f has its CatchHandler @ 0396a590 */
                    /* catch() { ... } // from try @ 0396a544 with catch @ 0396a550
                       try { // try from 0396a550 to 03a6a5b7 has its CatchHandler @ 0396a1f4 */
                    /* catch() { ... } // from try @ 0396a53c with catch @ 0396a554 */
                    /* catch() { ... } // from try @ 0396a538 with catch @ 0396a558 */
  if ((bRam0000000005c349ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5080);
    FUN_012d0dc8(PTR_DAT_05758970);
    bRam0000000005c349ef = 1;
  }
  if (param_2 != (long *)0x0) {
    if (param_2 == param_1) {
      return 1;
    }
    uVar2 = System_String__op_Inequality_1ecf400(param_1[3],param_2[3],0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = System_String__op_Inequality_1ecf400(param_1[4],param_2[4],0), (uVar2 & 1) == 0)) {
      if (param_1[5] == 0) {
LAB_0396a6f8:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar2 = Google_Protobuf_Collections_RepeatedField_object___Equals_3662cbc
                        (param_1[5],param_2[5],*(undefined8 *)PTR_DAT_05758970);
      puVar1 = PTR_DAT_057f5080;
      if (((((uVar2 & 1) != 0) && (param_1[6] == param_2[6])) && (param_1[7] == param_2[7])) &&
         (param_1[8] == param_2[8])) {
        if (param_1[9] == 0) goto LAB_0396a6f8;
        uVar2 = Google_Protobuf_Collections_MapField_long__long___Equals_2260984
                          (param_1[9],param_2[9],*(undefined8 *)PTR_DAT_057f5080);
        if ((uVar2 & 1) != 0) {
          if (param_1[10] == 0) goto LAB_0396a6f8;
          uVar2 = Google_Protobuf_Collections_MapField_long__long___Equals_2260984
                            (param_1[10],param_2[10],*(undefined8 *)puVar1);
          if ((((((uVar2 & 1) != 0) && (param_1[0xb] == param_2[0xb])) &&
               ((param_1[0xc] == param_2[0xc] &&
                ((uVar2 = System_String__op_Inequality_1ecf400(param_1[0xd],param_2[0xd],0),
                 (uVar2 & 1) == 0 && (param_1[0xe] == param_2[0xe])))))) &&
              (((char)param_1[0xf] != '\0') == ((char)param_2[0xf] != '\0'))) &&
             (param_1[0x10] == param_2[0x10])) {
            plVar3 = (long *)param_1[2];
            plVar4 = (long *)param_2[2];
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

