/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.EditorDuck.EditorDuckHouseItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_EditorDuck_EditorDuckHouseItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_EditorDuck_EditorDuckHouseItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.EditorDuck.EditorDuckHouseItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_EditorDuck_EditorDuckHouseItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_EditorDuck_EditorDuckHouseItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t duckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_EditorDuck_EditorDuckHouseItem__Prepare_230a2e0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_4);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined4 *)(lVar5 + 0x58) = param_5;
  lVar11 = *(long *)(lVar5 + 0x38);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar3 = PTR_DAT_05805c10;
  if (lVar11 == 0) {
LAB_03edd544:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
             *(undefined4 *)(lVar7 + 0x14),lVar11,0);
  lVar11 = *(long *)(lVar5 + 0x38);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  pfVar8 = *(float **)(*(long *)puVar3 + 0xb8);
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834
            (*pfVar8 * _UNK_04339bec,pfVar8[1] * _UNK_04339bec,pfVar8[2] * _UNK_04339bec,0);
  if (lVar11 == 0) goto LAB_03edd544;
  UnityEngine_Transform__set_localRotation_4092f3c(lVar11,0);
  if (*(long *)(lVar5 + 0x38) == 0) goto LAB_03edd544;
  UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(lVar5 + 0x38),0);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetSorting_3ddd548
            (lVar5,param_2,param_3);
  if (*(long *)(lVar5 + 0x18) == 0) goto LAB_03edd544;
  lVar11 = *(long *)(*(long *)(lVar5 + 0x18) + 0x10);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar11 == 0) goto LAB_03edd544;
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
             *(undefined4 *)(lVar7 + 0x14),lVar11,0);
  if (*(long *)(lVar5 + 0x40) == 0) goto LAB_03edd544;
  lVar11 = *(long *)(*(long *)(lVar5 + 0x40) + 0x10);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar11 == 0) goto LAB_03edd544;
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
             *(undefined4 *)(lVar7 + 0x14),lVar11,0);
  if (*(long *)(lVar5 + 0x40) == 0) goto LAB_03edd544;
  lVar11 = *(long *)(*(long *)(lVar5 + 0x40) + 0x18);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar11 == 0) goto LAB_03edd544;
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
             *(undefined4 *)(lVar7 + 0x14),lVar11,0);
  if ((*(long *)(lVar5 + 0x40) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar5 + 0x40) + 0x30), lVar11 == 0)) goto LAB_03edd544;
  UnityEngine_GameObject__SetActive_408e318(lVar11,1,0);
  if ((*(long *)(lVar5 + 0x40) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar5 + 0x40) + 0x38), lVar11 == 0)) goto LAB_03edd544;
  UnityEngine_GameObject__SetActive_408e318(lVar11,1,0);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetDuckType_3ddd58c
            (lVar5,param_5);
  puVar3 = PTR_DAT_0576c200;
  lVar11 = *(long *)(lVar5 + 0x30);
  switch(param_5) {
  case 1:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xe0);
    break;
  case 2:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xf0);
    break;
  case 3:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xd8);
    break;
  case 4:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xd0);
    break;
  case 5:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xf8);
    break;
  case 6:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xe8);
    break;
  default:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_03edd694;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0xa8);
  }
  if (lVar11 != 0) {
    uVar6 = *puVar1;
    if ((bRam0000000005c27d52 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,uVar6,0);
      bRam0000000005c27d52 = 1;
    }
    uVar10 = *(undefined8 *)(lVar11 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar10,uVar6,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(undefined8 *)(lVar11 + 0x20) = uVar6;
    FUN_012d0d74((undefined8 *)(lVar11 + 0x20),uVar6);
    UnityEngine_U2D_Animation_SpriteLibrary__CacheOverrides_1e38b2c(lVar11);
    puVar3 = PTR_DAT_0575abf8;
    if ((bRam0000000005c27d5d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0575abf8);
      bRam0000000005c27d5d = 1;
    }
    lVar5 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                      (lVar11,*(undefined8 *)puVar3);
    if (lVar5 == 0) {
LAB_01f395e4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      uVar9 = 0;
      do {
        if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        if (*(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20) == 0) goto LAB_01f395e4;
        UnityEngine_U2D_Animation_SpriteResolver__ResolveSpriteToSpriteRenderer_1e3a620();
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    return;
  }
LAB_03edd694:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

