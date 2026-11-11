/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModelVerify$$Verify
bool magicsort_schemas_v1_level_OverBoardItemModelVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModelVerify$$Verify
   bool magicsort_schemas_v1_level_OverBoardItemModelVerify__Verify (Google_FlatBuffers_Verifier_o*
   verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_level_OverBoardItemModelVerify__Verify_1600b44(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  param_2 = param_2 & 0xffffffff;
                    /* try { // try from 01700b5c to 01800b5f has its CatchHandler @ 01700b8c */
  if ((bRam0000000005c243ad & 1) == 0) {
                    /* try { // try from 01700b60 to 01800b63 has its CatchHandler @ 01700b88 */
                    /* try { // try from 01700b64 to 01800b67 has its CatchHandler @ 01700b84 */
                    /* try { // try from 01700b68 to 01800b6b has its CatchHandler @ 01700b9c */
    FUN_012d0dc8(PTR_DAT_0577cc80);
                    /* try { // try from 01700b6c to 01800b6f has its CatchHandler @ 01700b74 */
                    /* try { // try from 01700b70 to 01800b73 has its CatchHandler @ 01700b78 */
                    /* catch() { ... } // from try @ 01700b6c with catch @ 01700b74
                       try { // try from 01700b74 to 01800bb3 has its CatchHandler @ 017009a4 */
    FUN_012d0dc8(PTR_DAT_05758d20);
                    /* catch() { ... } // from try @ 01700af4 with catch @ 01700b78
                       catch() { ... } // from try @ 01700b70 with catch @ 01700b78 */
                    /* catch() { ... } // from try @ 01700b04 with catch @ 01700b7c */
    bRam0000000005c243ad = 1;
  }
                    /* catch() { ... } // from try @ 01700a6c with catch @ 01700b80 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 01700a54 with catch @ 01700b84
                       catch() { ... } // from try @ 01700b64 with catch @ 01700b84 */
                    /* catch() { ... } // from try @ 01700a48 with catch @ 01700b88
                       catch() { ... } // from try @ 01700b60 with catch @ 01700b88 */
                    /* catch() { ... } // from try @ 01700a38 with catch @ 01700b8c
                       catch() { ... } // from try @ 01700b5c with catch @ 01700b8c */
                    /* catch() { ... } // from try @ 01700a00 with catch @ 01700b90 */
    auVar3 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar2 = auVar3._8_8_;
                    /* catch() { ... } // from try @ 01700a20 with catch @ 01700b94 */
                    /* catch() { ... } // from try @ 01700abc with catch @ 01700b98 */
                    /* catch() { ... } // from try @ 01700a88 with catch @ 01700b9c
                       catch() { ... } // from try @ 01700b68 with catch @ 01700b9c */
                    /* try { // try from 01700bb4 to 01800bb7 has its CatchHandler @ 01700bc4 */
    if (((auVar3._0_8_ & 1) != 0) &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,4,4,4,0,0),
       uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) {
                    /* catch() { ... } // from try @ 01700bb4 with catch @ 01700bc4 */
      lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      if (lVar1 == 0) goto LAB_01700c7c;
                    /* try { // try from 01700bdc to 01800be7 has its CatchHandler @ 01700bfc */
                    /* try { // try from 01700be8 to 01800bf3 has its CatchHandler @ 017009a4 */
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar1,0,*(undefined8 *)PTR_DAT_0577cc80,0)
      ;
                    /* try { // try from 01700bf4 to 01800bfb has its CatchHandler @ 01700bfc */
                    /* catch() { ... } // from try @ 01700bdc with catch @ 01700bfc
                       catch() { ... } // from try @ 01700bf4 with catch @ 01700bfc */
                    /* catch() { ... } // from try @ 01700ce4 with catch @ 01700c00
                       catch() { ... } // from try @ 01700d54 with catch @ 01700c00
                       catch() { ... } // from try @ 01700e28 with catch @ 01700c00
                       catch() { ... } // from try @ 01700e9c with catch @ 01700c00 */
      auVar3 = Google_FlatBuffers_Verifier__VerifyTable_31392b8(param_1,param_2,6,lVar1,0,0);
      uVar2 = auVar3._8_8_;
                    /* try { // try from 01700c44 to 01800c4b has its CatchHandler @ 01700e44 */
      if ((((auVar3._0_8_ & 1) != 0) &&
          (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,8,4,4,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
         (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,10,4,4,0,0),
         uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        auVar4._8_8_ = param_2;
        auVar4._0_8_ = 1;
        return auVar4;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    return auVar3 << 0x40;
  }
LAB_01700c7c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01700c7c to 01800c7f has its CatchHandler @ 01700e48 */
  FUN_012d0ef0();
}

