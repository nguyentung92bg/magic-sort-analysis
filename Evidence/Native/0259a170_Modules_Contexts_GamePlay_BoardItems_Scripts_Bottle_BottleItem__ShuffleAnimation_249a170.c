/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ShuffleAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ShuffleAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleAnimation_249a170
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000005c2b2fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b1388);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c2b2fd = 1;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14(param_1,0);
  puVar1 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimation_22fcf14
                      (lVar4,0);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0578afb0;
    if (lVar2 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar2,param_1,*(undefined8 *)PTR_DAT_057b1388,0);
      uVar3 = *(undefined8 *)puVar1;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
        *(long *)(lVar4 + 0x80) = lVar2;
        FUN_012d0d74((long *)(lVar4 + 0x80),lVar2,uVar3);
      }
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

