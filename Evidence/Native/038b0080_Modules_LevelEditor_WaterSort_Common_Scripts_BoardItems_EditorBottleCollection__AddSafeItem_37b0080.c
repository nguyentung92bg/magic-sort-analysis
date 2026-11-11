/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddSafeItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafeItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, int32_t requiredAmount, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddSafeItem
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafeItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle,
   int32_t requiredAmount, int32_t safeType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafeItem_37b0080
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
                    /* try { // try from 038b008c to 039b0093 has its CatchHandler @ 038b3308 */
  if (*(long *)(param_1 + 0x40) != 0) {
    auVar11 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                        (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 038b00b0 to 039b00b7 has its CatchHandler @ 038b3034 */
                    /* try { // try from 038b00fc to 039b0103 has its CatchHandler @ 038b3038 */
    if ((((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) && (*(long *)(param_1 + 0x28) != 0))
       && ((lVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetSafeItem_3ddc500
                              (0,_UNK_043b0cf4,0,*(long *)(param_1 + 0x28),
                               *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),auVar11._0_8_,
                               auVar11._8_8_,param_2,param_3,param_4,0), lVar5 != 0 &&
           (*(long *)(lVar5 + 0x30) != 0)))) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__ShowCanvas_37b3104
                ();
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddBlocker_3ddf974
                (param_2,lVar5,0);
                    /* try { // try from 038b011c to 039b0123 has its CatchHandler @ 038b0438 */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddOutItem_3ddfa24
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
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)PTR_DAT_057887b0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
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
                      (lVar7,lVar5);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

