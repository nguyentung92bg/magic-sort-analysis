/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSpriteSelectionFrame$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame_o* __this, Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo_o* frameInfo, bool isLocked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSpriteSelectionFrame$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame_o* __this,
   Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo_o* frameInfo, bool isLocked, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__Initialize_2989f80
               (long param_1,long param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x40) = param_2;
  FUN_012d0d74((long *)(param_1 + 0x40));
  *(byte *)(param_1 + 0x48) = param_3 & 1;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameView__Initialize_2981e10
              (*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x10));
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,param_3 & 1,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0);
        uVar1 = Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo__get_IsTimeBased_1379f10
                          (param_2,0);
        if (lVar2 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,uVar1 & 1,0);
          Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__SetFrameActive_298a720
                    (param_1,0);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

