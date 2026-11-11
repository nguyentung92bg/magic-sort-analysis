/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.RemoteConfigHandler$$ApplyGrandSdkSettings
void Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler__ApplyGrandSdkSettings (Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.RemoteConfigHandler$$ApplyGrandSdkSettings
   void Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler__ApplyGrandSdkSettings
   (Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, const
   MethodInfo* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler__ApplyGrandSdkSettings_1cc3abc
               (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c27793 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9eb8);
    bRam0000000005c27793 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(long *)(lVar1 + 0x10) + 0x4c) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_057f9eb8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      GrandSDK_GrandSDK__ClearSettings_13a84a4(0);
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x210);
      if (lVar1 == 0) {
        if (*(int *)(*(long *)PTR_DAT_057f9eb8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        GrandSDK_GrandSDK__ClearSettings_13a84a4(0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_057f9eb8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        GrandSDK_GrandSDK__ApplySettings_13a844c(lVar1,0);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

