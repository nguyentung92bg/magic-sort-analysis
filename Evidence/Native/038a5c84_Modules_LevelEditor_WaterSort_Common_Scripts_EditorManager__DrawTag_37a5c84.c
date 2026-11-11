/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawTag
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawTag (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038a7ec4) */
/* WARNING: Removing unreachable block (ram,0x038a7ed0) */
/* WARNING: Removing unreachable block (ram,0x038a7ed8) */
/* WARNING: Removing unreachable block (ram,0x038a7ee0) */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawTag
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawTag
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawTag_37a5c84
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000005c33e15 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057afe68);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05814b68);
    FUN_012d0dc8(PTR_DAT_057f81b8);
    bRam0000000005c33e15 = 1;
  }
  puVar1 = PTR_DAT_057afe68;
  if (param_4 == 0) {
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar2 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x10) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05814b68 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar2 + 0x10),*(undefined8 *)PTR_DAT_057f81b8);
      return;
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x68) = 1;
    if (*(long *)(param_3 + 0x48) != 0) {
      uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                        (param_1,param_2,*(long *)(param_3 + 0x48),&stack0xffffffffffffffe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

