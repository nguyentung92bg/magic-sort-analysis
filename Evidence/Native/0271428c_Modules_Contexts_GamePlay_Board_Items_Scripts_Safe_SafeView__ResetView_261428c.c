/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$ResetView
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ResetView (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$ResetView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ResetView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ResetView_261428c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if (*(long *)(param_1 + 200) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 200),0,0);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0xc0),0,0);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    UnityEngine_Animation__Stop_1f79e6c(*(long *)(param_1 + 0x90),0);
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x98),0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
         lVar2 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
        if ((*(long *)(param_1 + 0xa0) != 0) &&
           (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xa0),0),
           lVar2 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
          if ((*(long *)(param_1 + 0x70) != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0),
             lVar2 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
            lVar2 = *(long *)(param_1 + 0x78);
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            puVar1 = PTR_DAT_05805c10;
            if (lVar2 != 0) {
              puVar3 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
              UnityEngine_Transform__set_localEulerAngles_4092f0c
                        (*puVar3,puVar3[1],puVar3[2],lVar2,0);
              lVar2 = *(long *)(param_1 + 0x60);
              if (cRam0000000005c230aa == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230aa = '\x01';
              }
              if (lVar2 != 0) {
                UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                          (**(float **)(*(long *)puVar1 + 0xb8) * _UNK_04339bec,0,0);
                if (pcRam0000000005c3a640 == (code *)0x0) {
                  pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074);
                }
                (*pcRam0000000005c3a640)(lVar2,&stack0xffffffffffffffd0);
                return;
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

