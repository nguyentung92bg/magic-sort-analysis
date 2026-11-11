/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailyLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_DailyLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig_o* configModels, System_DateTime_o dateTime, bool shouldFallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailyLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_DailyLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig_o*
   configModels, System_DateTime_o dateTime, bool shouldFallback, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelConfigModel_1e8edd4
          (undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  uStack_28 = param_3;
  if ((bRam0000000005c28121 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057b0680);
    FUN_012d0dc8(PTR_DAT_0578a338);
    bRam0000000005c28121 = 1;
  }
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar2 = System_DateTime__get_Month_21004b8(&uStack_28,0);
  uStack_38 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  iVar3 = System_DateTime__get_Month_21004b8(&uStack_38,0);
  if (iVar2 == iVar3) {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_01f8ef50;
    iVar2 = *(int *)(*(long *)(param_2 + 0x20) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar3 = System_DateTime__get_Day_2100110(&uStack_28,0);
    if (iVar2 < iVar3) goto LAB_01f8eeb4;
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)(param_2 + 0x20);
  }
  else {
    if (param_2 == 0) goto LAB_01f8ef50;
LAB_01f8eeb4:
    if (*(long *)(param_2 + 0x28) == 0) goto LAB_01f8ef50;
    iVar2 = *(int *)(*(long *)(param_2 + 0x28) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar3 = System_DateTime__get_Day_2100110(&uStack_28,0);
    if (iVar2 < iVar3) {
      if ((param_4 & 1) == 0) {
        return 0;
      }
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 == 0) goto LAB_01f8ef50;
      iVar2 = 0;
      goto LAB_01f8ef20;
    }
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar2 = System_DateTime__get_Day_2100110(&uStack_28,0);
  if (lVar6 != 0) {
    iVar2 = iVar2 + -1;
LAB_01f8ef20:
    uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar6,iVar2,*(undefined8 *)PTR_DAT_0578a338);
    return uVar5;
  }
LAB_01f8ef50:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

