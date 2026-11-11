/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$Complete
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__Complete (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, bool withAnimation, float revealDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$Complete
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__Complete
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, bool withAnimation,
   float revealDelay, const MethodInfo* method); */

undefined8 *
Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__Complete_24907fc
          (undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  puVar7 = param_2;
  if ((bRam0000000005c2b2a3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781138);
    puVar7 = (undefined8 *)FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2b2a3 = 1;
  }
  if (*(char *)(param_2 + 8) != '\0') {
    return puVar7;
  }
  *(undefined1 *)(param_2 + 8) = 1;
  if ((param_2[10] != 0) && (lVar8 = *(long *)(param_2[10] + 0x40), lVar8 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar8,param_2,0);
    puVar5 = PTR_DAT_057b8520;
    puVar4 = PTR_DAT_05781138;
    if (param_2[10] != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                (param_2[10],param_2);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      if (lVar8 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
        if ((bRam0000000005c2b2a4 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057881c8);
          FUN_012d0dc8(PTR_DAT_05787390);
          FUN_012d0dc8(PTR_DAT_057b68c8);
          FUN_012d0dc8(PTR_DAT_057606c8);
          bRam0000000005c2b2a4 = 1;
        }
        puVar4 = PTR_DAT_057606c8;
        if ((param_3 & 1) == 0) {
          if (param_2[9] != 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__RevealWithoutAnimation_2490a54
                      ();
            if ((param_2[10] != 0) && (lVar8 = *(long *)(param_2[10] + 0x40), lVar8 != 0)) {
              if ((bRam0000000005c3aa98 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057aeae8,param_2,0);
                bRam0000000005c3aa98 = 1;
              }
              lVar8 = *(long *)(lVar8 + 0x10);
              if (lVar8 != 0) {
                lVar9 = *(long *)PTR_DAT_057aeae8;
                iVar6 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0xa0) + 8
                                    ))(lVar8,param_2);
                if (-1 < iVar6) {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x158) + 8))
                            (lVar8,iVar6);
                }
                return (undefined8 *)(ulong)(-1 < iVar6);
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
        else {
          uVar10 = param_2[9];
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          if (lVar8 != 0) {
            puVar7 = (undefined8 *)PTR_DAT_05787390;
            if ((float)param_1 != 0.0) {
              puVar7 = (undefined8 *)PTR_DAT_057b68c8;
            }
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar10,*puVar7,0);
            DG_Tweening_DOVirtual__DelayedCall_1edcb38(param_1,lVar8,0,0);
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            if (lVar8 != 0) {
              uVar11 = *(undefined4 *)(&UNK_0438e950 + (ulong)((float)param_1 == 0.0) * 4);
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar8,param_2,*(undefined8 *)PTR_DAT_057881c8,0);
              uVar10 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar11,lVar8,0,0);
              param_2 = param_2 + 0xc;
              *param_2 = uVar10;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)param_2 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)param_2 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return param_2;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

