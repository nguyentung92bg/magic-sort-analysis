/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchRiseDurationsByIndex
float Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseDurationsByIndex (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchRiseDurationsByIndex
   float 
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseDurationsByIndex
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t index, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseDurationsByIndex_20fa064
          (long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c29798 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c29798 = 1;
  }
  if (-1 < (int)param_2) {
    lVar1 = *(long *)(param_1 + 0x108);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((int)param_2 < *(int *)(lVar1 + 0x18)) {
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
  }
  return 0;
}

