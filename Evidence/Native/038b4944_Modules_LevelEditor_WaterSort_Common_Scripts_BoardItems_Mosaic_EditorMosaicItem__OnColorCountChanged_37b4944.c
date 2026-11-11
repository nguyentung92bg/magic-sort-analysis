/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$OnColorCountChanged
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnColorCountChanged (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$OnColorCountChanged
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnColorCountChanged
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this,
   int32_t count, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnColorCountChanged_37b4944
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000005c33e7e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057d47e0);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_05795338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0580a258);
    bRam0000000005c33e7e = 1;
  }
  puVar2 = PTR_DAT_05814878;
  puVar1 = PTR_DAT_057d47e0;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
LAB_038b4acc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = *(uint *)(lVar3 + 0x18);
  if (param_2 < (int)uVar4) {
    do {
      System_Collections_Generic_List_Int32Enum___RemoveAt_205344c
                (lVar3,uVar4 - 1,*(undefined8 *)puVar1);
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 == 0) goto LAB_038b4acc;
      uVar4 = *(uint *)(lVar3 + 0x18);
    } while (param_2 < (int)uVar4);
  }
  else {
    while ((int)uVar4 < param_2) {
                    /* try { // try from 038b4a04 to 039b528b has its CatchHandler @ 038b4a04
                       catch() { ... } // from try @ 038b4a04 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b67cc with catch @ 038b4a04
                       catch() { ... } // from try @ 038b6c10 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b6f04 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b7b0c with catch @ 038b4a04
                       catch() { ... } // from try @ 038b7c38 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b80b0 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b8670 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b8d18 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b8de0 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b93c4 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b94b8 with catch @ 038b4a04
                       catch() { ... } // from try @ 038b956c with catch @ 038b4a04
                       catch() { ... } // from try @ 038ba05c with catch @ 038b4a04
                       catch() { ... } // from try @ 038ba250 with catch @ 038b4a04
                       catch() { ... } // from try @ 038ba3bc with catch @ 038b4a04
                       catch() { ... } // from try @ 038ba418 with catch @ 038b4a04
                       catch() { ... } // from try @ 038ba8b4 with catch @ 038b4a04
                       catch() { ... } // from try @ 038ba954 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bacec with catch @ 038b4a04
                       catch() { ... } // from try @ 038bae5c with catch @ 038b4a04
                       catch() { ... } // from try @ 038bae78 with catch @ 038b4a04
                       catch() { ... } // from try @ 038baeb8 with catch @ 038b4a04
                       catch() { ... } // from try @ 038baed4 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb06c with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb114 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb2f0 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb4c0 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb52c with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb574 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb5b0 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb604 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb64c with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb6a4 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb734 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb780 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb82c with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb87c with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb8a0 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb8f8 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb910 with catch @ 038b4a04
                       catch() { ... } // from try @ 038bb958 with catch @ 038b4a04 */
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)puVar2;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_038b4acc;
      if (uVar4 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar4 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar4 * 4 + 0x20) = 0xffffffff;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar3,0xffffffff);
        lVar3 = *(long *)(param_1 + 0x48);
      }
      if (lVar3 == 0) goto LAB_038b4acc;
      uVar4 = *(uint *)(lVar3 + 0x18);
    }
  }
  puVar1 = PTR_DAT_05795338;
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0343e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0580a258 + 0x20) + 0xc0) + 0x18) + 8))
            (*(long *)(lVar3 + 0x18),*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48)
            );
  return;
}

