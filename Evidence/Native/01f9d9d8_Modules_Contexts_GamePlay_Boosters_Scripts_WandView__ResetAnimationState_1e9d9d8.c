/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$ResetAnimationState
void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__ResetAnimationState (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$ResetAnimationState
   void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__ResetAnimationState
   (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__ResetAnimationState_1e9d9d8(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_1 + 0x30),1,1,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_1 + 0x48),1,1,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(param_1 + 0x38),0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
           lVar1 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x30),0),
             lVar1 != 0)) {
            UnityEngine_Transform__set_localPosition_4092ce0
                      (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),lVar1,0);
            lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            if (lVar1 != 0) {
              puVar2 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
              UnityEngine_Transform__set_position_4092ba8(*puVar2,puVar2[1],puVar2[2],lVar1,0);
              if (*(long *)(param_1 + 0x28) != 0) {
                UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(param_1 + 0x28),0);
                lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
                if (lVar1 != 0) {
                  if (pcRam0000000005c3a388 == (code *)0x0) {
                    pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                  }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c3a388)(lVar1,1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

