/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$PlayCompleteAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__PlayCompleteAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, bool withAnimation, float revealDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$PlayCompleteAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, bool withAnimation,
   float revealDelay, const MethodInfo* method); */

undefined8 *
Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__PlayCompleteAnimation_24908ec
          (undefined8 param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c2b2a4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057881c8);
    FUN_012d0dc8(PTR_DAT_05787390);
    FUN_012d0dc8(PTR_DAT_057b68c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b2a4 = 1;
  }
  puVar4 = PTR_DAT_057606c8;
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_2 + 0x48) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__RevealWithoutAnimation_2490a54
                ();
      if ((*(long *)(param_2 + 0x50) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_2 + 0x50) + 0x40), lVar6 != 0)) {
        if ((bRam0000000005c3aa98 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057aeae8,param_2,0);
          bRam0000000005c3aa98 = 1;
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          lVar7 = *(long *)PTR_DAT_057aeae8;
          iVar5 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0xa0) + 8))
                            (lVar6,param_2);
          if (-1 < iVar5) {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x158) + 8))
                      (lVar6,iVar5);
          }
          return (undefined8 *)(ulong)(-1 < iVar5);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)PTR_DAT_05787390;
      if ((float)param_1 != 0.0) {
        puVar8 = (undefined8 *)PTR_DAT_057b68c8;
      }
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,uVar9,*puVar8,0);
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(param_1,lVar6,0,0);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar6 != 0) {
        uVar10 = *(undefined4 *)(&UNK_0438e950 + (ulong)((float)param_1 == 0.0) * 4);
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_2,*(undefined8 *)PTR_DAT_057881c8,0);
        uVar9 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar10,lVar6,0,0);
        puVar8 = (undefined8 *)(param_2 + 0x60);
        *puVar8 = uVar9;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return puVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

