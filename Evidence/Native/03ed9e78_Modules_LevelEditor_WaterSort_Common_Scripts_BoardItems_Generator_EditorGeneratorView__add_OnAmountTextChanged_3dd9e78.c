/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$add_OnAmountTextChanged
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__add_OnAmountTextChanged (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$add_OnAmountTextChanged
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__add_OnAmountTextChanged
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   System_Action_int__o* value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__add_OnAmountTextChanged_3dd9e78
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 03ed9e88 to 03fd9e8f has its CatchHandler @ 03eda204 */
                    /* try { // try from 03ed9e98 to 03fd9e9f has its CatchHandler @ 03eda1d0 */
  if ((bRam0000000005c37e22 & 1) == 0) {
                    /* try { // try from 03ed9ea4 to 03fd9eab has its CatchHandler @ 03eda1cc */
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    bRam0000000005c37e22 = 1;
  }
                    /* try { // try from 03ed9eb0 to 03fd9ebb has its CatchHandler @ 03eda1c8 */
  puVar1 = PTR_DAT_0577f3c8;
  lVar5 = *(long *)(param_1 + 0x38);
  do {
                    /* try { // try from 03ed9ec0 to 03fd9ecb has its CatchHandler @ 03eda208 */
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
                    /* try { // try from 03ed9eec to 03fd9eef has its CatchHandler @ 03eda208 */
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
                    /* try { // try from 03ed9ed4 to 03fd9edb has its CatchHandler @ 03eda1d8 */
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03ed9f24 to 03fd9f27 has its CatchHandler @ 03eda184 */
        FUN_012d1288(lVar3,uVar6);
      }
    }
    lVar3 = FUN_01351224((long *)(param_1 + 0x38),lVar4,lVar5);
                    /* try { // try from 03ed9efc to 03fd9f0b has its CatchHandler @ 03eda1d4 */
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

