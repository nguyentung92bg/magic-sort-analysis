/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionFrame$$SetFrameActive
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__SetFrameActive (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionFrame$$SetFrameActive
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__SetFrameActive
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame_o* __this, bool
   isActive, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__SetFrameActive_298b6a0
               (long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

