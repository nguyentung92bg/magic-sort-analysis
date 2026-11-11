/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetUniqueColorCount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetUniqueColorCount (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetUniqueColorCount
   int32_t Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetUniqueColorCount
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

int Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetUniqueColorCount_37a6dfc
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((bRam0000000005c33e12 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0c00);
    FUN_012d0dc8(PTR_DAT_05777528);
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    FUN_012d0dc8(PTR_DAT_05793800);
    bRam0000000005c33e12 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetWaterCount_37a6f80
                      ();
    puVar3 = PTR_DAT_057d0c00;
    puVar2 = PTR_DAT_057c3bb8;
    puVar1 = PTR_DAT_05793800;
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 != 0) {
      iVar10 = 0;
      iVar11 = 0;
      iVar8 = 0;
      while (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) <= iVar8) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar7 = *(long *)puVar3;
          }
          iVar8 = 0;
          if (**(int **)(lVar7 + 0xb8) != 0) {
            iVar8 = (iVar4 - iVar11) / **(int **)(lVar7 + 0xb8);
          }
          return iVar8 + iVar10;
        }
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar7,iVar8,*(undefined8 *)puVar2);
        if (lVar7 == 0) break;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar9 = 0;
          do {
            lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar7,iVar9,*(undefined8 *)puVar1);
            if (lVar5 == 0) goto LAB_038a6f38;
            uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__get_IsLongBottle_3dde430
                              (lVar5,0);
            if ((uVar6 & 1) != 0) {
              lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar7,iVar9,*(undefined8 *)puVar1);
              if (lVar5 == 0) goto LAB_038a6f38;
              iVar10 = iVar10 + 1;
              iVar11 = *(int *)(lVar5 + 0x28) + iVar11;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar7 + 0x18));
        }
        lVar7 = *(long *)(param_1 + 0x48);
        iVar8 = iVar8 + 1;
        if (lVar7 == 0) break;
      }
    }
  }
LAB_038a6f38:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

