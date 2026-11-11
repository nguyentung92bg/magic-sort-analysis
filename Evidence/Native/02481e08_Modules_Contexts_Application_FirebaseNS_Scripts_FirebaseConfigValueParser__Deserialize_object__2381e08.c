/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$Deserialize<object>
Il2CppObject* Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__Deserialize_object_ (System_String_o* key, Il2CppObject* defaultValue, const MethodInfo_2381E08* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$Deserialize<object>
   Il2CppObject*
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__Deserialize_object_
   (System_String_o* key, Il2CppObject* defaultValue, const MethodInfo_2381E08* method); */

undefined8
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__Deserialize_object__2381e08
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_0580de80;
  if ((bRam0000000005c2aa7b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0580de80);
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c2aa7b = 1;
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
    uVar3 = Firebase_RemoteConfig_ConfigValue__get_StringValue_3026da0(auStack_40,0);
    uVar4 = System_String__IsNullOrEmpty_1ed04ac(uVar3,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      param_2 = (**(code **)(**(long **)(param_3 + 0x38) + 8))(uVar3);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

