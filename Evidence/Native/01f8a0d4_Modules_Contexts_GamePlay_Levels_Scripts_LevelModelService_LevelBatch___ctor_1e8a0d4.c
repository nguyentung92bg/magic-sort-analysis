/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatch$$.ctor
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch___ctor (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch_o* __this, int32_t fromLevel, int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatch$$.ctor
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch___ctor
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch_o* __this, int32_t
   fromLevel, int32_t toLevel, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch___ctor_1e8a0d4
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_05778c18;
  if ((bRam0000000005c280f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_05778c18);
    bRam0000000005c280f3 = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_05766950);
    *(long *)(param_1 + 0x20) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar2);
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

