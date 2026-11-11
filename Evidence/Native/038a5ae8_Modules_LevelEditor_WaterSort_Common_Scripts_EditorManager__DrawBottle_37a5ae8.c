/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawBottle
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBottle (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector3_o position, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawBottle
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector3_o
   position, int32_t height, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBottle_37a5ae8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_4 + 0x48);
  *(undefined1 *)(param_4 + 0x68) = 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
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
  uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_2,lVar3,&uStack_48);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  lVar11 = *(long *)(lVar3 + 0x18);
  if (lVar11 == 0) goto LAB_038a7734;
  if (*(int *)(lVar11 + 0x18) == 0) {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057fb420);
    puVar2 = PTR_DAT_05760488;
    if (lVar5 == 0) goto LAB_038a7734;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057bebf8);
    lVar9 = *(long *)(lVar11 + 0x10);
    lVar10 = *(long *)puVar2;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_038a7734;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = lVar5;
      FUN_012d0d74(plVar6,lVar5);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))(lVar11,lVar5);
    }
  }
  if (*(long *)(lVar3 + 0x18) != 0) {
    lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (*(long *)(lVar3 + 0x18),0,*(undefined8 *)PTR_DAT_057c3bb8);
    if (((*(long *)(lVar3 + 0x10) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (uVar7 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem_3ddae50
                          (param_1,param_2,param_3,*(long *)(lVar3 + 0x28),
                           *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x18),param_5,lVar3,0),
       lVar11 != 0)) {
      lVar3 = *(long *)(lVar11 + 0x10);
      lVar5 = *(long *)PTR_DAT_0577f9f0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar7;
          FUN_012d0d74(puVar8,uVar7);
          return uVar7;
        }
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x58) + 8))(lVar11,uVar7)
        ;
        return uVar7;
      }
    }
  }
LAB_038a7734:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

