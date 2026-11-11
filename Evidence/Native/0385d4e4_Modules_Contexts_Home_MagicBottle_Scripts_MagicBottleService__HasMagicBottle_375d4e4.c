/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$HasMagicBottle
bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$HasMagicBottle
   bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle_375d4e4
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358();
  if ((uVar2 & 1) == 0) {
    return false;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x10);
    lVar3 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                      (param_1);
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) <= iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

