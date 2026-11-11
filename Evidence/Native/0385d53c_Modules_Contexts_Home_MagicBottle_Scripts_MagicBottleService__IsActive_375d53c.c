/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$IsActive
bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsActive (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$IsActive
   bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsActive
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsActive_375d53c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    bVar1 = *(char *)(lVar3 + 0x19) != '\0';
  }
  return bVar1;
}

