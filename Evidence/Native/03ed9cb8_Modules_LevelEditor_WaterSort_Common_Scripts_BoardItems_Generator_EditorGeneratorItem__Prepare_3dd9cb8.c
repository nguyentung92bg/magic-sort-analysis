/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, System_Collections_Generic_List_ColorId__o* colorsInBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$Prepare
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this,
   UnityEngine_Vector3_o localPosition,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, System_Collections_Generic_List_ColorId__o* colorsInBottle, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__Prepare_3dd9cb8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uStack_44;
  
  if ((bRam0000000005c37e1d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_057791e8);
    bRam0000000005c37e1d = 1;
  }
  uStack_44 = 0;
  *(undefined8 *)(param_4 + 0x38) = param_5;
  FUN_012d0d74((undefined8 *)(param_4 + 0x38),param_5);
  plVar5 = (long *)(param_4 + 0x40);
  *plVar5 = param_6;
  FUN_012d0d74(plVar5,param_6);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
            (param_1,param_2,param_3,param_4,0);
  lVar3 = *(long *)(param_4 + 0x30);
  if ((bRam0000000005c37e1e & 1) == 0) {
                    /* try { // try from 03ed9d64 to 03fd9d6f has its CatchHandler @ 03eda208 */
    FUN_012d0dc8(PTR_DAT_057f55a8);
                    /* try { // try from 03ed9d74 to 03fd9d7b has its CatchHandler @ 03eda1f0 */
    bRam0000000005c37e1e = 1;
  }
                    /* try { // try from 03ed9d7c to 03fd9d83 has its CatchHandler @ 03eda1ec */
  uStack_44 = 0;
  if (*plVar5 != 0) {
    uStack_44 = *(undefined4 *)(*plVar5 + 0x18);
  }
                    /* try { // try from 03ed9d84 to 03fd9d8b has its CatchHandler @ 03eda1e8 */
                    /* try { // try from 03ed9d90 to 03fd9d97 has its CatchHandler @ 03eda1e4 */
  uVar2 = System_Int32__ToString_26c9768(&uStack_44,0);
  puVar1 = PTR_DAT_0577f3c8;
                    /* try { // try from 03ed9d9c to 03fd9da7 has its CatchHandler @ 03eda1e0 */
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
    TMPro_TMP_InputField__set_text_3790d40(lVar3,uVar2,0);
    lVar4 = *(long *)(param_4 + 0x30);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03ed9dc0 to 03fd9dc7 has its CatchHandler @ 03eda1b4 */
                    /* try { // try from 03ed9dd4 to 03fd9deb has its CatchHandler @ 03eda1bc */
    if ((lVar3 != 0) &&
       (System_Action_int____ctor_1646aac(lVar3,param_4,*(undefined8 *)PTR_DAT_057791e8,0),
       lVar4 != 0)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__add_OnAmountTextChanged_3dd9e78
                (lVar4,lVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

