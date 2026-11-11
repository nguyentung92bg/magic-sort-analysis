/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTextView$$SetLevelId
void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetLevelId (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView_o* __this, System_String_o* levelId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTextView$$SetLevelId
   void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetLevelId
   (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView_o* __this, System_String_o* levelId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetLevelId_160ce84
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0170cea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

