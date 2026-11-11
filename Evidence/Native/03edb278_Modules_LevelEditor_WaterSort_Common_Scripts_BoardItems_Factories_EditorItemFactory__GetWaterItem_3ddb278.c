/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetWaterItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWaterItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, int32_t height, int32_t index, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetWaterItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWaterItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, int32_t height, int32_t
   index, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo*
   method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWaterItem_3ddb278
                 (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c37e27 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e0268);
    bRam0000000005c37e27 = 1;
  }
                    /* try { // try from 03edb2d0 to 03fdb387 has its CatchHandler @ 03edb2d0
                       catch() { ... } // from try @ 03edb2d0 with catch @ 03edb2d0
                       catch() { ... } // from try @ 03edb4c0 with catch @ 03edb2d0
                       catch() { ... } // from try @ 03edb558 with catch @ 03edb2d0
                       catch() { ... } // from try @ 03edb5c8 with catch @ 03edb2d0
                       catch() { ... } // from try @ 03edb630 with catch @ 03edb2d0 */
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (0,0,0,param_1,2,param_2);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057e0268 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057e0268)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__Prepare_37b1f84
                (plVar2,param_3,param_4,param_5,param_6,param_7,0);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

