/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$TryGetCachedSeed
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetCachedSeed (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, System_String_o** seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$TryGetCachedSeed
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetCachedSeed
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, System_String_o** seed, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetCachedSeed_1e8e3b4
          (long param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_057c9ca0;
  if ((bRam0000000005c28119 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c28119 = 1;
  }
  *param_3 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  FUN_012d0d74(param_3);
  if ((param_2 % 10 != 9) && (param_2 % 10 != 4)) {
    return 0;
  }
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x1d) * 0x10 + 0x138);
          goto LAB_01f8e4a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,0x1d);
LAB_01f8e4a8:
    lVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar4 == 0) {
      return 0;
    }
    uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8e524
                      (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                       *(undefined4 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28));
    *param_3 = uVar3;
    FUN_012d0d74(param_3,uVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),*param_3);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01f8e520;
        uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInResources_1e8bc08
                          (*(long *)(param_1 + 0x20),*param_3);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
LAB_01f8e520:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

