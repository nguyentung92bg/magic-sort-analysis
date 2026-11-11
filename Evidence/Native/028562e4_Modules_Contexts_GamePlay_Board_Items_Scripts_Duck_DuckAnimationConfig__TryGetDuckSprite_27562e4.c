/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckAnimationConfig$$TryGetDuckSprite
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckAnimationConfig__TryGetDuckSprite (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckAnimationConfig_o* __this, int32_t duckType, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckAnimationConfig$$TryGetDuckSprite
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckAnimationConfig__TryGetDuckSprite
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckAnimationConfig_o* __this, int32_t
   duckType, UnityEngine_Sprite_o** sprite, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckAnimationConfig__TryGetDuckSprite_27562e4
          (long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *param_3 = 0;
  FUN_012d0d74(param_3,0);
  lVar1 = *(long *)(param_1 + 0x140);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    iVar3 = 0;
    puVar2 = (undefined8 *)(lVar1 + 0x28);
    do {
      if (*(int *)(puVar2 + -1) == param_2) {
        *param_3 = *puVar2;
        FUN_012d0d74(param_3);
        return 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar3 < *(int *)(lVar1 + 0x18));
  }
  return 0;
}

