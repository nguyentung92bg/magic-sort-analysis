/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetBottleItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, int32_t height, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetBottleItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, int32_t height,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o*
   bottleCollection, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem_3ddae50
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 03edacc4 with catch @ 03edae50 */
                    /* catch() { ... } // from try @ 03edacb8 with catch @ 03edae54
                       catch() { ... } // from try @ 03edae2c with catch @ 03edae54 */
                    /* catch() { ... } // from try @ 03edadb8 with catch @ 03edae58 */
                    /* catch() { ... } // from try @ 03edad74 with catch @ 03edae5c */
                    /* catch() { ... } // from try @ 03edad08 with catch @ 03edae60 */
                    /* catch() { ... } // from try @ 03edacfc with catch @ 03edae64 */
                    /* catch() { ... } // from try @ 03edacf0 with catch @ 03edae68
                       catch() { ... } // from try @ 03edae24 with catch @ 03edae68 */
                    /* catch() { ... } // from try @ 03edac98 with catch @ 03edae6c */
                    /* catch() { ... } // from try @ 03edac54 with catch @ 03edae70 */
                    /* catch() { ... } // from try @ 03edac60 with catch @ 03edae74 */
                    /* catch() { ... } // from try @ 03edac44 with catch @ 03edae78
                       catch() { ... } // from try @ 03edae1c with catch @ 03edae78 */
                    /* catch() { ... } // from try @ 03edac9c with catch @ 03edae7c */
  if ((bRam0000000005c37e26 & 1) == 0) {
                    /* try { // try from 03edae94 to 03fdaeab has its CatchHandler @ 03edaf0c */
    FUN_012d0dc8(PTR_DAT_057f2f40);
    bRam0000000005c37e26 = 1;
  }
                    /* try { // try from 03edaeac to 03fdaefb has its CatchHandler @ 03eda734 */
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,1,param_5);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f2f40 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057f2f40)) {
                    /* try { // try from 03edaefc to 03fdaf0b has its CatchHandler @ 03edaf0c */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__Prepare_3ddb0cc
                (plVar2,param_6,1,param_7);
                    /* catch() { ... } // from try @ 03edae94 with catch @ 03edaf0c
                       catch() { ... } // from try @ 03edaefc with catch @ 03edaf0c */
                    /* try { // try from 03edaf10 to 03fdaf13 has its CatchHandler @ 03edaf1c */
                    /* try { // try from 03edaf14 to 03fdaf1f has its CatchHandler @ 03eda734 */
                    /* catch() { ... } // from try @ 03edaf10 with catch @ 03edaf1c */
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

