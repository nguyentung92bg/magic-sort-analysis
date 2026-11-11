/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckView$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckView$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView__Spawn_3ddd940
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
    if ((param_1[4] != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
                    /* WARNING: Could not recover jumptable at 0x03edd9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

