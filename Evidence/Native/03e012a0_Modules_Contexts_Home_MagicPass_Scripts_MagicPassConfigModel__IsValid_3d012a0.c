/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.MagicPassConfigModel$$IsValid
bool Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel__IsValid (Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.MagicPassConfigModel$$IsValid
   bool Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel__IsValid
   (Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_MagicPass_Scripts_MagicPassConfigModel__IsValid_3d012a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000005c371d7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761150);
    FUN_012d0dc8(PTR_DAT_057f29f0);
    FUN_012d0dc8(PTR_DAT_057ba5e0);
    FUN_012d0dc8(PTR_DAT_057aee18);
    FUN_012d0dc8(PTR_DAT_057f5ed0);
    FUN_012d0dc8(PTR_DAT_05769098);
    bRam0000000005c371d7 = 1;
  }
  puVar3 = PTR_DAT_057f29f0;
  puVar2 = PTR_DAT_057ba5e0;
  puVar1 = PTR_DAT_05769098;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar4 = 0;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_03e013a0;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
              (&uStack_60,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_05761150);
    do {
      uVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                        (&uStack_60,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                  (&uStack_60,*(undefined8 *)puVar3);
        uVar4 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                          (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar1);
        uVar4 = uVar4 ^ 1;
        goto LAB_03e013a0;
      }
    } while (lStack_48 != 0);
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
              (&uStack_60,*(undefined8 *)puVar3);
  }
  uVar4 = 0;
LAB_03e013a0:
  return uVar4 & 1;
}

