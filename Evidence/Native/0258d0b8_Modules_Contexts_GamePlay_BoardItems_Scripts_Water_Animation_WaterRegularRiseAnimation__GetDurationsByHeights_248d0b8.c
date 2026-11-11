/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRegularRiseAnimation$$GetDurationsByHeights
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_DurationsByHeight_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__GetDurationsByHeights (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation_o* __this, int32_t height, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRiseConfig_o* config, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRegularRiseAnimation$$GetDurationsByHeights
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_DurationsByHeight_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__GetDurationsByHeights
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation_o*
   __this, int32_t height,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRiseConfig_o* config,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__GetDurationsByHeights_248d0b8
               (undefined8 param_1,uint param_2,long param_3)

{
  long lVar1;
  
  if ((bRam0000000005c2b284 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758d00);
    FUN_012d0dc8(PTR_DAT_057d7ec8);
    FUN_012d0dc8(PTR_DAT_057ec858);
    bRam0000000005c2b284 = 1;
  }
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x18);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) && ((int)param_2 < *(int *)(lVar1 + 0x18)))
    {
      if (*(uint *)(lVar1 + 0x18) <= param_2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,param_2,*(undefined8 *)PTR_DAT_057ec858);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (param_2 < *(uint *)(lVar1 + 0x18)) {
          return *(long *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d00);
    if (lVar1 != 0) {
      System_Object___ctor_23dfe5c(lVar1,0);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

