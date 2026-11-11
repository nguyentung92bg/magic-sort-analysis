/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$remove_OnAmountTextChanged
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__remove_OnAmountTextChanged (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$remove_OnAmountTextChanged
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__remove_OnAmountTextChanged
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   System_Action_int__o* value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__remove_OnAmountTextChanged_3dda220
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 03eda220 to 03fda237 has its CatchHandler @ 03eda298 */
                    /* try { // try from 03eda238 to 03fda287 has its CatchHandler @ 03ed9c54 */
  if ((bRam0000000005c37e23 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    bRam0000000005c37e23 = 1;
  }
  puVar1 = PTR_DAT_0577f3c8;
  lVar5 = *(long *)(param_1 + 0x38);
  do {
    lVar3 = System_Delegate__Remove_23e3b70(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
                    /* try { // try from 03eda288 to 03fda297 has its CatchHandler @ 03eda298 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
                    /* catch() { ... } // from try @ 03eda220 with catch @ 03eda298
                       catch() { ... } // from try @ 03eda288 with catch @ 03eda298 */
                    /* try { // try from 03eda29c to 03fda29f has its CatchHandler @ 03eda2a8 */
                    /* try { // try from 03eda2a0 to 03fda2ab has its CatchHandler @ 03ed9c54 */
    lVar3 = FUN_01351224((long *)(param_1 + 0x38),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
                    /* catch() { ... } // from try @ 03eda29c with catch @ 03eda2a8 */
  } while (bVar2);
  return;
}

