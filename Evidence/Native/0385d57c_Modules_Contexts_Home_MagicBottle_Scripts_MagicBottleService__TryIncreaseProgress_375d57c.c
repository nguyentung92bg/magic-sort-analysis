/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$TryIncreaseProgress
bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TryIncreaseProgress (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$TryIncreaseProgress
   bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TryIncreaseProgress
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TryIncreaseProgress_375d57c
          (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsActive_375d53c();
  if (((uVar1 & 1) == 0) ||
     (uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle_375d4e4
                        (param_1), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0)) {
LAB_0385d61c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    *(undefined2 *)(lVar3 + 0x18) = 0x101;
    uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle_375d4e4
                      (param_1);
    if ((uVar1 & 1) != 0) {
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_0385d61c;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottleClaim_1465e04
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

