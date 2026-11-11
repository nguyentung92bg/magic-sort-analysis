/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSpriteSelectionFrame$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame_o* __this, Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSprite_o* profileTokenSprite, bool isLocked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSpriteSelectionFrame$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame_o* __this,
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSprite_o* profileTokenSprite, bool isLocked,
   const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__Initialize_2ade584
               (long param_1,long param_2,byte param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(long *)(param_1 + 0x48) = param_2;
  FUN_012d0d74();
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x38);
    FUN_012d0d74((undefined8 *)(param_1 + 0x50));
    *(byte *)(param_1 + 0x58) = param_3 & 1;
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x10),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x18),0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
           lVar1 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar1,param_3 & 1,0);
          if ((param_3 & 1) == 0) {
            uVar5 = 0x3f800000;
            uVar4 = 0x3f800000;
            uVar3 = 0x3f800000;
            uVar2 = 0x3f800000;
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0x38);
            uVar3 = *(undefined4 *)(param_1 + 0x3c);
            uVar4 = *(undefined4 *)(param_1 + 0x40);
            uVar5 = *(undefined4 *)(param_1 + 0x44);
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            UnityEngine_SpriteRenderer__set_color_4095de0
                      (uVar2,uVar3,uVar4,uVar5,*(long *)(param_1 + 0x20),0);
            Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__SetFrameActive_2ade678
                      (param_1,0);
            lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
            if (lVar1 != 0) {
              if (pcRam0000000005c3a388 == (code *)0x0) {
                pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
              }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a388)(lVar1,1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

