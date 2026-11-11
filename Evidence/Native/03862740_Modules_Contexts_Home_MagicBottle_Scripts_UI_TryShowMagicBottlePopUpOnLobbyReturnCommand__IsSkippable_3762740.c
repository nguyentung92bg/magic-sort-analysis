/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.TryShowMagicBottlePopUpOnLobbyReturnCommand$$IsSkippable
bool Modules_Contexts_Home_MagicBottle_Scripts_UI_TryShowMagicBottlePopUpOnLobbyReturnCommand__IsSkippable (Modules_Contexts_Home_MagicBottle_Scripts_UI_TryShowMagicBottlePopUpOnLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.TryShowMagicBottlePopUpOnLobbyReturnCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_TryShowMagicBottlePopUpOnLobbyReturnCommand__IsSkippable
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_TryShowMagicBottlePopUpOnLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_MagicBottle_Scripts_UI_TryShowMagicBottlePopUpOnLobbyReturnCommand__IsSkippable_3762740
               (long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__ShouldAutoOpenPopUp_375d78c
                      ();
    return ~uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

