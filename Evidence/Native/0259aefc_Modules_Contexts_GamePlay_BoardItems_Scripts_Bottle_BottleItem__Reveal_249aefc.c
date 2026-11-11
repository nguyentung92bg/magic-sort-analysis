/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$Reveal
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Reveal (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$Reveal
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Reveal
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Reveal_249aefc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b302 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818358);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b302 = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  plVar4 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetHighestPriorityBlocker_249b04c
                             (param_1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    if (plVar4 == (long *)0x0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_05818358,0);
      uVar6 = 0;
    }
    else {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,plVar4,*(undefined8 *)(*plVar4 + 0x3c0),0);
      uVar6 = _UNK_04339be4;
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(_UNK_04339be4,uVar3,lVar5,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 == 0) goto LAB_0259b048;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,plVar4,*(undefined8 *)(*plVar4 + 0x450),0);
    }
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar6,uVar3,lVar5,0);
    return uVar3;
  }
LAB_0259b048:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

