/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs.WaterRegularRotationConfig$$GetScaleMultiplierForBottleHeight
float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig__GetScaleMultiplierForBottleHeight (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs.WaterRegularRotationConfig$$GetScaleMultiplierForBottleHeight
   float 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig__GetScaleMultiplierForBottleHeight
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig_o* __this,
   int32_t bottleHeight, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig__GetScaleMultiplierForBottleHeight_248c904
          (long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c2b280 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c2b280 = 1;
  }
  switch(param_2) {
  case 1:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
code_r0x0258c9f0:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar3 = *(undefined8 *)PTR_DAT_0576d090;
    uVar2 = 0;
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto code_r0x0258c9f0;
    uVar3 = *(undefined8 *)PTR_DAT_0576d090;
    uVar2 = 1;
    break;
  case 3:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto code_r0x0258c9f0;
    uVar3 = *(undefined8 *)PTR_DAT_0576d090;
    uVar2 = 2;
    break;
  case 4:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto code_r0x0258c9f0;
    uVar3 = *(undefined8 *)PTR_DAT_0576d090;
    uVar2 = 3;
    break;
  case 5:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto code_r0x0258c9f0;
    uVar3 = *(undefined8 *)PTR_DAT_0576d090;
    uVar2 = 4;
    break;
  case 6:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto code_r0x0258c9f0;
    uVar3 = *(undefined8 *)PTR_DAT_0576d090;
    uVar2 = 5;
    break;
  default:
    return 0;
  }
  if (*(uint *)(lVar1 + 0x18) <= uVar2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4(0,uVar2,uVar3);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  return *(undefined4 *)(lVar1 + (long)(int)uVar2 * 4 + 0x20);
}

