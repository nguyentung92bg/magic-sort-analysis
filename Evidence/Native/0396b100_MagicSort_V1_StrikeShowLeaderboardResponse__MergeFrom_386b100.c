/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$MergeFrom
void MagicSort_V1_StrikeShowLeaderboardResponse__MergeFrom (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_CodedInputStream_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01d7fe90) */
/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$MergeFrom
   void MagicSort_V1_StrikeShowLeaderboardResponse__MergeFrom
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_CodedInputStream_o* input,
   const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__MergeFrom_386b100(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [96];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c274de & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580fa78,param_1,0);
    bRam0000000005c274de = 1;
  }
  func_0x01039170(&lStack_d0,0,0x90);
  if (cRam0000000005c275f8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057f9e40);
    cRam0000000005c275f8 = '\x01';
  }
  puVar1 = PTR_DAT_0580fa78;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lStack_d0 = *(long *)(param_2 + 0x18);
  if (lStack_d0 == 0) {
    uStack_c8 = 0;
    lStack_d0 = 0;
  }
  else {
    uStack_c8 = *(undefined4 *)(lStack_d0 + 0x18);
    lStack_d0 = lStack_d0 + 0x20;
  }
  uStack_c4 = 0;
  func_0x01037ce0(auStack_c0,param_2 + 0x28,0x80);
  FUN_012d0d74(auStack_a0,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  Google_Protobuf_ParsingPrimitivesMessages__ReadRawMessage_3e51f60(&lStack_d0,param_1,0);
  func_0x01037ce0(param_2 + 0x28,auStack_c0,0x80);
  FUN_012d0d74(param_2 + 0x48,0);
  return;
}

