/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyView$$SetHeight
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__SetHeight (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView_o* __this, int32_t height, bool revealed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyView$$SetHeight
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__SetHeight
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView_o* __this, int32_t height, bool
   revealed, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__SetHeight_274c5ec
               (long param_1,int param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0), lVar2 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,0 < param_2,0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,1 < param_2,0);
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
         lVar2 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,2 < param_2,0);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
           lVar2 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,param_2 == 4,0);
          if (((param_2 < 2) && (param_2 == 1)) && ((param_3 & 1) != 0)) {
            puVar1 = (undefined8 *)(param_1 + 0x58);
          }
          else {
            puVar1 = (undefined8 *)(param_1 + 0x60);
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_1 + 0x28),*puVar1,0);
            if (((param_2 < 3) && (param_2 == 2)) && ((param_3 & 1) != 0)) {
              puVar1 = (undefined8 *)(param_1 + 0x58);
            }
            else {
              puVar1 = (undefined8 *)(param_1 + 0x60);
            }
            if (*(long *)(param_1 + 0x30) != 0) {
              UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_1 + 0x30),*puVar1,0);
              if (((param_2 < 4) && (param_2 == 3)) && ((param_3 & 1) != 0)) {
                puVar1 = (undefined8 *)(param_1 + 0x58);
              }
              else {
                puVar1 = (undefined8 *)(param_1 + 0x60);
              }
              if (*(long *)(param_1 + 0x38) != 0) {
                UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_1 + 0x38),*puVar1,0);
                if (((param_2 < 5) && (param_2 == 4)) && ((param_3 & 1) != 0)) {
                  puVar1 = (undefined8 *)(param_1 + 0x58);
                }
                else {
                  puVar1 = (undefined8 *)(param_1 + 0x60);
                }
                if (*(long *)(param_1 + 0x40) != 0) {
                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                            (*(long *)(param_1 + 0x40),*puVar1,0);
                  if (0 < param_2) {
                    return;
                  }
                  if ((*(long *)(param_1 + 0x68) != 0) &&
                     (lVar2 = UnityEngine_Component__get_gameObject_408b480
                                        (*(long *)(param_1 + 0x68),0), lVar2 != 0)) {
                    if (pcRam0000000005c3a388 == (code *)0x0) {
                      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000005c3a388)(lVar2,0);
                    return;
                  }
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

