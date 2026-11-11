/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$WriteTo
void MagicSort_V1_StrikeShowLeaderboardResponse__WriteTo (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_CodedOutputStream_o* output, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01d81978) */
/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$WriteTo
   void MagicSort_V1_StrikeShowLeaderboardResponse__WriteTo
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_CodedOutputStream_o*
   output, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__WriteTo_386a96c(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
                    /* try { // try from 0396a970 to 03a6a977 has its CatchHandler @ 0396aa6c */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c274fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c91c8,param_1,0);
    bRam0000000005c274fc = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar10 = *(long *)(param_2 + 0x18);
  if (cRam0000000005c22ddb == '\0') {
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    cRam0000000005c22ddb = '\x01';
  }
  if (lVar10 == 0) {
    uVar7 = 0;
    lStack_60 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar10 + 0x18);
    lStack_60 = lVar10 + 0x20;
  }
  uStack_58 = (ulong)uVar7;
  uStack_40 = *(undefined8 *)(param_2 + 0x30);
  uStack_48 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x20);
  FUN_012d0d74(&uStack_48,0);
  if (cRam0000000005c275fb == '\0') {
    FUN_012d0dc8(PTR_DAT_05803370);
    FUN_012d0dc8(PTR_DAT_057a0a28);
    cRam0000000005c275fb = '\x01';
  }
  puVar1 = PTR_DAT_05803370;
  plVar2 = (long *)thunk_FUN_01320d5c(param_1,*(undefined8 *)PTR_DAT_05803370);
  if (plVar2 == (long *)0x0) {
    lVar10 = Google_Protobuf_WriterInternalState__get_CodedOutputStream_3e590c8(&uStack_50,0);
    if (lVar10 == 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      plVar2 = (long *)System_Object__GetType_23e0654(param_1,0);
      if (plVar2 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
        uVar5 = thunk_FUN_0136d790(PTR_DAT_057de480);
        uVar6 = thunk_FUN_0136d790(PTR_DAT_05806cd8);
        uVar4 = System_String__Concat_1ed10d8(uVar5,uVar4,uVar6,0);
        thunk_FUN_0136d790(PTR_DAT_0575f198);
        lVar10 = thunk_FUN_01320e48();
        if (lVar10 != 0) {
          System_IO_IOException___ctor_29a5a98(lVar10,uVar4,0);
          uVar4 = thunk_FUN_0136d790(PTR_DAT_057e2cd8);
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(lVar10,uVar4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = Google_Protobuf_WriterInternalState__get_CodedOutputStream_3e590c8(&uStack_50,0);
    Google_Protobuf_WriteContext__CopyStateTo_3e5904c(&lStack_60,uVar4,0);
    uVar4 = Google_Protobuf_WriterInternalState__get_CodedOutputStream_3e590c8(&uStack_50,0);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar10 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057a0a28) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_01d81914;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(param_1,*(long *)PTR_DAT_057a0a28,1);
LAB_01d81914:
    (*(code *)*puVar3)(param_1,uVar4,puVar3[1]);
    uVar4 = Google_Protobuf_WriterInternalState__get_CodedOutputStream_3e590c8(&uStack_50,0);
    Google_Protobuf_WriteContext__LoadStateFrom_3e5908c(&lStack_60,uVar4,0);
  }
  else {
    lVar10 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_01d818f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,1);
LAB_01d818f0:
    (*(code *)*puVar3)(plVar2,&lStack_60,puVar3[1]);
  }
  Google_Protobuf_WriteContext__CopyStateTo_3e5904c(&lStack_60,param_2,0);
  return;
}

