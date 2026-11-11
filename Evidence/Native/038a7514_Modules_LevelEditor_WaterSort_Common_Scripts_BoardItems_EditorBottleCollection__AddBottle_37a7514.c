/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddBottle
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBottle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector3_o position, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddBottle
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector3_o position, int32_t bottleHeight, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBottle_37a7514
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_48;
  
  if ((bRam0000000005c33e4e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f9f0);
    FUN_012d0dc8(PTR_DAT_05760488);
    FUN_012d0dc8(PTR_DAT_057bebf8);
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    FUN_012d0dc8(PTR_DAT_057fb420);
    bRam0000000005c33e4e = 1;
  }
  uStack_48 = 0;
  uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_2,param_4,&uStack_48);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar10 = *(long *)(param_4 + 0x18);
  if (lVar10 == 0) goto LAB_038a7734;
  if (*(int *)(lVar10 + 0x18) == 0) {
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057fb420);
    puVar2 = PTR_DAT_05760488;
    if (lVar4 == 0) goto LAB_038a7734;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar4,*(undefined8 *)PTR_DAT_057bebf8);
    lVar8 = *(long *)(lVar10 + 0x10);
    lVar9 = *(long *)puVar2;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_038a7734;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar4;
      FUN_012d0d74(plVar5,lVar4);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))(lVar10,lVar4);
    }
  }
  if (*(long *)(param_4 + 0x18) != 0) {
    lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (*(long *)(param_4 + 0x18),0,*(undefined8 *)PTR_DAT_057c3bb8);
    if (((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) &&
       (uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem_3ddae50
                          (param_1,param_2,param_3,*(long *)(param_4 + 0x28),
                           *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),param_5,param_4,0),
       lVar10 != 0)) {
      lVar4 = *(long *)(lVar10 + 0x10);
      lVar8 = *(long *)PTR_DAT_0577f9f0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar6;
          FUN_012d0d74(puVar7,uVar6);
          return uVar6;
        }
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar10,uVar6)
        ;
        return uVar6;
      }
    }
  }
LAB_038a7734:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

