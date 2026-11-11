/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneConfigModel$$IsValid
bool Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel__IsValid (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneConfigModel$$IsValid
   bool Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel__IsValid
   (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel__IsValid_2da0e00(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_057a5e48;
                    /* try { // try from 02ea0e14 to 02fa0e1b has its CatchHandler @ 02ea0f28 */
  if ((bRam0000000005c2fa6b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5e48);
    bRam0000000005c2fa6b = 1;
  }
  uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1);
  return ~uVar2 & 1;
}

