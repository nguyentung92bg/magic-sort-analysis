/* IL2CPP: Modules.Infrastructure.Social.ReferralConfigModel$$IsValid
bool Modules_Infrastructure_Social_ReferralConfigModel__IsValid (Modules_Infrastructure_Social_ReferralConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Social.ReferralConfigModel$$IsValid
   bool Modules_Infrastructure_Social_ReferralConfigModel__IsValid
   (Modules_Infrastructure_Social_ReferralConfigModel_o* __this, const MethodInfo* method); */

uint Modules_Infrastructure_Social_ReferralConfigModel__IsValid_3d19e98(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_05758928;
  if ((bRam0000000005c3730a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c3730a = 1;
  }
  uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar1);
  return ~uVar2 & 1;
}

