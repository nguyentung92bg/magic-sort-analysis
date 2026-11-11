/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$GetLevelDifficultySetByBot
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetLevelDifficultySetByBot (System_String_o* levelId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$GetLevelDifficultySetByBot
   System_String_o*
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetLevelDifficultySetByBot
   (System_String_o* levelId, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetLevelDifficultySetByBot_1f1bb20
          (long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = System_String__Split_1ed3050(param_1,0x5f,0,0), lVar1 != 0)) {
    if (1 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined8 *)(lVar1 + 0x28);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

