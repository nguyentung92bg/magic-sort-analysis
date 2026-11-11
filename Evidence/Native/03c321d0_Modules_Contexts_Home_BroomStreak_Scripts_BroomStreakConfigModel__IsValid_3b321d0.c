/* IL2CPP: Modules.Contexts.Home.BroomStreak.Scripts.BroomStreakConfigModel$$IsValid
bool Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakConfigModel__IsValid (Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.BroomStreak.Scripts.BroomStreakConfigModel$$IsValid
   bool Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakConfigModel__IsValid
   (Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakConfigModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakConfigModel__IsValid_3b321d0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_05808578;
  if ((bRam0000000005c3637f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808578);
    bRam0000000005c3637f = 1;
  }
  uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  return ~uVar2 & 1;
}

