/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetDateTime
System_DateTime_o Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetDateTime (System_String_o* key, System_DateTime_o defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetDateTime
   System_DateTime_o
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetDateTime
   (System_String_o* key, System_DateTime_o defaultValue, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetDateTime_1cbcbf8
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_40 [16];
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580de80;
  if ((bRam0000000005c27778 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0580de80);
    bRam0000000005c27778 = 1;
  }
  uStack_28 = 0;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_30281d0(0);
  puVar2 = PTR_DAT_0580b9d0;
  puVar1 = PTR_DAT_0576c4c8;
  if (lVar3 != 0) {
    auStack_40 = Firebase_RemoteConfig_FirebaseRemoteConfig__GetValue_302945c(lVar3,param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Firebase_RemoteConfig_ConfigValue__get_StringValue_3026da0(auStack_40,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    uVar5 = System_DateTime__TryParse_210174c(uVar4,&uStack_28,0);
    if ((uVar5 & 1) == 0) {
      uStack_28 = param_2;
    }
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

