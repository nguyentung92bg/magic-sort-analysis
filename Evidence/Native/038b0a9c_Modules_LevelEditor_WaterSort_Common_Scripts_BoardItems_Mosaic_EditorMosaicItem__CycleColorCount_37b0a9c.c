/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$CycleColorCount
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__CycleColorCount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$CycleColorCount
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__CycleColorCount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__CycleColorCount_37b0a9c
               (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
                    /* try { // try from 038b0ab0 to 039b0adf has its CatchHandler @ 038ae800 */
                    /* catch() { ... } // from try @ 038b0a7c with catch @ 038b0ab4 */
  if ((bRam0000000005c33e78 & 1) == 0) {
                    /* catch() { ... } // from try @ 038b0a74 with catch @ 038b0ab8 */
                    /* catch() { ... } // from try @ 038b0a38 with catch @ 038b0abc */
                    /* catch() { ... } // from try @ 038b0a54 with catch @ 038b0ac0
                       catch() { ... } // from try @ 038b0a88 with catch @ 038b0ac0 */
    FUN_012d0dc8(PTR_DAT_05814878);
                    /* catch() { ... } // from try @ 038b06f8 with catch @ 038b0ac4 */
                    /* catch() { ... } // from try @ 038b0720 with catch @ 038b0ac8 */
                    /* catch() { ... } // from try @ 038b06cc with catch @ 038b0acc */
    FUN_012d0dc8(PTR_DAT_057d47e0);
    FUN_012d0dc8(PTR_DAT_057f55a8);
                    /* try { // try from 038b0ae0 to 039b0ae3 has its CatchHandler @ 038b2f08 */
    bRam0000000005c33e78 = 1;
  }
  puVar6 = PTR_DAT_05814878;
                    /* try { // try from 038b0ae4 to 039b0beb has its CatchHandler @ 038ae800 */
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != 0) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    iVar3 = (int)uVar2 % 5;
    puVar4 = (undefined8 *)PTR_DAT_057d47e0;
    while (PTR_DAT_057d47e0 = (undefined *)puVar4, (int)uVar2 <= iVar3) {
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)puVar6;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_038b0be4;
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = 0xffffffff;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar7,0xffffffff);
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar7 == 0) goto LAB_038b0be4;
      }
      puVar4 = (undefined8 *)PTR_DAT_057d47e0;
      uVar2 = *(uint *)(lVar7 + 0x18);
    }
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar3 + 1) {
        if (*(long *)(param_1 + 0x30) != 0) {
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetColorIds_37b44c0
                    (*(long *)(param_1 + 0x30),lVar7);
          puVar6 = PTR_DAT_057b8520;
          if ((bRam0000000005c33e7a & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057e6ca8);
            FUN_012d0dc8(PTR_DAT_05805bc0);
            FUN_012d0dc8(PTR_DAT_05795338);
            FUN_012d0dc8(PTR_DAT_057b8520);
            FUN_012d0dc8(PTR_DAT_0580a258);
            bRam0000000005c33e7a = 1;
          }
          puVar5 = PTR_DAT_05795338;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar5);
          if (lVar7 == 0) {
            return;
          }
          uVar1 = *(undefined4 *)(param_1 + 0x40);
          uVar10 = *(undefined8 *)(param_1 + 0x48);
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
          puVar6 = PTR_DAT_0580a258;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_Int32Enum____ctor_2051418
                    (lVar8,uVar10,*(undefined8 *)PTR_DAT_057e6ca8);
          if (*(long *)(lVar7 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x18) + 8))
                      (*(long *)(lVar7 + 0x18),uVar1,lVar8);
            return;
          }
          return;
        }
        break;
      }
      System_Collections_Generic_List_Int32Enum___RemoveAt_205344c
                (lVar7,*(int *)(lVar7 + 0x18) + -1,*puVar4);
      lVar7 = *(long *)(param_1 + 0x48);
    } while (lVar7 != 0);
  }
LAB_038b0be4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

