/* IL2CPP: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.WatchAndWinConfigModel$$IsValid
bool Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinConfigModel__IsValid (Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.WatchAndWinConfigModel$$IsValid
   bool Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinConfigModel__IsValid
   (Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinConfigModel_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinConfigModel__IsValid_3170444
               (long param_1)

{
  uint uVar1;
  
  if ((bRam0000000005c31599 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c31599 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_05758928);
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}

