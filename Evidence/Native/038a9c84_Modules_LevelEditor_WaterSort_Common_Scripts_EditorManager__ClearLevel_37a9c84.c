/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$ClearLevel
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__ClearLevel (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$ClearLevel
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__ClearLevel
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__ClearLevel_37a9c84(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c33e52 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9b18);
    FUN_012d0dc8(PTR_DAT_05783b60);
    FUN_012d0dc8(PTR_DAT_05814820);
    FUN_012d0dc8(PTR_DAT_05777528);
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    FUN_012d0dc8(PTR_DAT_05793800);
    bRam0000000005c33e52 = 1;
  }
  puVar6 = PTR_DAT_057c3bb8;
  puVar5 = PTR_DAT_05793800;
  lVar7 = *(long *)(lVar9 + 0x18);
  if (lVar7 != 0) {
    iVar11 = 0;
    while (iVar2 = *(int *)(lVar7 + 0x18), iVar11 < iVar2) {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar11,*(undefined8 *)puVar6);
      if (lVar7 == 0) goto LAB_038a8e94;
      iVar2 = *(int *)(lVar7 + 0x18);
      if (0 < iVar2) {
        iVar12 = 0;
        do {
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar7,iVar12,*(undefined8 *)puVar5);
          if (lVar8 == 0) goto LAB_038a8e94;
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
          iVar2 = *(int *)(lVar7 + 0x18);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar2);
      }
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar2) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
      }
      lVar7 = *(long *)(lVar9 + 0x18);
      iVar11 = iVar11 + 1;
      if (lVar7 == 0) goto LAB_038a8e94;
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar2) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
    }
    lVar7 = *(long *)(lVar9 + 0x20);
    if (lVar7 != 0) {
      iVar11 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar11) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
      }
      plVar10 = (long *)(lVar9 + 0x10);
      if (*plVar10 != 0) {
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__Recycle_2d97440
                  (*plVar10,0);
      }
      *plVar10 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_038a8e94:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

