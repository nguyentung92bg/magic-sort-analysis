/* IL2CPP: magicsort.schemas.v1.common.StreakLeaderboardPlayerVerify$$Verify
bool magicsort_schemas_v1_common_StreakLeaderboardPlayerVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.common.StreakLeaderboardPlayerVerify$$Verify
   bool magicsort_schemas_v1_common_StreakLeaderboardPlayerVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_common_StreakLeaderboardPlayerVerify__Verify_1605dac
          (long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar2 = param_2 & 0xffffffff;
  auVar3 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
  uVar1 = auVar3._8_8_;
                    /* try { // try from 01705dd8 to 01805de3 has its CatchHandler @ 01705ed0 */
                    /* try { // try from 01705de4 to 01805def has its CatchHandler @ 01705ed4 */
                    /* try { // try from 01705df0 to 01805eb3 has its CatchHandler @ 01705c2c */
                    /* try { // try from 01705eb4 to 01805eb7 has its CatchHandler @ 01705ecc */
                    /* try { // try from 01705eb8 to 01805ebb has its CatchHandler @ 01705c2c */
                    /* try { // try from 01705ebc to 01805ebf has its CatchHandler @ 01705ec8 */
                    /* try { // try from 01705ec0 to 01805eeb has its CatchHandler @ 01705c2c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01705ebc with catch @ 01705ec8
                        */
  if (((((((auVar3._0_8_ & 1) != 0) &&
         (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,4,0,0),
         uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
        (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,6,0,0),
        uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
       ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,8,8,8,0,0),
        uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
        (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,10,8,8,0,0),
        uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))) &&
      ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,0xc,1,1,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
       ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,0xe,1,1,0,0),
        uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
        (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,0x10,0,0),
        uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))))) &&
     (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,0x12,0,0),
     uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
                    /* try { // try from 01705eec to 01805eef has its CatchHandler @ 01705f80 */
  return auVar3 << 0x40;
}

