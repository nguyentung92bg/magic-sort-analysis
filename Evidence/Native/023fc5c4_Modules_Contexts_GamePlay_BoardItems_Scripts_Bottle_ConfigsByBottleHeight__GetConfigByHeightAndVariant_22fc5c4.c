/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.ConfigsByBottleHeight$$GetConfigByHeightAndVariant
BakedFluid_BottleAnimationConfig_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight__GetConfigByHeightAndVariant (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight_o* __this, int32_t height, int32_t variant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.ConfigsByBottleHeight$$GetConfigByHeightAndVariant
   BakedFluid_BottleAnimationConfig_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight__GetConfigByHeightAndVariant
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight_o* __this, int32_t
   height, int32_t variant, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight__GetConfigByHeightAndVariant_22fc5c4
          (long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  if ((bRam0000000005c2a608 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c0bf0);
    bRam0000000005c2a608 = 1;
  }
  switch(param_2) {
  case 1:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) break;
    uVar2 = 0xb;
    goto LAB_023fc6d8;
  case 4:
    if ((param_3 == 1) || (param_3 == 0)) {
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 != 0) {
        uVar2 = 3;
        goto LAB_023fc6d8;
      }
      break;
    }
  default:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 0;
LAB_023fc6d8:
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,uVar2,*(undefined8 *)PTR_DAT_057c0bf0);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (uVar2 < *(uint *)(lVar1 + 0x18)) {
          return *(undefined8 *)(lVar1 + (long)(int)uVar2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    break;
  case 5:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 1;
      goto LAB_023fc6d8;
    }
    break;
  case 8:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 6;
      goto LAB_023fc6d8;
    }
    break;
  case 10:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 5;
      goto LAB_023fc6d8;
    }
    break;
  case 0xb:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 8;
      goto LAB_023fc6d8;
    }
    break;
  case 0xc:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 2;
      goto LAB_023fc6d8;
    }
    break;
  case 0xf:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 7;
      goto LAB_023fc6d8;
    }
    break;
  case 0x10:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 9;
      goto LAB_023fc6d8;
    }
    break;
  case 0x12:
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = 10;
      goto LAB_023fc6d8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

