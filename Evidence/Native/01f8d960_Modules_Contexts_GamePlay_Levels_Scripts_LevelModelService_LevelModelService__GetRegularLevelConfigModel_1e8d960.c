/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetRegularLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetRegularLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel_1e8d960
          (long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),param_2);
    uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8da80
                      (param_1,uVar4);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),uVar5);
      if ((uVar6 & 1) != 0) {
        return uVar4;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInResources_1e8bc08
                          (*(long *)(param_1 + 0x20),uVar5);
        if ((uVar6 & 1) != 0) {
          return uVar4;
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar7 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
                            (*(long *)(param_1 + 0x28),0);
          if ((bRam0000000005c2811c & 1) == 0) {
            param_1 = FUN_012d0dc8(PTR_DAT_0578d288);
            bRam0000000005c2811c = 1;
          }
          if (((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) ||
             (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(param_1);
          }
          if (*(int *)(lVar8 + 0x18) < param_2) {
            if ((bRam0000000005c2811e & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0578d288);
              param_1 = FUN_012d0dc8(PTR_DAT_057781c8);
              bRam0000000005c2811e = 1;
            }
            if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) &&
               ((*(long *)(lVar7 + 0x18) != 0 &&
                (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar8 != 0)))) {
              lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + 0x10);
              param_1 = 0;
              if (lVar7 != 0) {
                iVar1 = *(int *)(lVar7 + 0x18);
                param_2 = ~*(uint *)(lVar8 + 0x18) + param_2;
                uVar4 = *(undefined8 *)PTR_DAT_057781c8;
                iVar3 = 0;
                if (iVar1 != 0) {
                  iVar3 = param_2 / iVar1;
                }
                uVar2 = param_2 - iVar3 * iVar1;
System_Collections_Generic_List_object___get_Item_21fc76c:
                if (*(uint *)(lVar7 + 0x18) <= uVar2) {
                  System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4(0,uVar2,uVar4);
                }
                lVar7 = *(long *)(lVar7 + 0x10);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (*(uint *)(lVar7 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef8();
                }
                return *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(param_1);
          }
          if ((bRam0000000005c2811d & 1) == 0) {
            param_1 = FUN_012d0dc8(PTR_DAT_057781c8);
            bRam0000000005c2811d = 1;
          }
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
            param_1 = 0;
            if (lVar7 != 0) {
              uVar2 = param_2 - 1;
              uVar4 = *(undefined8 *)PTR_DAT_057781c8;
              goto System_Collections_Generic_List_object___get_Item_21fc76c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0(param_1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

