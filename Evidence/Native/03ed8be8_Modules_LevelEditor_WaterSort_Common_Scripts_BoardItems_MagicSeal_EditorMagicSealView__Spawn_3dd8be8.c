/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal.EditorMagicSealView$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal.EditorMagicSealView$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView__Spawn_3dd8be8
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
                    /* try { // try from 03ed8c2c to 03fd8c43 has its CatchHandler @ 03ed8e50 */
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    Modules_Contexts_GamePlay_Board_Common_Scripts_BasicTransform__set_LocalScale_2f60f08
              (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
               *(undefined4 *)(lVar1 + 0x14),lVar2,0);
                    /* try { // try from 03ed8c50 to 03fd8c53 has its CatchHandler @ 03ed8e44 */
    if ((param_1[4] != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
                    /* try { // try from 03ed8c60 to 03fd8c63 has its CatchHandler @ 03ed8e40 */
                    /* WARNING: Could not recover jumptable at 0x03ed8c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03ed8c78 to 03fd8c7b has its CatchHandler @ 03ed8e24 */
  FUN_012d0ef0();
}

