/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$<PlayProgressAnimation>b__27_1
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView___PlayProgressAnimation_b__27_1 (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$<PlayProgressAnimation>b__27_1
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView___PlayProgressAnimation_b__27_1
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView___PlayProgressAnimation_b__27_1_2617440
               (long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    lVar1 = *(long *)(param_1 + 0x78);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    if (lVar1 != 0) {
      pfVar2 = *(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fVar3 = pfVar2[1] * _UNK_04339bec;
      fVar4 = pfVar2[2] * _UNK_04339bec;
      fVar5 = _UNK_04339bec;
      uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(*pfVar2 * _UNK_04339bec,0,0)
      ;
      fStack_2c = fVar3;
      fStack_28 = fVar4;
      fStack_24 = fVar5;
      if (pcRam0000000005c3a630 == (code *)0x0) {
        pcRam0000000005c3a630 = (code *)FUN_012d0d84(&UNK_043eefe3);
      }
      (*pcRam0000000005c3a630)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

