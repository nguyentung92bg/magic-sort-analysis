/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$remove_OnAmountTextChanged
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__remove_OnAmountTextChanged (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$remove_OnAmountTextChanged
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__remove_OnAmountTextChanged
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this,
   System_Action_int__o* value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__remove_OnAmountTextChanged_37b33f8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 038b33dc with catch @ 038b3414 */
  if ((bRam0000000005c33e73 & 1) == 0) {
                    /* try { // try from 038b3424 to 039b3437 has its CatchHandler @ 038b374c */
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    bRam0000000005c33e73 = 1;
  }
  puVar1 = PTR_DAT_0577f3c8;
                    /* catch() { ... } // from try @ 038af540 with catch @ 038b3438
                       try { // try from 038b3438 to 039b34b3 has its CatchHandler @ 038ae800 */
  lVar5 = *(long *)(param_1 + 0x48);
  do {
                    /* catch() { ... } // from try @ 038af568 with catch @ 038b343c */
                    /* catch() { ... } // from try @ 038af468 with catch @ 038b3440 */
                    /* catch() { ... } // from try @ 038af44c with catch @ 038b3444 */
                    /* catch() { ... } // from try @ 038af334 with catch @ 038b3448 */
    lVar3 = System_Delegate__Remove_23e3b70(lVar5,param_2,0);
                    /* catch() { ... } // from try @ 038af3b8 with catch @ 038b344c */
    if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 038af3f8 with catch @ 038b346c */
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 038af414 with catch @ 038b3450 */
      uVar6 = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 038af4a0 with catch @ 038b3454 */
                    /* catch() { ... } // from try @ 038af4d0 with catch @ 038b3458 */
                    /* catch() { ... } // from try @ 038af430 with catch @ 038b345c */
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
                    /* catch() { ... } // from try @ 038af398 with catch @ 038b3460 */
                    /* catch() { ... } // from try @ 038af3d8 with catch @ 038b3464 */
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 038b2290 with catch @ 038b349c */
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
                    /* catch() { ... } // from try @ 038af2b0 with catch @ 038b3470 */
                    /* catch() { ... } // from try @ 038af960 with catch @ 038b3474 */
                    /* catch() { ... } // from try @ 038af9c0 with catch @ 038b3478 */
    lVar3 = FUN_01351224((long *)(param_1 + 0x48),lVar4,lVar5);
                    /* catch() { ... } // from try @ 038af6a4 with catch @ 038b347c */
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
                    /* catch() { ... } // from try @ 038af6e4 with catch @ 038b3480 */
                    /* catch() { ... } // from try @ 038af810 with catch @ 038b3484 */
  } while (bVar2);
                    /* catch() { ... } // from try @ 038af76c with catch @ 038b3488 */
                    /* catch() { ... } // from try @ 038af8d0 with catch @ 038b348c */
                    /* catch() { ... } // from try @ 038af70c with catch @ 038b3490 */
                    /* catch() { ... } // from try @ 038b22b4 with catch @ 038b3494 */
                    /* catch() { ... } // from try @ 038b2234 with catch @ 038b3498 */
  return;
}

