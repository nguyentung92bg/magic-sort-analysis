/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyConfigModel$$IsValid
bool Modules_Contexts_Home_Daily_Scripts_DailyConfigModel__IsValid (Modules_Contexts_Home_Daily_Scripts_DailyConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyConfigModel$$IsValid
   bool Modules_Contexts_Home_Daily_Scripts_DailyConfigModel__IsValid
   (Modules_Contexts_Home_Daily_Scripts_DailyConfigModel_o* __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Daily_Scripts_DailyConfigModel__IsValid_4102f0c(long param_1)

{
  uint uVar1;
  
  if ((bRam0000000005c3ab77 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c3ab77 = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_05758928);
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}

