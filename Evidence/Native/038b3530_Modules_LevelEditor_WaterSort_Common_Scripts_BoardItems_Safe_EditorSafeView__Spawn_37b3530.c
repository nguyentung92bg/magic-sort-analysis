/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Spawn_37b3530
               (long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 038b3530 to 039b356f has its CatchHandler @ 038ae800 */
  lVar2 = param_1[3];
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
                    /* catch() { ... } // from try @ 038b352c with catch @ 038b3560 */
  if (lVar2 != 0) {
                    /* try { // try from 038b3570 to 039b3583 has its CatchHandler @ 038b374c */
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* catch() { ... } // from try @ 038b0d18 with catch @ 038b3584
                       try { // try from 038b3584 to 039b3597 has its CatchHandler @ 038ae800 */
    Modules_Contexts_GamePlay_Board_Common_Scripts_BasicTransform__set_LocalScale_2f60f08
              (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
               *(undefined4 *)(lVar1 + 0x14),lVar2,0);
                    /* catch() { ... } // from try @ 038b0c64 with catch @ 038b3588 */
                    /* try { // try from 038b3598 to 039b359b has its CatchHandler @ 038b35c8 */
                    /* WARNING: Could not recover jumptable at 0x038b359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 038b359c to 039b35d7 has its CatchHandler @ 038ae800 */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

