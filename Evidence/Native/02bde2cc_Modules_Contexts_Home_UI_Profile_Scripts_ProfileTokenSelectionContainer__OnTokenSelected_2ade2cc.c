/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$OnTokenSelected
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__OnTokenSelected (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSprite_o* tokenSprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$OnTokenSelected
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__OnTokenSelected
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this,
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSprite_o* tokenSprite, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__OnTokenSelected_2ade2cc
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2eb01 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cb550);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    bRam0000000005c2eb01 = 1;
  }
  puVar3 = PTR_DAT_057f0e20;
  puVar2 = PTR_DAT_057cb550;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenEquipPopUpArguments___ctor_2adcc08
                (lVar5,param_2,param_1), lVar4 != 0)) {
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

