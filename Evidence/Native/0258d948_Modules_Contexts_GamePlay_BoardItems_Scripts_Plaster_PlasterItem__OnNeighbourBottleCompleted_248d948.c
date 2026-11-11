/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterItem$$OnNeighbourBottleCompleted
void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__OnNeighbourBottleCompleted (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258db0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterItem$$OnNeighbourBottleCompleted
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__OnNeighbourBottleCompleted
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__OnNeighbourBottleCompleted_248d948
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                    ();
  if ((uVar5 & 1) != 0) {
    return;
  }
  if ((bRam0000000005c2b289 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05803830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2b289 = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1);
    puVar2 = PTR_DAT_05803830;
    puVar1 = PTR_DAT_057b8520;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar6 != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar6,param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
        puVar1 = PTR_DAT_057606c8;
        fVar10 = *(float *)(&UNK_0438e948 + (ulong)(*(char *)(param_1 + 0x58) == '\0') * 4);
        if ((bRam0000000005c2b28a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057837a0);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_05761078);
          FUN_012d0dc8(PTR_DAT_0578c900);
          bRam0000000005c2b28a = 1;
        }
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_0578c900;
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057837a0,0);
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar10,lVar6,0,0);
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar6 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar8 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar6 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar6 + 0xb8);
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar8 == 0) goto LAB_0258dd84;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar9,*(undefined8 *)PTR_DAT_05761078,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar7 = lVar8;
            FUN_012d0d74(plVar7,lVar8);
          }
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar10 + _UNK_0438e91c,lVar8,0,0);
          plVar7 = *(long **)(param_1 + 0x48);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar6 != 0) && (plVar7 != (long *)0x0)) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar6,plVar7,*(undefined8 *)(*plVar7 + 0x1d0),0);
            puVar1 = PTR_DAT_057815e0;
            fVar10 = fVar10 + _UNK_0438e920;
            if ((bRam0000000005c28460 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057815e0,0,0);
              FUN_012d0dc8(PTR_DAT_057d6890);
              FUN_012d0dc8(PTR_DAT_057ca968);
              FUN_012d0dc8(PTR_DAT_057f1100);
              bRam0000000005c28460 = 1;
            }
            puVar4 = PTR_DAT_057f1100;
            puVar3 = PTR_DAT_057d6890;
            puVar2 = PTR_DAT_057ca968;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            DG_Tweening_DOTween__Sequence_1eda154();
            uVar9 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(fVar10);
            uVar9 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                              (uVar9,lVar6,*(undefined8 *)puVar3);
            lVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                              (uVar9,0,0,*(undefined8 *)puVar4);
            uVar9 = *(undefined8 *)puVar2;
            if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) &&
               (*(char *)(lVar6 + 0x100) == '\0')) {
              *(undefined1 *)(lVar6 + 0x9c) = 1;
              return;
            }
            return;
          }
        }
LAB_0258dd84:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

