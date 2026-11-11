/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.GameEconomyModel$$GetPriceByCurrency
int32_t Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__GetPriceByCurrency (Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.GameEconomyModel$$GetPriceByCurrency
   int32_t Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__GetPriceByCurrency
   (Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* __this, int32_t
   currencyType, const MethodInfo* method); */

undefined4
Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__GetPriceByCurrency_1cc4ab4
          (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c27797 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc240);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c27797 = 1;
  }
  uStack_24 = 0;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar2,*(undefined8 *)PTR_DAT_057bc240);
    if ((lVar2 == 0) ||
       ((uVar3 = Modules_Contexts_Home_Multiplier_MultiplierService__IsEligible_315cf08(lVar2,0),
        (uVar3 & 1) == 0 ||
        (uVar3 = Modules_Contexts_Home_Multiplier_MultiplierService__TryGetPriceByCurrency_315d0e8
                           (lVar2,param_2,&uStack_24,0), (uVar3 & 1) == 0)))) {
      uStack_24 = 100;
      if (param_2 < 6) {
        if (param_2 == 4) {
          uStack_24 = *(undefined4 *)(param_1 + 0x48);
        }
        else if (param_2 == 5) {
          uStack_24 = *(undefined4 *)(param_1 + 0x4c);
        }
      }
      else if (param_2 == 6) {
        uStack_24 = *(undefined4 *)(param_1 + 0x50);
      }
      else if (param_2 == 0x12) {
        uStack_24 = *(undefined4 *)(param_1 + 0x54);
      }
      else if (param_2 == 0x13) {
        uStack_24 = *(undefined4 *)(param_1 + 0x58);
      }
    }
    return uStack_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

