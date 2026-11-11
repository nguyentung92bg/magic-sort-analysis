/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$SetType
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetType (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this, int32_t woodboxKeyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$SetType
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetType
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this,
   int32_t woodboxKeyType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetType_3ddd5cc
               (long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_0576c200;
  lVar5 = *(long *)(param_1 + 0x30);
  switch(param_2) {
  case 1:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
    break;
  case 2:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
    break;
  case 3:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
    break;
  case 4:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
    break;
  case 5:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
    break;
  case 6:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
    break;
  default:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  }
  if (lVar5 != 0) {
    uVar6 = *puVar1;
    if ((bRam0000000005c27d52 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,uVar6,0);
      bRam0000000005c27d52 = 1;
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar8,uVar6,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    FUN_012d0d74((undefined8 *)(lVar5 + 0x20),uVar6);
    UnityEngine_U2D_Animation_SpriteLibrary__CacheOverrides_1e38b2c(lVar5);
    puVar3 = PTR_DAT_0575abf8;
    if ((bRam0000000005c27d5d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0575abf8);
      bRam0000000005c27d5d = 1;
    }
    lVar5 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                      (lVar5,*(undefined8 *)puVar3);
    if (lVar5 == 0) {
LAB_01f395e4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        if (*(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_01f395e4;
        UnityEngine_U2D_Animation_SpriteResolver__ResolveSpriteToSpriteRenderer_1e3a620();
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
    }
    return;
  }
LAB_03edd694:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

