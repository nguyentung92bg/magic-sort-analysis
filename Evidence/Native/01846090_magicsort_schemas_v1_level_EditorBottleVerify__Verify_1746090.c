/* IL2CPP: magicsort.schemas.v1.level.EditorBottleVerify$$Verify
bool magicsort_schemas_v1_level_EditorBottleVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.EditorBottleVerify$$Verify
   bool magicsort_schemas_v1_level_EditorBottleVerify__Verify (Google_FlatBuffers_Verifier_o*
   verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_level_EditorBottleVerify__Verify_1746090(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000005c24da2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9060);
    FUN_012d0dc8(PTR_DAT_057b6098);
    FUN_012d0dc8(PTR_DAT_0580a440);
    FUN_012d0dc8(PTR_DAT_05758d20);
    bRam0000000005c24da2 = 1;
  }
  if (param_1 != 0) {
    auVar4 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar3 = auVar4._8_8_;
    if ((((auVar4._0_8_ & 1) != 0) &&
        (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,4,4,4,0,0),
        uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) &&
       (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,6,0x18,8,0,0),
       puVar1 = PTR_DAT_05758d20, uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) {
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      if (lVar2 == 0) goto LAB_01846258;
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar2,0,*(undefined8 *)PTR_DAT_057b9060,0)
      ;
      auVar4 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                         (param_1,param_2,8,lVar2,0,0);
      uVar3 = auVar4._8_8_;
      if ((auVar4._0_8_ & 1) != 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar2 == 0) goto LAB_01846258;
        Google_FlatBuffers_VerifyTableAction___ctor_3137e80
                  (lVar2,0,*(undefined8 *)PTR_DAT_057b6098,0);
        auVar4 = Google_FlatBuffers_Verifier__VerifyTable_31392b8(param_1,param_2,10,lVar2,0,0);
        uVar3 = auVar4._8_8_;
        if ((auVar4._0_8_ & 1) != 0) {
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar2 == 0) goto LAB_01846258;
          Google_FlatBuffers_VerifyTableAction___ctor_3137e80
                    (lVar2,0,*(undefined8 *)PTR_DAT_0580a440,0);
          auVar4 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                             (param_1,param_2,0xc,lVar2,0,0);
          uVar3 = auVar4._8_8_;
          if ((auVar4._0_8_ & 1) != 0) {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
            auVar5._8_8_ = param_2;
            auVar5._0_8_ = 1;
            return auVar5;
          }
        }
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar3;
    return auVar4 << 0x40;
  }
LAB_01846258:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

