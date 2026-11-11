/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayTagAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, bool fromLeft, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayTagAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, bool fromLeft, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation_2f60324
          (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c308f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d85a0);
    bRam0000000005c308f0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar1 = PTR_DAT_057d85a0;
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
                    /* try { // try from 030603a0 to 031603b3 has its CatchHandler @ 030607c0 */
    fVar6 = 1.0;
    if ((param_2 & 1) == 0) {
      fVar6 = -1.0;
    }
    uVar3 = DG_Tweening_ShortcutExtensions__DOPunchRotation_1ee7424
                      (0,0,fVar6 * *(float *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                       *(undefined4 *)(lVar4 + 0x24),*(undefined8 *)(param_1 + 0x38),
                       *(undefined4 *)(lVar4 + 0x20),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 03060428 to 0316042f has its CatchHandler @ 030607bc */
    uVar3 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                      (*puVar5,puVar5[1],puVar5[2],0x3e800000,uVar3,0,0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                      (uVar3,0x1b,*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

