/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.ChampionsLeagueConfigModel$$IsValid
bool Modules_Contexts_Home_ChampionsLeague_ChampionsLeagueConfigModel__IsValid (Modules_Contexts_Home_ChampionsLeague_ChampionsLeagueConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.ChampionsLeagueConfigModel$$IsValid
   bool Modules_Contexts_Home_ChampionsLeague_ChampionsLeagueConfigModel__IsValid
   (Modules_Contexts_Home_ChampionsLeague_ChampionsLeagueConfigModel_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_ChampionsLeague_ChampionsLeagueConfigModel__IsValid_3a712ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000005c35a76 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cd938);
    FUN_012d0dc8(PTR_DAT_0578daa0);
    FUN_012d0dc8(PTR_DAT_05788548);
    FUN_012d0dc8(PTR_DAT_057878b8);
    FUN_012d0dc8(PTR_DAT_0576fc10);
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c35a76 = 1;
  }
  puVar4 = PTR_DAT_057cd938;
  puVar3 = PTR_DAT_0578daa0;
  puVar2 = PTR_DAT_05788548;
  puVar1 = PTR_DAT_05758928;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator_3976ed0
            (&uStack_98,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057cd938);
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  while (uVar5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext_3922430
                           (&uStack_70,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
    uVar5 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (uStack_58,*(undefined8 *)puVar1);
    if ((uVar5 & 1) != 0) goto LAB_03b713f4;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_392254c
            (&uStack_70,*(undefined8 *)puVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator_3976ed0
            (&uStack_98,*(long *)(param_1 + 0x20),*(undefined8 *)puVar4);
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  do {
    uVar5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext_3922430
                      (&uStack_70,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_392254c
                (&uStack_70,*(undefined8 *)puVar3);
      return 1;
    }
    uVar5 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (uStack_58,*(undefined8 *)puVar1);
  } while ((uVar5 & 1) == 0);
LAB_03b713f4:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_392254c
            (&uStack_70,*(undefined8 *)puVar3);
  return 0;
}

