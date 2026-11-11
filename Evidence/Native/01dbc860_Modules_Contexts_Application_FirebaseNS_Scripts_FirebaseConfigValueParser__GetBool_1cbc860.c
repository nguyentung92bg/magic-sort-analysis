/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetBool
bool Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetBool (System_String_o* key, bool defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetBool
   bool Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetBool
   (System_String_o* key, bool defaultValue, const MethodInfo* method); */

byte Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetBool_1cbc860
               (undefined8 param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_40 [16];
  char acStack_24 [4];
  
  puVar2 = PTR_DAT_0580de80;
  if ((bRam0000000005c27774 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0580de80);
    bRam0000000005c27774 = 1;
  }
  acStack_24[0] = '\0';
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_30281d0(0);
  puVar3 = PTR_DAT_057b4910;
  puVar2 = PTR_DAT_0576c4c8;
  if (lVar4 != 0) {
    auStack_40 = Firebase_RemoteConfig_FirebaseRemoteConfig__GetValue_302945c(lVar4,param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = Firebase_RemoteConfig_ConfigValue__get_StringValue_3026da0(auStack_40,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    uVar6 = System_Boolean__TryParse_21279b4(uVar5,acStack_24,0);
    bVar1 = acStack_24[0] != '\0';
    if ((uVar6 & 1) == 0) {
      bVar1 = param_2;
    }
    return bVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

