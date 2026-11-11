/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottleAnimationController$$OnDisable
void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__OnDisable (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottleAnimationController$$OnDisable
   void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__OnDisable
   (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__OnDisable_2983348
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0), lVar1 != 0)
     ) {
    uStack_2c = *(undefined4 *)(param_1 + 0x34);
    uStack_28 = *(undefined4 *)(param_1 + 0x38);
    uStack_30 = *(undefined4 *)(param_1 + 0x30);
    if (pcRam0000000005c3a610 == (code *)0x0) {
      pcRam0000000005c3a610 = (code *)FUN_012d0d84(&UNK_043eeeca,0);
    }
    (*pcRam0000000005c3a610)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

