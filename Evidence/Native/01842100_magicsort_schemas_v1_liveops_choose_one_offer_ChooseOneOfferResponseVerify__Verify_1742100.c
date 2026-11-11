/* IL2CPP: magicsort.schemas.v1.liveops.choose_one_offer.ChooseOneOfferResponseVerify$$Verify
bool magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponseVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.choose_one_offer.ChooseOneOfferResponseVerify$$Verify
   bool magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponseVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_choose_one_offer_ChooseOneOfferResponseVerify__Verify_1742100
          (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000005c24d68 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db5f0);
    FUN_012d0dc8(PTR_DAT_05758d20);
    bRam0000000005c24d68 = 1;
  }
  if (param_1 != 0) {
    auVar5 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar4 = auVar5._8_8_;
    if ((((((auVar5._0_8_ & 1) != 0) &&
          (auVar5 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,4,0,0),
          uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0)) &&
         (auVar5 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,6,8,8,0,0),
         uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0)) &&
        ((auVar5 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,8,8,8,0,0),
         uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0 &&
         (auVar5 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,10,8,8,0,0),
         uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0)))) &&
       ((auVar5 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0xc,1,1,0,0),
        uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0 &&
        ((auVar5 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0xe,1,1,0,0),
         uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0 &&
         (auVar5 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,0x10,0,0),
         puVar1 = PTR_DAT_05758d20, uVar4 = auVar5._8_8_, (auVar5._0_8_ & 1) != 0)))))) {
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      puVar2 = PTR_DAT_057db5f0;
      if (lVar3 == 0) goto LAB_01842304;
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar3,0,*(undefined8 *)PTR_DAT_057db5f0,0)
      ;
      auVar5 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                         (param_1,param_2,0x12,lVar3,0,0);
      uVar4 = auVar5._8_8_;
      if ((auVar5._0_8_ & 1) != 0) {
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_01842304;
        Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar3,0,*(undefined8 *)puVar2,0);
        auVar5 = Google_FlatBuffers_Verifier__VerifyTable_31392b8(param_1,param_2,0x14,lVar3,0,0);
        uVar4 = auVar5._8_8_;
        if ((auVar5._0_8_ & 1) != 0) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          auVar6._8_8_ = param_2;
          auVar6._0_8_ = 1;
          return auVar6;
        }
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar4;
    return auVar5 << 0x40;
  }
LAB_01842304:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

