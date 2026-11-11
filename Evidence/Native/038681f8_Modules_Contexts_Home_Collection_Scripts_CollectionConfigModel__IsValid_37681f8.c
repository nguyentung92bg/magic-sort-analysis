/* IL2CPP: Modules.Contexts.Home.Collection.Scripts.CollectionConfigModel$$IsValid
bool Modules_Contexts_Home_Collection_Scripts_CollectionConfigModel__IsValid (Modules_Contexts_Home_Collection_Scripts_CollectionConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Collection.Scripts.CollectionConfigModel$$IsValid
   bool Modules_Contexts_Home_Collection_Scripts_CollectionConfigModel__IsValid
   (Modules_Contexts_Home_Collection_Scripts_CollectionConfigModel_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_Collection_Scripts_CollectionConfigModel__IsValid_37681f8(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_05761bf8;
  if ((bRam0000000005c33c05 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a6308);
    FUN_012d0dc8(PTR_DAT_05761bf8);
    FUN_012d0dc8(PTR_DAT_057d1e68);
    bRam0000000005c33c05 = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1);
  if (((((uVar3 & 1) == 0) &&
       (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                          (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_057a6308),
       (uVar3 & 1) == 0)) &&
      (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057d1e68),
      (uVar3 & 1) == 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    bVar2 = *(long *)(param_1 + 0x50) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

