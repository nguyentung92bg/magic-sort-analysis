/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$IsPointerOverUIGameObject
bool Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__IsPointerOverUIGameObject (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$IsPointerOverUIGameObject
   bool Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__IsPointerOverUIGameObject
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__IsPointerOverUIGameObject_37a5a88
          (void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0575ffd0;
  if ((bRam0000000005c33e0c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575ffd0);
    bRam0000000005c33e0c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = UnityEngine_EventSystems_EventSystem__get_current_27931ec(0);
  puVar1 = PTR_DAT_0576c200;
  if (lVar4 != 0) {
    if ((bRam0000000005c2c773 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200);
      bRam0000000005c2c773 = 1;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(lVar4 + 0x20);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02893e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar3 + 0x278))(plVar3,0xffffffff,*(undefined8 *)(*plVar3 + 0x280));
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

