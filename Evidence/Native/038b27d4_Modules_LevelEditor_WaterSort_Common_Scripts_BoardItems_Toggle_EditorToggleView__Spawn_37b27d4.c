/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__Spawn_37b27d4
               (long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 038b27d4 to 039b27eb has its CatchHandler @ 038b2e64 */
  lVar2 = param_1[3];
  if (cRam0000000005c230a9 == '\0') {
                    /* try { // try from 038b27f0 to 039b280b has its CatchHandler @ 038b2e98 */
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar2 != 0) {
                    /* try { // try from 038b280c to 039b280f has its CatchHandler @ 038b2e4c */
                    /* try { // try from 038b2810 to 039b2813 has its CatchHandler @ 038b2e50 */
                    /* try { // try from 038b2814 to 039b2817 has its CatchHandler @ 038b2dfc */
                    /* try { // try from 038b2818 to 039b281f has its CatchHandler @ 038b2df8 */
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 038b2820 to 039b2827 has its CatchHandler @ 038b2df4 */
                    /* try { // try from 038b2828 to 039b282f has its CatchHandler @ 038b2e74 */
    Modules_Contexts_GamePlay_Board_Common_Scripts_BasicTransform__set_LocalScale_2f60f08
              (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
               *(undefined4 *)(lVar1 + 0x14),lVar2,0);
                    /* try { // try from 038b2830 to 039b283b has its CatchHandler @ 038b2df0 */
                    /* try { // try from 038b283c to 039b2843 has its CatchHandler @ 038b2dec */
    if ((param_1[4] != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar2 != 0)) {
                    /* try { // try from 038b2844 to 039b2847 has its CatchHandler @ 038b2e2c */
                    /* try { // try from 038b2848 to 039b284b has its CatchHandler @ 038b2de8 */
      UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
                    /* try { // try from 038b284c to 039b2863 has its CatchHandler @ 038b2e5c */
                    /* WARNING: Could not recover jumptable at 0x038b2860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

