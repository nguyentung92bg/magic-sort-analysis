/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetWaterHeightOffsetsForSnitch
float Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetWaterHeightOffsetsForSnitch (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetWaterHeightOffsetsForSnitch
   float 
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetWaterHeightOffsetsForSnitch
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t height, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetWaterHeightOffsetsForSnitch_20fa364
          (long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000005c2979c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c2979c = 1;
  }
  lVar2 = *(long *)(param_1 + 0x288);
  if (lVar2 != 0) {
    uVar1 = param_2 - 1;
    if ((((int)uVar1 < *(int *)(lVar2 + 0x18)) && (-1 < (int)uVar1)) &&
       (*(int *)(lVar2 + 0x18) != 0)) {
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,uVar1,*(undefined8 *)PTR_DAT_0576d090);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4 + 0x20);
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

