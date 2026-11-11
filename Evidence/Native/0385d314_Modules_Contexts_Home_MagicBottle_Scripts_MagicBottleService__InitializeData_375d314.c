/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$InitializeData
void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__InitializeData (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$InitializeData
   void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__InitializeData
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__InitializeData_375d314
               (long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsActive_375d53c();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x20), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar3 + 0x10);
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
  }
  return;
}

