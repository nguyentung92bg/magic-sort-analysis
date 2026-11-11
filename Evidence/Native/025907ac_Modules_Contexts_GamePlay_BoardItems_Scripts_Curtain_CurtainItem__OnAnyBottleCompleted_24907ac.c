/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$OnAnyBottleCompleted
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnAnyBottleCompleted (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$OnAnyBottleCompleted
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnAnyBottleCompleted
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t
   waterColorId, const MethodInfo* method); */

undefined8 *
Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnAnyBottleCompleted_24907ac
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  if (param_1[0xb] != 0) {
    if (*(int *)(param_1[0xb] + 0x70) != param_3) {
      return param_1;
    }
    if (param_1[10] != 0) {
      uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                        ();
      fVar4 = _UNK_04339be4;
      puVar9 = param_1;
      if ((bRam0000000005c2b2a3 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05781138);
        puVar9 = (undefined8 *)FUN_012d0dc8(PTR_DAT_057b8520);
        bRam0000000005c2b2a3 = 1;
      }
      if (*(char *)(param_1 + 8) != '\0') {
        return puVar9;
      }
      *(undefined1 *)(param_1 + 8) = 1;
      if ((param_1[10] != 0) && (lVar10 = *(long *)(param_1[10] + 0x40), lVar10 != 0)) {
        Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar10,param_1,0);
        puVar6 = PTR_DAT_057b8520;
        puVar5 = PTR_DAT_05781138;
        if (param_1[10] != 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                    (param_1[10],param_1);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                             (*(undefined8 *)puVar5);
          if (lVar10 != 0) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar10,0);
            if ((bRam0000000005c2b2a4 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057881c8);
              FUN_012d0dc8(PTR_DAT_05787390);
              FUN_012d0dc8(PTR_DAT_057b68c8);
              FUN_012d0dc8(PTR_DAT_057606c8);
              bRam0000000005c2b2a4 = 1;
            }
            puVar5 = PTR_DAT_057606c8;
            if ((~uVar8 & 1) == 0) {
              if (param_1[9] != 0) {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__RevealWithoutAnimation_2490a54
                          ();
                if ((param_1[10] != 0) && (lVar10 = *(long *)(param_1[10] + 0x40), lVar10 != 0)) {
                  if ((bRam0000000005c3aa98 & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_057aeae8,param_1,0);
                    bRam0000000005c3aa98 = 1;
                  }
                  lVar10 = *(long *)(lVar10 + 0x10);
                  if (lVar10 != 0) {
                    lVar11 = *(long *)PTR_DAT_057aeae8;
                    iVar7 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0xa0
                                                  ) + 8))(lVar10,param_1);
                    if (-1 < iVar7) {
                      (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x158) + 8
                                  ))(lVar10,iVar7);
                    }
                    return (undefined8 *)(ulong)(-1 < iVar7);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
              }
            }
            else {
              uVar12 = param_1[9];
              lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar10 != 0) {
                puVar9 = (undefined8 *)PTR_DAT_05787390;
                if (fVar4 != 0.0) {
                  puVar9 = (undefined8 *)PTR_DAT_057b68c8;
                }
                DG_Tweening_TweenCallback___ctor_1ed6da8(lVar10,uVar12,*puVar9,0);
                DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar4,lVar10,0,0);
                lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                if (lVar10 != 0) {
                  uVar13 = *(undefined4 *)(&UNK_0438e950 + (ulong)(fVar4 == 0.0) * 4);
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar10,param_1,*(undefined8 *)PTR_DAT_057881c8,0);
                  uVar12 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar13,lVar10,0,0);
                  param_1 = param_1 + 0xc;
                  *param_1 = uVar12;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  return param_1;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

