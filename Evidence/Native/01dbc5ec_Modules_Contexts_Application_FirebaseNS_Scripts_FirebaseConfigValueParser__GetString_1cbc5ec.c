/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetString
System_String_o* Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetString (System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetString
   System_String_o*
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetString
   (System_String_o* key, System_String_o* defaultValue, const MethodInfo* method); */

long Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetString_1cbc5ec
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_0580de80;
  if ((bRam0000000005c27771 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0580de80);
    bRam0000000005c27771 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar2 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_30281d0(0);
  puVar1 = PTR_DAT_0576c4c8;
  if (lVar2 != 0) {
    auStack_40 = Firebase_RemoteConfig_FirebaseRemoteConfig__GetValue_302945c(lVar2,param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar2 = Firebase_RemoteConfig_ConfigValue__get_StringValue_3026da0(auStack_40,0);
    if (lVar2 != 0) {
      param_2 = lVar2;
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

