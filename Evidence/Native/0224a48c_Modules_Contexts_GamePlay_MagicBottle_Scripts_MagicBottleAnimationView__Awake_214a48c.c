/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$Awake
void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__Awake (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$Awake
   void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__Awake
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__Awake_214a48c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_5,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
    *(undefined4 *)(param_5 + 0x98) = uVar2;
    *(undefined4 *)(param_5 + 0x9c) = param_2;
    *(undefined4 *)(param_5 + 0xa0) = param_3;
    if (*(long *)(param_5 + 0x48) != 0) {
      uVar2 = UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_5 + 0x48),0);
      *(undefined4 *)(param_5 + 0x78) = uVar2;
      *(undefined4 *)(param_5 + 0x7c) = param_2;
      *(undefined4 *)(param_5 + 0x80) = param_3;
      *(undefined4 *)(param_5 + 0x84) = param_4;
      if (*(long *)(param_5 + 0x50) != 0) {
        uVar2 = UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_5 + 0x50),0);
        *(undefined4 *)(param_5 + 0x88) = uVar2;
        *(undefined4 *)(param_5 + 0x8c) = param_2;
        *(undefined4 *)(param_5 + 0x90) = param_3;
        *(undefined4 *)(param_5 + 0x94) = param_4;
        if (*(long *)(param_5 + 0x28) != 0) {
          uVar2 = UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_5 + 0x28),0);
          *(undefined4 *)(param_5 + 0x68) = uVar2;
          *(undefined4 *)(param_5 + 0x6c) = param_2;
          *(undefined4 *)(param_5 + 0x70) = param_3;
          *(undefined4 *)(param_5 + 0x74) = param_4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

