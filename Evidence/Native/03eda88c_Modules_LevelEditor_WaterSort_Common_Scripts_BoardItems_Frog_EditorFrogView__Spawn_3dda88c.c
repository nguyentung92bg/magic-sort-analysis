/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogView$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogView$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Spawn_3dda88c
               (long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    Modules_Contexts_GamePlay_Board_Common_Scripts_BasicTransform__set_LocalScale_2f60f08
              (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
               *(undefined4 *)(lVar1 + 0x14),lVar2,0);
                    /* try { // try from 03eda8e8 to 03fda8eb has its CatchHandler @ 03edabbc */
                    /* try { // try from 03eda8f0 to 03fda8f7 has its CatchHandler @ 03edabec */
    if ((param_1[4] != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
                    /* try { // try from 03eda908 to 03fda90b has its CatchHandler @ 03edabb8 */
                    /* try { // try from 03eda90c to 03fda917 has its CatchHandler @ 03edabe8 */
                    /* WARNING: Could not recover jumptable at 0x03eda918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03eda91c to 03fda923 has its CatchHandler @ 03edabe4 */
  FUN_012d0ef0();
}

