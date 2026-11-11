/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$.ctor
void MagicSort_V1_StrikeShowLeaderboardResponse___ctor (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$.ctor
   void MagicSort_V1_StrikeShowLeaderboardResponse___ctor
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method); */

undefined1  [16] MagicSort_V1_StrikeShowLeaderboardResponse___ctor_3869fe0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_DAT_05797c18;
  puVar1 = PTR_DAT_05774390;
  if ((bRam0000000005c349e8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058109c0);
    FUN_012d0dc8(PTR_DAT_05795070);
    FUN_012d0dc8(PTR_DAT_057863e8);
    FUN_012d0dc8(PTR_DAT_05797c18);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c349e8 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)puVar1;
  FUN_012d0d74();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar1;
  FUN_012d0d74();
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05795070;
  if (lVar4 != 0) {
    Google_Protobuf_Collections_RepeatedField_object____ctor_3663af0
              (lVar4,*(undefined8 *)PTR_DAT_057863e8);
    *(long *)(param_1 + 0x28) = lVar4;
    FUN_012d0d74((long *)(param_1 + 0x28),lVar4);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_058109c0;
    if (lVar4 != 0) {
      Google_Protobuf_Collections_MapField_long__long____ctor_2262544
                (lVar4,*(undefined8 *)PTR_DAT_058109c0);
      *(long *)(param_1 + 0x48) = lVar4;
      FUN_012d0d74((long *)(param_1 + 0x48),lVar4);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        Google_Protobuf_Collections_MapField_long__long____ctor_2262544(lVar4,*(undefined8 *)puVar3)
        ;
        *(long *)(param_1 + 0x50) = lVar4;
        FUN_012d0d74((long *)(param_1 + 0x50),lVar4);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)puVar1;
        FUN_012d0d74();
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_1;
        return auVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

