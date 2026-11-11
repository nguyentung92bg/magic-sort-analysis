/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$Awake
void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__Awake (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$Awake
   void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__Awake
   (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__Awake_1e9d2b0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if (*(long *)(param_4 + 0x28) != 0) {
      UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_4 + 0x28),1,1,0);
      if (*(long *)(param_4 + 0x38) != 0) {
        UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_4 + 0x38),1,1,0);
        if (*(long *)(param_4 + 0x48) != 0) {
          UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_4 + 0x48),1,1,0);
          if ((*(long *)(param_4 + 0x30) != 0) &&
             (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x30),0),
             lVar1 != 0)) {
            uVar2 = UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
            *(undefined4 *)(param_4 + 0x50) = uVar2;
            *(undefined4 *)(param_4 + 0x54) = param_2;
            *(undefined4 *)(param_4 + 0x58) = param_3;
            if ((*(long *)(param_4 + 0x30) != 0) &&
               (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x30),0),
               lVar1 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
              *(undefined1 *)(param_4 + 0x5c) = 0;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

