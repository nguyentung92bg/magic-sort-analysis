/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetSnitchEntryVisuals
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSnitchEntryVisuals (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetSnitchEntryVisuals
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSnitchEntryVisuals
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSnitchEntryVisuals_2611a70
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  switch(param_2) {
  case 0:
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x80),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 == 0) goto LAB_02711ce4;
    uVar2 = 0;
    goto code_r0x02711c0c;
  case 1:
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x80),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    lVar1 = *(long *)(param_1 + 0x80);
    break;
  case 2:
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if ((*(long *)(param_1 + 0x90) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x90),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    lVar1 = *(long *)(param_1 + 0x90);
    break;
  case 3:
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if ((*(long *)(param_1 + 0x90) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x90),0),
       lVar1 == 0)) goto LAB_02711ce4;
    uVar2 = 1;
    goto code_r0x02711bb4;
  case 4:
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
       lVar1 == 0)) goto LAB_02711ce4;
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    if ((*(long *)(param_1 + 0x90) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x90),0),
       lVar1 == 0)) goto LAB_02711ce4;
    uVar2 = 0;
code_r0x02711bb4:
    UnityEngine_GameObject__SetActive_408e318(lVar1,uVar2,0);
  default:
    goto LAB_02711c14;
  }
  if (lVar1 != 0) {
    uVar2 = 1;
code_r0x02711c0c:
    UnityEngine_SpriteRenderer__set_flipX_4095ef8(lVar1,uVar2,0);
LAB_02711c14:
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar1 = 0x21c;
      if (*(int *)(param_1 + 0x100) != 1) {
        lVar1 = 0x218;
      }
      fVar4 = *(float *)(*(long *)(param_1 + 0x38) + lVar1);
      lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar1 != 0) {
        lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (fVar4 * *(float *)(lVar3 + 0xc),fVar4 * *(float *)(lVar3 + 0x10),
                   fVar4 * *(float *)(lVar3 + 0x14),lVar1,0);
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x68),0),
           lVar1 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
          if ((*(long *)(param_1 + 0x70) != 0) &&
             (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0),
             lVar1 != 0)) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar1,0);
            return;
          }
        }
      }
    }
  }
LAB_02711ce4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

