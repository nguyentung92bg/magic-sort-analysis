/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnColorIsChangedEvent
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnColorIsChangedEvent (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038a5444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnColorIsChangedEvent
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnColorIsChangedEvent
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnColorIsChangedEvent_37a4a20
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  FUN_012d0d74();
  if ((bRam0000000005c33e0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33e0b = 1;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
            (*(long *)(param_1 + 0x70),0);
  *(undefined4 *)(param_1 + 0x2c) = 4;
  *(undefined4 *)(param_1 + 0x44) = 2;
                    /* WARNING: Could not recover jumptable at 0x038a4ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_038a4adc + (ulong)_UNK_043b0c60 * 4))();
  return;
}

