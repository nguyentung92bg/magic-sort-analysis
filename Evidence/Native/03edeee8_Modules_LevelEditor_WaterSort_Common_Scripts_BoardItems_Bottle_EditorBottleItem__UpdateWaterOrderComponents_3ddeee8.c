/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$UpdateWaterOrderComponents
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateWaterOrderComponents (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$UpdateWaterOrderComponents
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateWaterOrderComponents
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateWaterOrderComponents_3ddeee8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
                    /* try { // try from 03edeef8 to 03fdeefb has its CatchHandler @ 03edef24 */
                    /* try { // try from 03edeefc to 03fdef33 has its CatchHandler @ 03edee08 */
  if ((bRam0000000005c37e4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e76e8);
    FUN_012d0dc8(PTR_DAT_057f6ca8);
    bRam0000000005c37e4d = 1;
  }
  puVar1 = PTR_DAT_057f6ca8;
                    /* catch() { ... } // from try @ 03edeef8 with catch @ 03edef24 */
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x18) + -1;
                    /* try { // try from 03edef34 to 03fdef3b has its CatchHandler @ 03edef50 */
    if (iVar3 < 0) {
      return;
    }
                    /* try { // try from 03edef3c to 03fdef47 has its CatchHandler @ 03edee08 */
    lVar5 = 0;
    iVar4 = -1;
    do {
                    /* try { // try from 03edef48 to 03fdef4f has its CatchHandler @ 03edef50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03edef34 with catch @ 03edef50
                       catch(type#2 @ 00000000) { ... } // from try @ 03edef48 with catch @ 03edef50
                        */
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      lVar2 = *(long *)(lVar2 + 0x20);
      if ((lVar2 != 0) && (lVar2 != lVar5)) {
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0x38) = iVar4;
        lVar5 = lVar2;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x60);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

