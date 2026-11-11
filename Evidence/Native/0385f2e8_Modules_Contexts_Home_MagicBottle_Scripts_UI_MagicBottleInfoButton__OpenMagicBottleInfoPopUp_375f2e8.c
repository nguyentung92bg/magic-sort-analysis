/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoButton$$OpenMagicBottleInfoPopUp
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoButton__OpenMagicBottleInfoPopUp (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoButton$$OpenMagicBottleInfoPopUp
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoButton__OpenMagicBottleInfoPopUp
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoButton__OpenMagicBottleInfoPopUp_375f2e8
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c33bb2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bfd98);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    bRam0000000005c33bb2 = 1;
  }
  puVar3 = PTR_DAT_057f0e20;
  puVar2 = PTR_DAT_057bfd98;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUpArguments___ctor_375f3ac
                (lVar5,0), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar4 + 0x10),lVar5);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

