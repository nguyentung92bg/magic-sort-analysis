/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$pb::Google.Protobuf.IBufferMessage.InternalWriteTo
void MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IBufferMessage_InternalWriteTo (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_WriteContext_o* output, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03f54508) */
/* IL2CPP:
   MagicSort.V1.StrikeShowLeaderboardResponse$$pb::Google.Protobuf.IBufferMessage.InternalWriteTo
   void 
   MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IBufferMessage_InternalWriteTo
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_WriteContext_o* output,
   const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IBufferMessage_InternalWriteTo_386a98c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
                    /* try { // try from 0396a98c to 03a6a993 has its CatchHandler @ 0396aa64 */
                    /* try { // try from 0396a9a0 to 03a6a9bf has its CatchHandler @ 0396aa68 */
  if ((bRam0000000005c349f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b910);
    FUN_012d0dc8(PTR_DAT_0577b218);
    FUN_012d0dc8(PTR_DAT_057f2b00);
    bRam0000000005c349f2 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) != 0) {
                    /* try { // try from 0396a9e8 to 03a6a9eb has its CatchHandler @ 0396aa78 */
                    /* try { // try from 0396a9ec to 03a6aa37 has its CatchHandler @ 0396a7ec */
      Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,10,0);
      Google_Protobuf_WriteContext__WriteString_3e576cc(param_2,*(undefined8 *)(param_1 + 0x18),0);
    }
    puVar2 = PTR_DAT_057f2b00;
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
        Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x12,0);
                    /* try { // try from 0396aa38 to 03a6aa3b has its CatchHandler @ 0396aa80 */
                    /* try { // try from 0396aa3c to 03a6aa3f has its CatchHandler @ 0396aa60 */
        Google_Protobuf_WriteContext__WriteString_3e576cc(param_2,*(undefined8 *)(param_1 + 0x20),0)
        ;
      }
                    /* try { // try from 0396aa40 to 03a6aa43 has its CatchHandler @ 0396aa5c */
                    /* try { // try from 0396aa44 to 03a6aa47 has its CatchHandler @ 0396aa58 */
      lVar8 = *(long *)(param_1 + 0x28);
                    /* try { // try from 0396aa48 to 03a6aa4b has its CatchHandler @ 0396aa7c */
                    /* try { // try from 0396aa4c to 03a6aa4f has its CatchHandler @ 0396aa54 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 0396aa50 to 03a6aa53 has its CatchHandler @ 0396aa74 */
        thunk_FUN_0130472c();
      }
                    /* catch() { ... } // from try @ 0396aa4c with catch @ 0396aa54
                       try { // try from 0396aa54 to 03a6aa9b has its CatchHandler @ 0396a7ec */
      if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 0396aa44 with catch @ 0396aa58 */
                    /* catch() { ... } // from try @ 0396aa40 with catch @ 0396aa5c */
                    /* catch() { ... } // from try @ 0396aa3c with catch @ 0396aa60 */
                    /* catch() { ... } // from try @ 0396a98c with catch @ 0396aa64 */
                    /* catch() { ... } // from try @ 0396a9a0 with catch @ 0396aa68 */
                    /* catch() { ... } // from try @ 0396a970 with catch @ 0396aa6c */
                    /* catch() { ... } // from try @ 0396a95c with catch @ 0396aa70 */
                    /* catch() { ... } // from try @ 0396a920 with catch @ 0396aa74
                       catch() { ... } // from try @ 0396aa50 with catch @ 0396aa74 */
                    /* catch() { ... } // from try @ 0396a9e8 with catch @ 0396aa78 */
        Google_Protobuf_Collections_RepeatedField_object___WriteTo_3661a98
                  (lVar8,param_2,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                   *(undefined8 *)PTR_DAT_0577b218);
                    /* catch() { ... } // from try @ 0396a8f0 with catch @ 0396aa7c
                       catch() { ... } // from try @ 0396aa48 with catch @ 0396aa7c */
                    /* catch() { ... } // from try @ 0396a8a8 with catch @ 0396aa80
                       catch() { ... } // from try @ 0396aa38 with catch @ 0396aa80 */
        if (*(long *)(param_1 + 0x30) != 0) {
          Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x20,0);
                    /* try { // try from 0396aa9c to 03a6aab3 has its CatchHandler @ 0396ab5c */
          Google_Protobuf_WriteContext__WriteInt64_3e57344
                    (param_2,*(undefined8 *)(param_1 + 0x30),0);
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x28,0);
                    /* try { // try from 0396aabc to 03a6aabf has its CatchHandler @ 0396ab48 */
          Google_Protobuf_WriteContext__WriteInt64_3e57344
                    (param_2,*(undefined8 *)(param_1 + 0x38),0);
        }
                    /* try { // try from 0396aacc to 03a6aad3 has its CatchHandler @ 0396ab44 */
        if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0396aad8 to 03a6aaef has its CatchHandler @ 0396ab50 */
          Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x30,0);
          Google_Protobuf_WriteContext__WriteInt64_3e57344
                    (param_2,*(undefined8 *)(param_1 + 0x40),0);
        }
                    /* try { // try from 0396aaf8 to 03a6ab13 has its CatchHandler @ 0396ab4c */
        lVar8 = *(long *)(param_1 + 0x48);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        puVar1 = PTR_DAT_0577b910;
        if (lVar8 != 0) {
                    /* try { // try from 0396ab18 to 03a6ab1b has its CatchHandler @ 0396ab40 */
                    /* try { // try from 0396ab1c to 03a6ab2b has its CatchHandler @ 0396a7ec */
                    /* try { // try from 0396ab2c to 03a6ab3b has its CatchHandler @ 0396ab5c */
          Google_Protobuf_Collections_MapField_long__long___WriteTo_22612ec
                    (lVar8,param_2,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                     *(undefined8 *)PTR_DAT_0577b910);
          if (*(long *)(param_1 + 0x50) != 0) {
                    /* catch() { ... } // from try @ 0396ab18 with catch @ 0396ab40 */
                    /* catch() { ... } // from try @ 0396aacc with catch @ 0396ab44 */
                    /* catch() { ... } // from try @ 0396aabc with catch @ 0396ab48 */
                    /* catch() { ... } // from try @ 0396aaf8 with catch @ 0396ab4c */
            Google_Protobuf_Collections_MapField_long__long___WriteTo_22612ec
                      (*(long *)(param_1 + 0x50),param_2,
                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),
                       *(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0396aad8 with catch @ 0396ab50 */
            if (*(long *)(param_1 + 0x58) != 0) {
                    /* catch() { ... } // from try @ 0396aa9c with catch @ 0396ab5c
                       catch() { ... } // from try @ 0396ab2c with catch @ 0396ab5c */
                    /* try { // try from 0396ab64 to 03a6ab67 has its CatchHandler @ 0396ac14 */
              Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x48,0);
                    /* try { // try from 0396ab68 to 03a6ab7f has its CatchHandler @ 0396a7ec */
              Google_Protobuf_WriteContext__WriteInt64_3e57344
                        (param_2,*(undefined8 *)(param_1 + 0x58),0);
            }
            if (*(long *)(param_1 + 0x60) != 0) {
                    /* try { // try from 0396ab80 to 03a6ab97 has its CatchHandler @ 0396ac04 */
              Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x50,0);
                    /* try { // try from 0396ab98 to 03a6abf3 has its CatchHandler @ 0396a7ec */
              Google_Protobuf_WriteContext__WriteInt64_3e57344
                        (param_2,*(undefined8 *)(param_1 + 0x60),0);
            }
            if (*(long *)(param_1 + 0x68) != 0) {
              if (*(int *)(*(long *)(param_1 + 0x68) + 0x10) != 0) {
                Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x5a,0);
                Google_Protobuf_WriteContext__WriteString_3e576cc
                          (param_2,*(undefined8 *)(param_1 + 0x68),0);
              }
              if (*(long *)(param_1 + 0x70) != 0) {
                Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x60,0);
                    /* try { // try from 0396abf4 to 03a6ac03 has its CatchHandler @ 0396ac04 */
                Google_Protobuf_WriteContext__WriteInt64_3e57344
                          (param_2,*(undefined8 *)(param_1 + 0x70),0);
              }
              if (*(char *)(param_1 + 0x78) != '\0') {
                    /* catch() { ... } // from try @ 0396ab80 with catch @ 0396ac04
                       catch() { ... } // from try @ 0396abf4 with catch @ 0396ac04 */
                    /* try { // try from 0396ac08 to 03a6ac0b has its CatchHandler @ 0396ac14 */
                    /* try { // try from 0396ac0c to 03a6ac17 has its CatchHandler @ 0396a7ec */
                Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x68,0);
                    /* catch() { ... } // from try @ 0396ab64 with catch @ 0396ac14
                       catch() { ... } // from try @ 0396ac08 with catch @ 0396ac14 */
                Google_Protobuf_WriteContext__WriteBool_3e575f0
                          (param_2,*(undefined1 *)(param_1 + 0x78),0);
              }
              if (*(long *)(param_1 + 0x80) != 0) {
                Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,0x70,0);
                Google_Protobuf_WriteContext__WriteInt64_3e57344
                          (param_2,*(undefined8 *)(param_1 + 0x80),0);
              }
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) {
                return;
              }
              if ((bRam0000000005c38334 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_058165e8,param_2,0);
                FUN_012d0dc8(PTR_DAT_05772408);
                FUN_012d0dc8(PTR_DAT_057fc9a0);
                FUN_012d0dc8(PTR_DAT_057a12b8);
                FUN_012d0dc8(PTR_DAT_057fda40);
                FUN_012d0dc8(PTR_DAT_05771570);
                bRam0000000005c38334 = 1;
              }
              plVar7 = *(long **)(lVar8 + 0x10);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              lVar8 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_05772408) {
                    puVar4 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_03f54388;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_05772408,0);
LAB_03f54388:
              puVar3 = PTR_DAT_058165e8;
              puVar1 = PTR_DAT_057fc9a0;
              puVar2 = PTR_DAT_057a12b8;
              plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
              do {
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                lVar8 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                      puVar4 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_03f54400;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,0);
LAB_03f54400:
                uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
                if ((uVar5 & 1) == 0) {
                  if (plVar7 == (long *)0x0) {
                    return;
                  }
                  lVar8 = *plVar7;
                  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar5 == 0) goto LAB_03f544bc;
                  piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  goto LAB_03f544a4;
                }
                lVar8 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_03f5445c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar1,0);
LAB_03f5445c:
                auVar9 = (*(code *)*puVar4)(plVar7,puVar4[1]);
                if (auVar9._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                Google_Protobuf_UnknownField__WriteTo_3e53b10
                          (auVar9._8_8_,auVar9._0_8_ & 0xffffffff,param_2);
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03f544a4:
    if (*(long *)(piVar6 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03f544d8;
    }
  }
LAB_03f544bc:
  puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,0);
LAB_03f544d8:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return;
}

