/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetColorIdsByMosaicType
System_Collections_Generic_List_ColorId__o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorIdsByMosaicType (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, int32_t mosaicType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetColorIdsByMosaicType
   System_Collections_Generic_List_ColorId__o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorIdsByMosaicType
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   int32_t mosaicType, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorIdsByMosaicType_37b0be8
               (long param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
                    /* try { // try from 038b0bec to 039b0bf3 has its CatchHandler @ 038b3378 */
  if ((bRam0000000005c33e5e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790308);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
                    /* try { // try from 038b0c4c to 039b0c53 has its CatchHandler @ 038b3364 */
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057d7b88);
                    /* try { // try from 038b0c64 to 039b0c9b has its CatchHandler @ 038b3588 */
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05777528);
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    FUN_012d0dc8(PTR_DAT_05793800);
    FUN_012d0dc8(PTR_DAT_05805bc0);
                    /* try { // try from 038b0ca8 to 039b0cb3 has its CatchHandler @ 038b336c */
    bRam0000000005c33e5e = 1;
  }
  puVar7 = PTR_DAT_057d7b88;
  puVar6 = PTR_DAT_057c2cf0;
  puVar5 = PTR_DAT_05797338;
  puVar4 = PTR_DAT_05793800;
  puVar3 = PTR_DAT_05790308;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
                    /* try { // try from 038b0cc4 to 039b0ccf has its CatchHandler @ 038b3348 */
    iVar12 = 0;
                    /* try { // try from 038b0cf0 to 039b0cf7 has its CatchHandler @ 038b3358 */
    while (iVar12 < *(int *)(lVar8 + 0x18)) {
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar8,iVar12,*(undefined8 *)PTR_DAT_057c3bb8);
      if (lVar8 == 0) goto LAB_038b0e1c;
                    /* try { // try from 038b0d18 to 039b0d37 has its CatchHandler @ 038b3584 */
      if (0 < *(int *)(lVar8 + 0x18)) {
        iVar13 = 0;
        do {
          lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar8,iVar13,*(undefined8 *)puVar4);
          if (lVar9 == 0) goto LAB_038b0e1c;
          uVar10 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                             (lVar9,0);
          if ((uVar10 & 1) != 0) {
                    /* try { // try from 038b0d4c to 039b0d57 has its CatchHandler @ 038b3368 */
            if (*(long *)(lVar9 + 0x68) == 0) goto LAB_038b0e1c;
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_98,*(long *)(lVar9 + 0x68),*(undefined8 *)puVar7);
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
                    /* try { // try from 038b0d68 to 039b0d73 has its CatchHandler @ 038b3374 */
            plStack_70 = plStack_88;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_80,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
              if (plStack_70 != (long *)0x0) {
                    /* try { // try from 038b0d84 to 039b0d8f has its CatchHandler @ 038b3350 */
                bVar1 = *(byte *)(*(long *)puVar3 + 300);
                    /* try { // try from 038b0da0 to 039b0dab has its CatchHandler @ 038b334c */
                if (((bVar1 <= *(byte *)(*plStack_70 + 300)) &&
                    (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar1 * 8 + -8) ==
                     *(long *)puVar3)) && ((int)plStack_70[8] == param_2)) {
                    /* try { // try from 038b0dbc to 039b0dc7 has its CatchHandler @ 038b335c */
                  lVar8 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__GetColorIds_37aafdc
                                    ();
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_80,*(undefined8 *)puVar6);
                  return lVar8;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)puVar6);
          }
          iVar13 = iVar13 + 1;
                    /* try { // try from 038b0dd8 to 039b0de3 has its CatchHandler @ 038b3370 */
        } while (iVar13 < *(int *)(lVar8 + 0x18));
      }
      lVar8 = *(long *)(param_1 + 0x18);
      iVar12 = iVar12 + 1;
      if (lVar8 == 0) goto LAB_038b0e1c;
    }
                    /* try { // try from 038b0e54 to 039b0e5f has its CatchHandler @ 038b333c */
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
    if (lVar8 != 0) {
                    /* try { // try from 038b0e70 to 039b0e7b has its CatchHandler @ 038b3310 */
      System_Collections_Generic_List_Int32Enum____ctor_20512f0
                (lVar8,*(undefined8 *)PTR_DAT_057b99d0);
      lVar9 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 038b0e90 to 039b0e9b has its CatchHandler @ 038b3340 */
      lVar11 = *(long *)PTR_DAT_05814878;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 038b0eac to 039b0eb7 has its CatchHandler @ 038b3324 */
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = 0xffffffff;
        }
        else {
                    /* try { // try from 038b0ec8 to 039b0ed3 has its CatchHandler @ 038b3320 */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar8,0xffffffff);
        }
                    /* try { // try from 038b0e38 to 039b0e43 has its CatchHandler @ 038b3344 */
        return lVar8;
      }
    }
  }
LAB_038b0e1c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b0e1c to 039b0e27 has its CatchHandler @ 038b3360 */
  FUN_012d0ef0();
}

