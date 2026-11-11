/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetInt
int32_t Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetInt (System_String_o* key, int32_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetInt
   int32_t Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetInt
   (System_String_o* key, int32_t defaultValue, const MethodInfo* method); */

undefined4
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetInt_1cbc6b0
          (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [16];
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0580de80;
  if ((bRam0000000005c27772 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0580de80);
    bRam0000000005c27772 = 1;
  }
  uStack_24 = 0;
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
    uVar3 = Firebase_RemoteConfig_ConfigValue__get_StringValue_3026da0(auStack_40,0);
    uVar4 = System_Int32__TryParse_26c9e7c(uVar3,&uStack_24,0);
    if ((uVar4 & 1) == 0) {
      uStack_24 = param_2;
    }
    return uStack_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

