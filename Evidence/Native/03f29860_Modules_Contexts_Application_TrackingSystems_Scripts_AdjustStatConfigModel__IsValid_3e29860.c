/* IL2CPP: Modules.Contexts.Application.TrackingSystems.Scripts.AdjustStatConfigModel$$IsValid
bool Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel__IsValid (Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.TrackingSystems.Scripts.AdjustStatConfigModel$$IsValid
   bool Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel__IsValid
   (Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel__IsValid_3e29860
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_057f28f0;
  if ((bRam0000000005c38174 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781c08);
    FUN_012d0dc8(PTR_DAT_057f28f0);
    bRam0000000005c38174 = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05781c08);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

