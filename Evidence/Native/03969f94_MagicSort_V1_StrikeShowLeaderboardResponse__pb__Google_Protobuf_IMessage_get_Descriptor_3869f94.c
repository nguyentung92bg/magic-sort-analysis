/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$pb::Google.Protobuf.IMessage.get_Descriptor
Google_Protobuf_Reflection_MessageDescriptor_o* MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IMessage_get_Descriptor (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$pb::Google.Protobuf.IMessage.get_Descriptor
   Google_Protobuf_Reflection_MessageDescriptor_o*
   MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IMessage_get_Descriptor
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IMessage_get_Descriptor_3869f94
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_057f2b00;
  if ((bRam0000000005c349e7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f2b00);
    bRam0000000005c349e7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_05809d10;
  if ((bRam0000000005c349e6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cd470);
    FUN_012d0dc8(PTR_DAT_05809d10);
    bRam0000000005c349e6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c34a1f == '\0') {
    FUN_012d0dc8(PTR_DAT_05809d10);
    cRam0000000005c34a1f = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar1;
  }
  if ((**(long **)(lVar2 + 0xb8) == 0) ||
     (plVar6 = *(long **)(**(long **)(lVar2 + 0xb8) + 0x28), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057cd470) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03969f78;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057cd470,0);
LAB_03969f78:
                    /* WARNING: Could not recover jumptable at 0x03969f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,7,puVar3[1]);
  return;
}

