/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetByte
uint8_t Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetByte (System_String_o* key, uint8_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseConfigValueParser$$GetByte
   uint8_t Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetByte
   (System_String_o* key, uint8_t defaultValue, const MethodInfo* method); */

uint Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseConfigValueParser__GetByte_1cbcb20
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_40 [16];
  byte abStack_24 [4];
  
  puVar2 = PTR_DAT_0580de80;
  if ((bRam0000000005c27777 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c4c8);
    FUN_012d0dc8(PTR_DAT_0580de80);
    bRam0000000005c27777 = 1;
  }
  abStack_24[0] = 0;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_30281d0(0);
  puVar2 = PTR_DAT_0576c4c8;
  if (lVar3 != 0) {
    auStack_40 = Firebase_RemoteConfig_FirebaseRemoteConfig__GetValue_302945c(lVar3,param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Firebase_RemoteConfig_ConfigValue__get_StringValue_3026da0(auStack_40,0);
    uVar5 = System_Byte__TryParse_212958c(uVar4,abStack_24,0);
    uVar1 = (uint)abStack_24[0];
    if ((uVar5 & 1) == 0) {
      uVar1 = param_2;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

