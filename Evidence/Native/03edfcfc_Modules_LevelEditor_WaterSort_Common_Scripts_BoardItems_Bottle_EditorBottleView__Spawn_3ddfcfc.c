/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Spawn_3ddfcfc
               (long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c37e5f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c37e5f = 1;
  }
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  lVar3 = param_1[4];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if ((param_1[4] != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar3 != 0)) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

