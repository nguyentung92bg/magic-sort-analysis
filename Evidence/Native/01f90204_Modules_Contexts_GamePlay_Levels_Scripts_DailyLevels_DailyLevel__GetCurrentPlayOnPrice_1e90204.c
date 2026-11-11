/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$GetCurrentPlayOnPrice
int32_t Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__GetCurrentPlayOnPrice (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$GetCurrentPlayOnPrice
   int32_t Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__GetCurrentPlayOnPrice
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__GetCurrentPlayOnPrice_1e90204
          (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_0576aae0;
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29b33 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7c60,0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057f57f0);
    FUN_012d0dc8(PTR_DAT_05796590);
    bRam0000000005c29b33 = 1;
  }
  if ((((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar6 != 0)) &&
      (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar6,*(undefined8 *)PTR_DAT_057a7c60), lVar6 != 0)) &&
     (((lVar6 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                          (lVar6,0), lVar6 != 0 && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) &&
      (lVar6 = *(long *)(lVar6 + 0x60), lVar6 != 0)))) {
    iVar2 = *(int *)(lVar5 + 0xd4);
    iVar3 = *(int *)(lVar6 + 0x18) + -1;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar3;
    }
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar6,iVar1,*(undefined8 *)PTR_DAT_05796590);
    if (lVar5 != 0) {
      return *(undefined4 *)(lVar5 + 0x14);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

