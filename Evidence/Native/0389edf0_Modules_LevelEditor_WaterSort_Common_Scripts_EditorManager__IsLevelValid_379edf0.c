/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$IsLevelValid
bool Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__IsLevelValid (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$IsLevelValid
   bool Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__IsLevelValid
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__IsLevelValid_379edf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if ((bRam0000000005c33e1b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0c00);
    FUN_012d0dc8(PTR_DAT_05777528);
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    FUN_012d0dc8(PTR_DAT_05793800);
    FUN_012d0dc8(PTR_DAT_057afe68);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05814b68);
    FUN_012d0dc8(PTR_DAT_057cde58);
    bRam0000000005c33e1b = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetWaterCount_37a6f80
                      ();
    puVar5 = PTR_DAT_057d0c00;
    puVar4 = PTR_DAT_057c3bb8;
    puVar3 = PTR_DAT_057b8520;
    puVar2 = PTR_DAT_057afe68;
    puVar1 = PTR_DAT_05793800;
    lVar9 = *(long *)(param_1 + 0x48);
    if (lVar9 != 0) {
      iVar12 = 0;
      iVar10 = 0;
      while (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) <= iVar10) {
          lVar9 = *(long *)puVar5;
          iVar6 = iVar6 - iVar12;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar9 = *(long *)puVar5;
          }
          if (0 < iVar6) {
            iVar10 = **(int **)(lVar9 + 0xb8);
            iVar12 = 0;
            if (iVar10 != 0) {
              iVar12 = iVar6 / iVar10;
            }
            if (iVar6 == iVar12 * iVar10) {
              return 1;
            }
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          if (lVar9 != 0) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                      (lVar9,*(undefined8 *)PTR_DAT_057cde58,*(undefined8 *)PTR_DAT_05814b68);
            return 0;
          }
          break;
        }
        lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar10,*(undefined8 *)puVar4);
        if (lVar9 == 0) break;
        if (0 < *(int *)(lVar9 + 0x18)) {
          iVar11 = 0;
          do {
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar9,iVar11,*(undefined8 *)puVar1);
            if (lVar7 == 0) goto LAB_0389effc;
            uVar8 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__get_IsLongBottle_3dde430
                              (lVar7,0);
            if ((uVar8 & 1) != 0) {
              lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar9,iVar11,*(undefined8 *)puVar1);
              if (lVar7 == 0) goto LAB_0389effc;
              iVar12 = *(int *)(lVar7 + 0x28) + iVar12;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar9 + 0x18));
        }
        lVar9 = *(long *)(param_1 + 0x48);
        iVar10 = iVar10 + 1;
        if (lVar9 == 0) break;
      }
    }
  }
LAB_0389effc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

