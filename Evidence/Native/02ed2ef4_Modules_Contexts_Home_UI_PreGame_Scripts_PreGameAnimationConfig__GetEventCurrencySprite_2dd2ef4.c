/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.PreGameAnimationConfig$$GetEventCurrencySprite
UnityEngine_Sprite_o* Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__GetEventCurrencySprite (Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.PreGameAnimationConfig$$GetEventCurrencySprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__GetEventCurrencySprite
   (Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig_o* __this, int32_t currencyType,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__GetEventCurrencySprite_2dd2ef4
          (long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = param_2 - 1;
  if ((int)uVar1 < 0) {
    if (lVar2 == 0) goto LAB_02ed2f40;
  }
  else {
    if (lVar2 == 0) {
LAB_02ed2f40:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((int)uVar1 < (int)*(uint *)(lVar2 + 0x18)) {
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_02ed2f44;
      lVar3 = (long)(int)uVar1;
      goto LAB_02ed2f30;
    }
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_02ed2f44:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  lVar3 = 0;
LAB_02ed2f30:
  return *(undefined8 *)(lVar2 + lVar3 * 8 + 0x20);
}

