/* IL2CPP: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.TreasureDrillConfigModel$$IsValid
bool Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillConfigModel__IsValid (Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.TreasureDrillConfigModel$$IsValid
   bool Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillConfigModel__IsValid
   (Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillConfigModel_o* __this,
   const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillConfigModel__IsValid_3300a48
                (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000005c31e47 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761150);
    FUN_012d0dc8(PTR_DAT_0577fb48);
    FUN_012d0dc8(PTR_DAT_057f29f0);
    FUN_012d0dc8(PTR_DAT_057ba5e0);
    FUN_012d0dc8(PTR_DAT_057aee18);
    FUN_012d0dc8(PTR_DAT_057f5ed0);
    bRam0000000005c31e47 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar3 = System_Collections_Generic_Dictionary_object__object___get_Count_3ecfef4
                        (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_0577fb48),
     puVar2 = PTR_DAT_057f29f0, puVar1 = PTR_DAT_057ba5e0, (int)uVar3 != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
              (&uStack_50,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_05761150);
    do {
      uVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                        (&uStack_50,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        iVar4 = 7;
        goto LAB_03400b2c;
      }
    } while (lStack_38 != 0);
    iVar4 = 6;
LAB_03400b2c:
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
              (&uStack_50,*(undefined8 *)puVar2);
    uVar3 = (ulong)(iVar4 != 6);
  }
  return uVar3;
}

