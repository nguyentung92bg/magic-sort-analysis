/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.JourneyConfigModel$$IsValid
bool Modules_Contexts_Home_Journey_Scripts_JourneyConfigModel__IsValid (Modules_Contexts_Home_Journey_Scripts_JourneyConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.JourneyConfigModel$$IsValid
   bool Modules_Contexts_Home_Journey_Scripts_JourneyConfigModel__IsValid
   (Modules_Contexts_Home_Journey_Scripts_JourneyConfigModel_o* __this, const MethodInfo* method);
    */

uint Modules_Contexts_Home_Journey_Scripts_JourneyConfigModel__IsValid_3762c4c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_0580ddb0;
  if ((bRam0000000005c33be0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c0318);
    FUN_012d0dc8(PTR_DAT_0580ddb0);
    bRam0000000005c33be0 = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_057c0318);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

