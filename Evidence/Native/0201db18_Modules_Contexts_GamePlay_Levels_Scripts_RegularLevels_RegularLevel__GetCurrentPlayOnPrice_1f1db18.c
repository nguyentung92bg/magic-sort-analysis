/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$GetCurrentPlayOnPrice
int32_t Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetCurrentPlayOnPrice (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$GetCurrentPlayOnPrice
   int32_t
   Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetCurrentPlayOnPrice
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetCurrentPlayOnPrice_1f1db18
          (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_24;
  
  puVar5 = PTR_DAT_0576aae0;
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29b34 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7c60,0);
    FUN_012d0dc8(PTR_DAT_057bc240);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057f57f0);
    FUN_012d0dc8(PTR_DAT_05796590);
    bRam0000000005c29b34 = 1;
  }
  uStack_24 = 0;
  lVar9 = **(long **)(*(long *)puVar5 + 0xb8);
  if (((((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) &&
       (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar9,*(undefined8 *)PTR_DAT_057a7c60), lVar9 != 0)) &&
      ((lVar9 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                          (lVar9,0), lVar9 != 0 && (*(long *)(lVar7 + 0x10) != 0)))) &&
     (lVar9 = *(long *)(lVar9 + 0x60), lVar9 != 0)) {
    iVar2 = *(int *)(*(long *)(lVar7 + 0x10) + 0xd4);
    iVar4 = *(int *)(lVar9 + 0x18) + -1;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar4;
    }
    lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar9,iVar1,*(undefined8 *)PTR_DAT_05796590);
    if (((lVar9 != 0) && (lVar10 = **(long **)(*(long *)puVar5 + 0xb8), lVar10 != 0)) &&
       (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
      uVar3 = *(undefined4 *)(lVar9 + 0x14);
      lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar10,*(undefined8 *)PTR_DAT_057bc240);
      if ((*(long *)(lVar7 + 0x10) != 0) &&
         (uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelDifficulty_1f0f53c
                            (*(long *)(lVar7 + 0x10),0), lVar9 != 0)) {
        uVar8 = Modules_Contexts_Home_Multiplier_MultiplierService__TryGetPlayOnPrice_315bcf8
                          (lVar9,uVar6,iVar1,&uStack_24,0);
        if ((uVar8 & 1) == 0) {
          uStack_24 = uVar3;
        }
        return uStack_24;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

