/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.InLevelTextDisplayer$$ShowText
void Modules_Contexts_GamePlay_Tutorial_Scripts_InLevelTextDisplayer__ShowText (Modules_Contexts_GamePlay_Tutorial_Scripts_InLevelTextDisplayer_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.InLevelTextDisplayer$$ShowText
   void Modules_Contexts_GamePlay_Tutorial_Scripts_InLevelTextDisplayer__ShowText
   (Modules_Contexts_GamePlay_Tutorial_Scripts_InLevelTextDisplayer_o* __this, System_String_o*
   text, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Tutorial_Scripts_InLevelTextDisplayer__ShowText_160e400
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
    lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if (lVar2 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar2,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

