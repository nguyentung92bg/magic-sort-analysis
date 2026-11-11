/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$ToString
System_String_o* MagicSort_V1_StrikeShowLeaderboardResponse__ToString (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$ToString
   System_String_o* MagicSort_V1_StrikeShowLeaderboardResponse__ToString
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__ToString_386a914(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057a7fd8;
                    /* try { // try from 0396a920 to 03a6a94b has its CatchHandler @ 0396aa74 */
  if ((bRam0000000005c349f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7fd8);
    bRam0000000005c349f1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar3 = PTR_DAT_057ca7b0;
  puVar2 = PTR_DAT_057a7fd8;
  puVar1 = PTR_DAT_057a7e88;
  if ((bRam0000000005c27559 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7fd8,0);
    FUN_012d0dc8(PTR_DAT_057ca7b0);
    FUN_012d0dc8(PTR_DAT_057a7e88);
    bRam0000000005c27559 = 1;
  }
  Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
            (param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057e1128;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    if ((bRam0000000005c27557 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057e1128,param_1,0);
      bRam0000000005c27557 = 1;
    }
    plVar4 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (plVar4 != (long *)0x0) {
      System_IO_StringWriter___ctor_3572668(plVar4,0);
      Google_Protobuf_JsonFormatter__Format_1c8d47c(lVar5,param_1,plVar4,0);
                    /* WARNING: Could not recover jumptable at 0x01d8d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

