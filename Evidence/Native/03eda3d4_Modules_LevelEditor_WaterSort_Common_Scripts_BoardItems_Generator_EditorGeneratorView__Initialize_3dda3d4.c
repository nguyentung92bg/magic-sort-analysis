/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$Initialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__Initialize_3dda3d4
               (long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar1 != 0) {
                    /* try { // try from 03eda420 to 03fda42f has its CatchHandler @ 03eda61c */
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar1,0);
    if ((param_1[4] != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar1 != 0)) {
                    /* try { // try from 03eda44c to 03fda44f has its CatchHandler @ 03eda5ec */
                    /* try { // try from 03eda450 to 03fda45b has its CatchHandler @ 03eda604 */
      UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
                    /* try { // try from 03eda460 to 03fda467 has its CatchHandler @ 03eda600 */
      (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      lVar1 = param_1[6];
      if (lVar1 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

