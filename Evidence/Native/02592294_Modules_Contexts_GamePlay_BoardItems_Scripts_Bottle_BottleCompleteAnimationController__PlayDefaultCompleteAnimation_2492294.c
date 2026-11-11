/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayDefaultCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayDefaultCompleteAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayDefaultCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayDefaultCompleteAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   int32_t bottleHeight, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayDefaultCompleteAnimation_2492294
          (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_DAT_057f6518;
  if ((bRam0000000005c2b2b6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05803048);
    FUN_012d0dc8(PTR_DAT_057f6518);
    bRam0000000005c2b2b6 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x18),param_1);
    puVar2 = PTR_DAT_057815e0;
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if (param_2 == 0xc) {
        uVar6 = *(undefined4 *)(lVar4 + 0x60);
      }
      else {
        uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetStopperDelay_24925a4
                          (lVar4,param_2);
      }
      *(undefined4 *)(lVar3 + 0x10) = uVar6;
      puVar1 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_05803048,0);
        DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar4,0);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

