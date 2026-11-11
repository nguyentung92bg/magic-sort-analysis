/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$TryResetProgress
bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TryResetProgress (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$TryResetProgress
   bool Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TryResetProgress
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TryResetProgress_375d454(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358();
  if (((uVar1 & 1) == 0) ||
     (uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle_375d4e4
                        (param_1), (uVar1 & 1) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x10) = 0;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottleLost_14660ec
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

