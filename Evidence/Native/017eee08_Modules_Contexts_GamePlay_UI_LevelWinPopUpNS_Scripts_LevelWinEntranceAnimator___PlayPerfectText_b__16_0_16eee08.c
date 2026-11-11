/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$<PlayPerfectText>b__16_0
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator___PlayPerfectText_b__16_0 (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$<PlayPerfectText>b__16_0
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator___PlayPerfectText_b__16_0
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator___PlayPerfectText_b__16_0_16eee08
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000005c24b46 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057b7c78);
    bRam0000000005c24b46 = 1;
  }
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
     puVar2 = PTR_DAT_057bc5e8, puVar1 = PTR_DAT_057b7c78, lVar3 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    lVar3 = *(long *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      Modules_Infrastructure_Utils_TextSequenceAnimator__SetText_3de58d4(lVar3,uVar4,0,0);
      puVar1 = PTR_DAT_057fc1d0;
      if (*(long *)(param_1 + 0x78) != 0) {
        lVar3 = Modules_Infrastructure_Utils_TextSequenceAnimator__MoveAndScale_3de60d8
                          (*(long *)(param_1 + 0x78),0);
        uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
        if ((bRam0000000005c2b026 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576c200,uVar4,*(undefined8 *)puVar1);
          FUN_012d0dc8(PTR_DAT_05794618);
          FUN_012d0dc8(PTR_DAT_058163b8);
          bRam0000000005c2b026 = 1;
        }
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) && (*(char *)(lVar3 + 0xe9) == '\0')
           ) {
          if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
          if ((uVar5 & 1) == 0) {
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05794618);
            puVar1 = PTR_DAT_058163b8;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_Core_TweenLink___ctor_332f2e4(lVar6,uVar4,6,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            DG_Tweening_Core_TweenManager__AddTweenLink_3330cfc(lVar3,lVar6,0);
          }
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

