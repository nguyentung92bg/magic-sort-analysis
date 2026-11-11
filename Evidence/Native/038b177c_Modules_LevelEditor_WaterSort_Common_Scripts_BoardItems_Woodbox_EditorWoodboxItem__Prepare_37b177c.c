/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t keyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem_o* __this,
   UnityEngine_Vector3_o localPosition,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t keyType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__Prepare_37b177c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  *(undefined8 *)(param_4 + 0x38) = param_5;
  FUN_012d0d74();
  *(undefined4 *)(param_4 + 0x40) = param_6;
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
            (param_1,param_2,param_3,param_4);
  puVar3 = PTR_DAT_0576c200;
  lVar5 = *(long *)(param_4 + 0x30);
                    /* try { // try from 038b17c4 to 039b17cb has its CatchHandler @ 038b2f40 */
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *(long *)(lVar5 + 0x20);
  switch(*(undefined4 *)(param_4 + 0x40)) {
  case 1:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xe0);
    break;
  case 2:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xf0);
    break;
  case 3:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xd8);
    break;
  case 4:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xd0);
    break;
  case 5:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xf8);
    break;
  case 6:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xe8);
    break;
  default:
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_038b1d98;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x28) + 0xa8);
  }
  if (lVar6 != 0) {
    uVar7 = *puVar1;
    if ((bRam0000000005c27d52 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,uVar7,0);
      bRam0000000005c27d52 = 1;
    }
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar9,uVar7,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    FUN_012d0d74((undefined8 *)(lVar6 + 0x20),uVar7);
    UnityEngine_U2D_Animation_SpriteLibrary__CacheOverrides_1e38b2c(lVar6);
    puVar3 = PTR_DAT_0575abf8;
    if ((bRam0000000005c27d5d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0575abf8);
      bRam0000000005c27d5d = 1;
    }
    lVar5 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                      (lVar6,*(undefined8 *)puVar3);
    if (lVar5 == 0) {
LAB_01f395e4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        if (*(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20) == 0) goto LAB_01f395e4;
        UnityEngine_U2D_Animation_SpriteResolver__ResolveSpriteToSpriteRenderer_1e3a620();
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    return;
  }
LAB_038b1d98:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

