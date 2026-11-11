/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardConfigModelV2$$IsValid
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardConfigModelV2__IsValid (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardConfigModelV2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardConfigModelV2$$IsValid
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardConfigModelV2__IsValid
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardConfigModelV2_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_DailyReward_Scripts_DailyRewardConfigModelV2__IsValid_38cfc7c
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_057acfc0;
  if ((bRam0000000005c34b9e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057acfc0);
    bRam0000000005c34b9e = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cfbdc with catch @ 039cfcfc
                       try { // try from 039cfcfc to 03acfd1f has its CatchHandler @ 039cfba4 */
  if (((((uVar3 & 1) == 0) &&
       (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                          (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1), (uVar3 & 1) == 0)
       ) && (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                               (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar1),
            (uVar3 & 1) == 0)) &&
     ((uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar1), (uVar3 & 1) == 0
      && (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)puVar1),
         (uVar3 & 1) == 0)))) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar1);
                    /* try { // try from 039cfd20 to 03acfd37 has its CatchHandler @ 039cfe1c */
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cfbf8 with catch @ 039cfd08
                        */
  return uVar2;
}

