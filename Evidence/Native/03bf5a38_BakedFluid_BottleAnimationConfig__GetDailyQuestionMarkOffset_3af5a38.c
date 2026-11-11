/* IL2CPP: BakedFluid.BottleAnimationConfig$$GetDailyQuestionMarkOffset
float BakedFluid_BottleAnimationConfig__GetDailyQuestionMarkOffset (BakedFluid_BottleAnimationConfig_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BakedFluid.BottleAnimationConfig$$GetDailyQuestionMarkOffset
   float BakedFluid_BottleAnimationConfig__GetDailyQuestionMarkOffset
   (BakedFluid_BottleAnimationConfig_o* __this, int32_t index, const MethodInfo* method); */

undefined4
BakedFluid_BottleAnimationConfig__GetDailyQuestionMarkOffset_3af5a38(long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c3617c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c3617c = 1;
  }
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar1 + 0x18) <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,param_2,*(undefined8 *)PTR_DAT_0576d090);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined4 *)(lVar1 + (long)(int)param_2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

