/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Difficulty.DifficultySpriteConfig$$GetButtonSprite
UnityEngine_Sprite_o* Modules_Contexts_GamePlay_Levels_Scripts_Difficulty_DifficultySpriteConfig__GetButtonSprite (Modules_Contexts_GamePlay_Levels_Scripts_Difficulty_DifficultySpriteConfig_o* __this, int32_t difficulty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.Difficulty.DifficultySpriteConfig$$GetButtonSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_GamePlay_Levels_Scripts_Difficulty_DifficultySpriteConfig__GetButtonSprite
   (Modules_Contexts_GamePlay_Levels_Scripts_Difficulty_DifficultySpriteConfig_o* __this, int32_t
   difficulty, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_Difficulty_DifficultySpriteConfig__GetButtonSprite_1e8efe0
          (long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)(param_1 + 0x90);
  }
  else if (param_2 == 2) {
    puVar1 = (undefined8 *)(param_1 + 0xf8);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x30);
  }
  return *puVar1;
}

