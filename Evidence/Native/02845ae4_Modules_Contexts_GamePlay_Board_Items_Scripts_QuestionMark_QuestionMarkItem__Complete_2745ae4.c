/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Complete_2745ae4
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((bRam0000000005c2c69b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057923d0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2c69b = 1;
  }
  puVar4 = PTR_DAT_057b8520;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar5 = PTR_DAT_057923d0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar5);
  if (lVar6 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
    lVar6 = *(long *)(param_1 + 0x50);
    if (lVar6 != 0) {
      if ((bRam0000000005c2c69c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05787738);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_057eeb58);
        bRam0000000005c2c69c = 1;
      }
      puVar4 = PTR_DAT_057606c8;
      if (*(long *)(lVar6 + 0x28) != 0) {
        UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(lVar6 + 0x28),0);
        uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0,0x3f000000,*(undefined8 *)(lVar6 + 0x20),0);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar4 = PTR_DAT_057eeb58;
        if (lVar8 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar6,*(undefined8 *)PTR_DAT_05787738,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                            (uVar7,lVar8,*(undefined8 *)puVar4);
          puVar9 = (undefined8 *)(lVar6 + 0x38);
          *puVar9 = uVar7;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

