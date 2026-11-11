/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTextView$$SetBackgroundType
void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetBackgroundType (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView_o* __this, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTextView$$SetBackgroundType
   void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetBackgroundType
   (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView_o* __this, int32_t
   levelDifficultyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetBackgroundType_160cedc
               (long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c24446 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c24446 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (param_2 != 2) {
    if (param_2 == 1) {
      lVar4 = *(long *)(param_1 + 0x28);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x40) == 0)) goto LAB_0170d238;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x30),0);
      lVar4 = *(long *)(param_1 + 0x28);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_0170d238;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x48),0);
      if (((*(long *)(param_1 + 0x28) == 0) ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x58), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 == 0))
      goto LAB_0170d238;
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x60);
        if (lVar4 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
        }
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x68);
      if (lVar4 == 0) {
        return;
      }
    }
    else {
      if (param_2 != 0) {
        lVar4 = *(long *)(param_1 + 0x28);
        if ((lVar4 != 0) && (lVar3 = *(long *)(lVar4 + 0x40), lVar3 != 0)) {
          uVar5 = *(undefined8 *)(lVar4 + 0x28);
          if (pcRam0000000005c3a730 == (code *)0x0) {
            pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
          }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a730)(lVar3,uVar5);
          return;
        }
        goto LAB_0170d238;
      }
      lVar4 = *(long *)(param_1 + 0x28);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x40) == 0)) goto LAB_0170d238;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28),0);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         ((lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x58), lVar4 == 0 ||
          (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 == 0))))
      goto LAB_0170d238;
      UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (((*(long *)(param_1 + 0x28) == 0) ||
            (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x60), lVar4 == 0)) ||
           (lVar4 = UnityEngine_GameObject__get_gameObject_408e764(lVar4,0), lVar4 == 0))
        goto LAB_0170d238;
        UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x68);
      if (lVar4 == 0) {
        return;
      }
      lVar4 = UnityEngine_GameObject__get_gameObject_408e764(lVar4,0);
      if (lVar4 == 0) goto LAB_0170d238;
    }
    uVar5 = 0;
LAB_0170d1f8:
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar4,uVar5);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x40) != 0)) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x38),0);
    lVar4 = *(long *)(param_1 + 0x28);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x50),0);
      if (((*(long *)(param_1 + 0x28) == 0) ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x58), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 == 0))
      goto LAB_0170d238;
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x60);
        if (lVar4 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
        }
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170d238;
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x68);
      if (lVar4 == 0) {
        return;
      }
      uVar5 = 1;
      goto LAB_0170d1f8;
    }
  }
LAB_0170d238:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

