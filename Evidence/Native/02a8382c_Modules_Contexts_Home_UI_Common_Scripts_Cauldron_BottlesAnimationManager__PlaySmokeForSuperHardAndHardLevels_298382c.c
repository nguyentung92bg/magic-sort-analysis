/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottlesAnimationManager$$PlaySmokeForSuperHardAndHardLevels
void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__PlaySmokeForSuperHardAndHardLevels (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottlesAnimationManager$$PlaySmokeForSuperHardAndHardLevels
   void 
   Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__PlaySmokeForSuperHardAndHardLevels
   (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__PlaySmokeForSuperHardAndHardLevels_298382c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000005c2d778 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c2d778 = 1;
  }
  puVar2 = PTR_DAT_057ec790;
  puVar1 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x48) != 0) {
    UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(param_1 + 0x48),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_058164b8;
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                (lVar3,0x13,*(undefined8 *)PTR_DAT_057871c8);
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057916a0 + 0x20) + 0xc0) +
                                0x20) + 8))(*(long *)(lVar3 + 0x10),10);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

