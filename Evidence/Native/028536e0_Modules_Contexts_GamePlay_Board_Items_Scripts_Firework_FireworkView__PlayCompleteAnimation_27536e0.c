/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$PlayCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$PlayCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__PlayCompleteAnimation_27536e0
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2c71a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05776e20);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2c71a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar3 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_1,*(undefined8 *)PTR_DAT_05776e20,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar4,uVar2,lVar3,0);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

