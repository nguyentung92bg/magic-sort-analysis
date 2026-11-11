/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$Reveal
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Reveal (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$Reveal
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Reveal
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Reveal_2490e50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_057606c8;
  if ((bRam0000000005c2b2a6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c3120);
    FUN_012d0dc8(PTR_DAT_057dde98);
    FUN_012d0dc8(PTR_DAT_0577eec0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b2a6 = 1;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057c3120,0);
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar7,lVar6,0,0);
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057dde98,0);
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar7,lVar6,0,0);
      uVar7 = *(undefined4 *)(param_1 + 0x4c);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
                    /* try { // try from 02590f3c to 02690fc7 has its CatchHandler @ 02590f3c
                       catch() { ... } // from try @ 02590f3c with catch @ 02590f3c
                       catch() { ... } // from try @ 02590fe0 with catch @ 02590f3c
                       catch() { ... } // from try @ 02591030 with catch @ 02590f3c
                       catch() { ... } // from try @ 02591064 with catch @ 02590f3c */
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_0577eec0,0);
        puVar1 = PTR_DAT_057815e0;
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
        uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar7);
        uVar5 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                          (uVar5,lVar6,*(undefined8 *)puVar3);
        lVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                          (uVar5,0,0,*(undefined8 *)puVar4);
        uVar5 = *(undefined8 *)puVar2;
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) &&
           (*(char *)(lVar6 + 0x100) == '\0')) {
          *(undefined1 *)(lVar6 + 0x9c) = 1;
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

