/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$AssignColor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__AssignColor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$AssignColor
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__AssignColor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this,
   int32_t colorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__AssignColor_37b06d8
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  
  if ((bRam0000000005c33e79 & 1) == 0) {
                    /* try { // try from 038b06f8 to 039b0707 has its CatchHandler @ 038b0ac4 */
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_057e0428);
                    /* try { // try from 038b0720 to 039b0723 has its CatchHandler @ 038b0ac8 */
    FUN_012d0dc8(PTR_DAT_057655e0);
    bRam0000000005c33e79 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 038b073c to 039b0743 has its CatchHandler @ 038b3030 */
    uVar5 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                      (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_057ec5e8);
    puVar3 = PTR_DAT_057e0428;
    puVar2 = PTR_DAT_057655e0;
    if ((uVar5 & 1) != 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      iVar8 = 0;
      do {
                    /* try { // try from 038b076c to 039b0773 has its CatchHandler @ 038b309c */
        if (*(int *)(lVar6 + 0x18) <= iVar8) {
          return;
        }
        iVar4 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                          (lVar6,iVar8,*(undefined8 *)puVar3);
        if (iVar4 == -1) {
          if (*(long *)(param_1 + 0x48) != 0) {
            System_Collections_Generic_List_Int32Enum___set_Item_20518b4
                      (*(long *)(param_1 + 0x48),iVar8,param_2,*(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0x30) != 0) {
              Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetColorIds_37b44c0
                        (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
              puVar2 = PTR_DAT_057b8520;
                    /* try { // try from 038b07dc to 039b07df has its CatchHandler @ 038b3020 */
                    /* try { // try from 038b07e0 to 039b07eb has its CatchHandler @ 038b30a0 */
              if ((bRam0000000005c33e7a & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057e6ca8);
                FUN_012d0dc8(PTR_DAT_05805bc0);
                FUN_012d0dc8(PTR_DAT_05795338);
                FUN_012d0dc8(PTR_DAT_057b8520);
                FUN_012d0dc8(PTR_DAT_0580a258);
                bRam0000000005c33e7a = 1;
              }
              puVar3 = PTR_DAT_05795338;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar3);
              if (lVar6 == 0) {
                return;
              }
              uVar1 = *(undefined4 *)(param_1 + 0x40);
              uVar9 = *(undefined8 *)(param_1 + 0x48);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
              puVar2 = PTR_DAT_0580a258;
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Collections_Generic_List_Int32Enum____ctor_2051418
                        (lVar7,uVar9,*(undefined8 *)PTR_DAT_057e6ca8);
              if (*(long *)(lVar6 + 0x18) == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x0343e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x18) + 8
                          ))(*(long *)(lVar6 + 0x18),uVar1,lVar7);
              return;
            }
          }
          break;
        }
        lVar6 = *(long *)(param_1 + 0x48);
        iVar8 = iVar8 + 1;
                    /* try { // try from 038b0794 to 039b07b3 has its CatchHandler @ 038b33b8 */
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

