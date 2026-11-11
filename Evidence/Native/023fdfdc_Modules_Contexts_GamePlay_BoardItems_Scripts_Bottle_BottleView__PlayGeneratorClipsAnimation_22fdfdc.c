/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayGeneratorClipsAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorClipsAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o toPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayGeneratorClipsAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorClipsAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o
   toPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorClipsAnimation_22fdfdc
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 023fdff8 to 024fe01f has its CatchHandler @ 023fe040 */
  if ((bRam0000000005c2a601 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 023fe020 to 024fe02b has its CatchHandler @ 023fdaf0 */
    FUN_012d0dc8(PTR_DAT_057874c0);
                    /* try { // try from 023fe02c to 024fe033 has its CatchHandler @ 023fe040 */
    bRam0000000005c2a601 = 1;
  }
                    /* catch() { ... } // from try @ 023fdfb0 with catch @ 023fe034 */
  lVar4 = *(long *)(param_4 + 0xa0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fdff8 with catch @ 023fe040
                       catch(type#2 @ 00000000) { ... } // from try @ 023fe02c with catch @ 023fe040
                        */
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar1 = PTR_DAT_057874c0;
  if (lVar4 != 0) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                      (param_1,param_2,param_3,*(undefined4 *)(lVar4 + 0x34),
                       *(undefined8 *)(param_4 + 0x18),0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar3,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

