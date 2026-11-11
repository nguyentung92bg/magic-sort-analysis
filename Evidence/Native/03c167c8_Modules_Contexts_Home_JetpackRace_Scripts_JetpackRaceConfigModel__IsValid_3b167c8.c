/* IL2CPP: Modules.Contexts.Home.JetpackRace.Scripts.JetpackRaceConfigModel$$IsValid
bool Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceConfigModel__IsValid (Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.JetpackRace.Scripts.JetpackRaceConfigModel$$IsValid
   bool Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceConfigModel__IsValid
   (Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceConfigModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceConfigModel__IsValid_3b167c8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_05758928;
  if ((bRam0000000005c362ab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c362ab = 1;
  }
  uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  return ~uVar2 & 1;
}

