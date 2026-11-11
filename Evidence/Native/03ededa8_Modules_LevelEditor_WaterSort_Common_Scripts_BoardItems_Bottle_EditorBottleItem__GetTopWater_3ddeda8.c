/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$GetTopWater
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWater (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$GetTopWater
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWater
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWater_3ddeda8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
                    /* try { // try from 03ededac to 03fdedaf has its CatchHandler @ 03ededd0 */
                    /* try { // try from 03ededb0 to 03fdedd7 has its CatchHandler @ 03edecac */
  if ((bRam0000000005c37e4b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e76e8);
                    /* catch() { ... } // from try @ 03ededac with catch @ 03ededd0 */
    FUN_012d0dc8(PTR_DAT_057f6ca8);
                    /* try { // try from 03ededd8 to 03fdeddf has its CatchHandler @ 03ededf4 */
    bRam0000000005c37e4b = 1;
  }
  puVar1 = PTR_DAT_057f6ca8;
                    /* try { // try from 03edede0 to 03fdedeb has its CatchHandler @ 03edecac */
  if (*(long *)(param_1 + 0x60) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x60) + 0x18);
                    /* try { // try from 03ededec to 03fdedf3 has its CatchHandler @ 03ededf4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ededd8 with catch @ 03ededf4
                       catch(type#2 @ 00000000) { ... } // from try @ 03ededec with catch @ 03ededf4
                        */
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
                    /* try { // try from 03edee08 to 03fdee93 has its CatchHandler @ 03edee08
                       catch() { ... } // from try @ 03edee08 with catch @ 03edee08
                       catch() { ... } // from try @ 03edeeb0 with catch @ 03edee08
                       catch() { ... } // from try @ 03edeed4 with catch @ 03edee08
                       catch() { ... } // from try @ 03edeefc with catch @ 03edee08
                       catch() { ... } // from try @ 03edef3c with catch @ 03edee08 */
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x60),iVar3,*(undefined8 *)puVar1), lVar2 == 0))
      break;
      if (*(long *)(lVar2 + 0x20) != 0) {
        return *(long *)(lVar2 + 0x20);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

