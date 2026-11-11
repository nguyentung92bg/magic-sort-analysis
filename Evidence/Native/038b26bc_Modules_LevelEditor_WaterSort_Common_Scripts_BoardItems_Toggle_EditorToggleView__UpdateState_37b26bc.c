/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$UpdateState
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__UpdateState (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$UpdateState
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__UpdateState
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, bool
   isOn, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__UpdateState_37b26bc
               (long param_1,uint param_2)

{
  long lVar1;
  
                    /* try { // try from 038b26c8 to 039b26cf has its CatchHandler @ 038ae800 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 038b26d0 to 039b26d7 has its CatchHandler @ 038b2e88 */
                    /* try { // try from 038b26d8 to 039b26df has its CatchHandler @ 038b2e84 */
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0);
    if (lVar1 != 0) {
                    /* try { // try from 038b26e0 to 039b26e7 has its CatchHandler @ 038b2e68 */
                    /* try { // try from 038b26e8 to 039b26ef has its CatchHandler @ 038b2e60 */
      UnityEngine_GameObject__SetActive_408e318(lVar1,~param_2 & 1,0);
                    /* try { // try from 038b26f0 to 039b26f7 has its CatchHandler @ 038b2e58 */
                    /* try { // try from 038b26f8 to 039b2767 has its CatchHandler @ 038ae800 */
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
         lVar1 != 0)) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

