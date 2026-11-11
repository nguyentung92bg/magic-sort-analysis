/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.EndlessPortalV2ConfigModel$$IsValid
bool Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel__IsValid (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.EndlessPortalV2ConfigModel$$IsValid
   bool Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel__IsValid
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel_o* __this,
   const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel__IsValid_3466d74
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_05807f58;
                    /* try { // try from 03566d7c to 03666d93 has its CatchHandler @ 03566e1c */
  if ((bRam0000000005c3267f & 1) == 0) {
                    /* try { // try from 03566d94 to 03666e0b has its CatchHandler @ 03566b30 */
    FUN_012d0dc8(PTR_DAT_05807f58);
    bRam0000000005c3267f = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

