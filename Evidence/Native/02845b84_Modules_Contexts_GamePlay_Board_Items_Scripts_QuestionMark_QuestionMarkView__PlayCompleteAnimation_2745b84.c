/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkView$$PlayCompleteAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkView$$PlayCompleteAnimation
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView__PlayCompleteAnimation_2745b84
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000005c2c69c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05787738);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057eeb58);
    bRam0000000005c2c69c = 1;
  }
  puVar4 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(param_1 + 0x28),0);
    uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (0,0x3f000000,*(undefined8 *)(param_1 + 0x20),0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_057eeb58;
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_05787738,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                        (uVar5,lVar6,*(undefined8 *)puVar4);
      puVar7 = (undefined8 *)(param_1 + 0x38);
      *puVar7 = uVar5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

