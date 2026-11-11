/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetEditorLevelAndLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetEditorLevelAndLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetEditorLevelAndLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetEditorLevelAndLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetEditorLevelAndLevelConfigModel_1e8d63c
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_058007e8;
  if ((bRam0000000005c28113 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_057f8ce0);
    bRam0000000005c28113 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c2819d == '\0') {
    FUN_012d0dc8(PTR_DAT_058007e8);
    cRam0000000005c2819d = '\x01';
  }
  puVar1 = PTR_DAT_057f8ce0;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar2;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel___ctor_1f1bc6c
              (lVar3,0);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x28),uVar4);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x18),0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

