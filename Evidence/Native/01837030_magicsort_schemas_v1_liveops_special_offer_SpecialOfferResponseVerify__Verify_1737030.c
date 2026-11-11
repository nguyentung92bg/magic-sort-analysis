/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponseVerify$$Verify
bool magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponseVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponseVerify$$Verify
   bool magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponseVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponseVerify__Verify_1737030
          (long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000005c24ccb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9c50);
    FUN_012d0dc8(PTR_DAT_05758d20);
    bRam0000000005c24ccb = 1;
  }
  if (param_1 != 0) {
    auVar3 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar2 = auVar3._8_8_;
                    /* try { // try from 01837088 to 01937093 has its CatchHandler @ 01837174 */
                    /* try { // try from 018370a8 to 019370c3 has its CatchHandler @ 0183717c */
                    /* try { // try from 018370c4 to 0193713f has its CatchHandler @ 01836dd4 */
                    /* try { // try from 01837140 to 01937143 has its CatchHandler @ 01837164 */
                    /* try { // try from 01837144 to 01937147 has its CatchHandler @ 01837160 */
                    /* try { // try from 01837148 to 0193714b has its CatchHandler @ 0183715c */
                    /* try { // try from 0183714c to 0193714f has its CatchHandler @ 01837158 */
                    /* try { // try from 01837150 to 01937153 has its CatchHandler @ 01837154 */
                    /* catch() { ... } // from try @ 01837150 with catch @ 01837154
                       try { // try from 01837154 to 0193719f has its CatchHandler @ 01836dd4 */
                    /* catch() { ... } // from try @ 0183714c with catch @ 01837158 */
                    /* catch() { ... } // from try @ 01837148 with catch @ 0183715c */
                    /* catch() { ... } // from try @ 01837144 with catch @ 01837160 */
                    /* catch() { ... } // from try @ 01837140 with catch @ 01837164 */
                    /* catch() { ... } // from try @ 01837010 with catch @ 01837168 */
                    /* catch() { ... } // from try @ 01836f2c with catch @ 0183716c */
                    /* catch() { ... } // from try @ 01837024 with catch @ 01837170 */
                    /* catch() { ... } // from try @ 01836fa4 with catch @ 01837174
                       catch() { ... } // from try @ 01837088 with catch @ 01837174 */
                    /* catch() { ... } // from try @ 01836f40 with catch @ 01837178 */
                    /* catch() { ... } // from try @ 018370a8 with catch @ 0183717c */
                    /* catch() { ... } // from try @ 01836f64 with catch @ 01837180 */
                    /* catch() { ... } // from try @ 01836ed4 with catch @ 01837184 */
                    /* catch() { ... } // from try @ 01836e20 with catch @ 01837188 */
    if (((((((auVar3._0_8_ & 1) != 0) &&
           (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,4,0,0),
           uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
          (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,6,8,8,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
         ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,8,8,8,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
          (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,10,8,8,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))) &&
        ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0xc,8,8,0,0),
         uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
         ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0xe,1,1,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
          (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0x10,1,1,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))))) &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,0x12,0,0),
       uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) {
                    /* try { // try from 018371a0 to 019371b7 has its CatchHandler @ 01837244 */
      lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      if (lVar1 == 0) goto LAB_0183720c;
                    /* try { // try from 018371b8 to 01937233 has its CatchHandler @ 01836dd4 */
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar1,0,*(undefined8 *)PTR_DAT_057d9c50,0)
      ;
      auVar3 = Google_FlatBuffers_Verifier__VerifyTable_31392b8(param_1,param_2,0x14,lVar1,0,0);
      uVar2 = auVar3._8_8_;
      if ((auVar3._0_8_ & 1) != 0) {
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
LAB_0183720c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

