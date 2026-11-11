/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$IsLobbyButtonProgressIncreased
bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsLobbyButtonProgressIncreased (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$IsLobbyButtonProgressIncreased
   bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsLobbyButtonProgressIncreased
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsLobbyButtonProgressIncreased_375d6bc
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetLastSeenLobbyButtonProgress_375d6f0
                    ();
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar2 != 0)) {
    return iVar1 < *(int *)(lVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

