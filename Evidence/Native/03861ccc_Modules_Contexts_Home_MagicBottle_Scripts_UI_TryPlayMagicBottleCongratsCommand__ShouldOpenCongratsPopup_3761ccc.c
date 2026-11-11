/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.TryPlayMagicBottleCongratsCommand$$ShouldOpenCongratsPopup
bool Modules_Contexts_Home_MagicBottle_Scripts_UI_TryPlayMagicBottleCongratsCommand__ShouldOpenCongratsPopup (Modules_Contexts_Home_MagicBottle_Scripts_UI_TryPlayMagicBottleCongratsCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.TryPlayMagicBottleCongratsCommand$$ShouldOpenCongratsPopup
   bool 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_TryPlayMagicBottleCongratsCommand__ShouldOpenCongratsPopup
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_TryPlayMagicBottleCongratsCommand_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicBottle_Scripts_UI_TryPlayMagicBottleCongratsCommand__ShouldOpenCongratsPopup_3761ccc
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x48) != '\0') {
      return false;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      uVar2 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358();
      if ((uVar2 & 1) == 0) {
        return false;
      }
      if ((*(long *)(lVar3 + 0x18) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x18) + 0x20), lVar4 != 0)) {
        iVar1 = *(int *)(lVar4 + 0x10);
        lVar3 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                          (lVar3);
        if (lVar3 != 0) {
          return *(int *)(lVar3 + 0x18) <= iVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

