/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$SetWaterItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__SetWaterItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, int32_t index, int32_t height, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* waterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$SetWaterItem
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__SetWaterItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   int32_t index, int32_t height,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* waterItem, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__SetWaterItem_3ddee50
               (long param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000005c37e4c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6ca8);
    bRam0000000005c37e4c = 1;
  }
  puVar1 = PTR_DAT_057f6ca8;
                    /* try { // try from 03edee94 to 03fdee9b has its CatchHandler @ 03edeee0 */
  if (param_2 < param_3 + param_2) {
    do {
                    /* try { // try from 03edeea8 to 03fdeeaf has its CatchHandler @ 03edeedc */
                    /* try { // try from 03edeeb0 to 03fdeecf has its CatchHandler @ 03edee08 */
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x60),param_2,*(undefined8 *)puVar1), lVar2 == 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined8 *)(lVar2 + 0x20) = param_4;
      FUN_012d0d74((undefined8 *)(lVar2 + 0x20),param_4);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
                    /* try { // try from 03edeed0 to 03fdeed3 has its CatchHandler @ 03edeed8 */
                    /* try { // try from 03edeed4 to 03fdeef7 has its CatchHandler @ 03edee08 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edeed0 with catch @ 03edeed8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edeea8 with catch @ 03edeedc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edee94 with catch @ 03edeee0
                        */
  if ((bRam0000000005c37e4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e76e8);
    FUN_012d0dc8(PTR_DAT_057f6ca8);
    bRam0000000005c37e4d = 1;
  }
  puVar1 = PTR_DAT_057f6ca8;
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar3 < 0) {
      return;
    }
    lVar5 = 0;
    iVar4 = -1;
    do {
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

