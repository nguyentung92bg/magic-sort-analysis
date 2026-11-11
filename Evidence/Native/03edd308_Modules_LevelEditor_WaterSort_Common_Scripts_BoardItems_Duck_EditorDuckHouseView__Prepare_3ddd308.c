/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t duckType, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__Prepare_3ddd308
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + 0x58) = param_4;
  lVar10 = *(long *)(param_1 + 0x38);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar3 = PTR_DAT_05805c10;
  if (lVar10 == 0) {
LAB_03edd544:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
             *(undefined4 *)(lVar6 + 0x14),lVar10,0);
  lVar10 = *(long *)(param_1 + 0x38);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  pfVar7 = *(float **)(*(long *)puVar3 + 0xb8);
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834
            (*pfVar7 * _UNK_04339bec,pfVar7[1] * _UNK_04339bec,pfVar7[2] * _UNK_04339bec,0);
  if (lVar10 == 0) goto LAB_03edd544;
  UnityEngine_Transform__set_localRotation_4092f3c(lVar10,0);
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_03edd544;
  UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(param_1 + 0x38),0);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetSorting_3ddd548
            (param_1,param_2,param_3);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_03edd544;
  lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar10 == 0) goto LAB_03edd544;
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
             *(undefined4 *)(lVar6 + 0x14),lVar10,0);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_03edd544;
  lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar10 == 0) goto LAB_03edd544;
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
             *(undefined4 *)(lVar6 + 0x14),lVar10,0);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_03edd544;
  lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar10 == 0) goto LAB_03edd544;
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
             *(undefined4 *)(lVar6 + 0x14),lVar10,0);
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar10 == 0)) goto LAB_03edd544;
  UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x38), lVar10 == 0)) goto LAB_03edd544;
  UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetDuckType_3ddd58c
            (param_1,param_4);
  puVar3 = PTR_DAT_0576c200;
  lVar10 = *(long *)(param_1 + 0x30);
  switch(param_4) {
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
  if (lVar10 != 0) {
    uVar5 = *puVar1;
    if ((bRam0000000005c27d52 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,uVar5,0);
      bRam0000000005c27d52 = 1;
    }
    uVar9 = *(undefined8 *)(lVar10 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar9,uVar5,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar5;
    FUN_012d0d74((undefined8 *)(lVar10 + 0x20),uVar5);
    UnityEngine_U2D_Animation_SpriteLibrary__CacheOverrides_1e38b2c(lVar10);
    puVar3 = PTR_DAT_0575abf8;
    if ((bRam0000000005c27d5d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0575abf8);
      bRam0000000005c27d5d = 1;
    }
    lVar10 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                       (lVar10,*(undefined8 *)puVar3);
    if (lVar10 == 0) {
LAB_01f395e4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        if (*(long *)(lVar10 + (long)(int)uVar8 * 8 + 0x20) == 0) goto LAB_01f395e4;
        UnityEngine_U2D_Animation_SpriteResolver__ResolveSpriteToSpriteRenderer_1e3a620();
        uVar2 = *(uint *)(lVar10 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    return;
  }
LAB_03edd694:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

