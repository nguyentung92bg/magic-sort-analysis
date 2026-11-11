/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$Get<object>
Il2CppObject* Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__Get_object_ (System_String_o* key, Il2CppObject* defaultValue, const MethodInfo_2381F18* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$Get<object>
   Il2CppObject*
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__Get_object_
   (System_String_o* key, Il2CppObject* defaultValue, const MethodInfo_2381F18* method); */

long Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__Get_object__2381f18
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_0580de80;
  if ((bRam0000000005c2aa7c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_0580de80);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2aa7c = 1;
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
    puVar1 = PTR_DAT_0579fa30;
    if (lVar2 != 0) {
      uVar4 = **(undefined8 **)(param_3 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0578a3a8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = System_Type__GetTypeFromHandle_2690398(uVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      lVar2 = System_Convert__ChangeType_212d39c(lVar2,uVar4,0);
      lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_0131942c(lVar3);
      }
      if (lVar2 == 0) {
        param_2 = 0;
      }
      else {
        param_2 = thunk_FUN_01320d5c(lVar2,lVar3);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar2,lVar3);
        }
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

