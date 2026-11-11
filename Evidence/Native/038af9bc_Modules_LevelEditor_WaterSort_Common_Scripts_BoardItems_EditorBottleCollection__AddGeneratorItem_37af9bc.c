/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddGeneratorItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddGeneratorItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItemModel_o* generatorItemModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddGeneratorItem
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddGeneratorItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItemModel_o* generatorItemModel,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddGeneratorItem_37af9bc
               (long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
                    /* try { // try from 038af9c0 to 039af9c7 has its CatchHandler @ 038b3478 */
                    /* try { // try from 038af9c8 to 039afaab has its CatchHandler @ 038ae800 */
  if ((bRam0000000005c33e4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6ca8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c33e4d = 1;
  }
  lVar5 = 0;
  if (param_3 != 0) {
    lVar11 = *(long *)(param_3 + 0x18);
    if (lVar11 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
      if (lVar5 == 0) goto LAB_038afaf0;
      System_Collections_Generic_List_Int32Enum____ctor_2051418
                (lVar5,lVar11,*(undefined8 *)PTR_DAT_057e6ca8);
    }
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    lVar11 = *(long *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    if (lVar11 != 0) {
      puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      lVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetGeneratorItem_3ddba84
                        (*puVar7,puVar7[1],puVar7[2],lVar11,uVar12,0,0,param_2,lVar5,0);
                    /* try { // try from 038afaac to 039afab3 has its CatchHandler @ 038b33b4 */
      if (lVar5 != 0) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__ShowCanvas_3dda10c
                  (lVar5,0);
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddBlocker_3ddf974
                  (param_2,lVar5,0);
        if ((bRam0000000005c33e4f & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057887b0);
          FUN_012d0dc8(PTR_DAT_05761728);
          bRam0000000005c33e4f = 1;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar6 = System_Collections_Generic_List_object___Contains_21fce6c
                            (*(long *)(param_1 + 0x20),lVar5,*(undefined8 *)PTR_DAT_05761728);
          if ((uVar6 & 1) != 0) {
            return;
          }
          lVar11 = *(long *)(param_1 + 0x20);
          if (lVar11 != 0) {
            lVar8 = *(long *)(lVar11 + 0x10);
            lVar10 = *(long *)PTR_DAT_057887b0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                *plVar9 = lVar5;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x038b03a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar11,lVar5);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
LAB_038afaf0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

