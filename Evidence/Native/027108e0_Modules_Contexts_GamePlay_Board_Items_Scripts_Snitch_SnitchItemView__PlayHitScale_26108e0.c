/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayHitScale
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHitScale (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayHitScale
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHitScale
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition, int32_t snitchIndex, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHitScale_26108e0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 02710904 to 02810907 has its CatchHandler @ 02710924 */
                    /* try { // try from 02710908 to 0281090f has its CatchHandler @ 02710928 */
  if ((bRam0000000005c2ba04 & 1) == 0) {
                    /* try { // try from 02710910 to 02810913 has its CatchHandler @ 02710644 */
                    /* try { // try from 02710914 to 02810917 has its CatchHandler @ 02710920 */
                    /* try { // try from 02710918 to 0281094b has its CatchHandler @ 02710644 */
    FUN_012d0dc8(PTR_DAT_057874c0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02710914 with catch @ 02710920
                        */
    bRam0000000005c2ba04 = 1;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02710904 with catch @ 02710924
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02710908 with catch @ 02710928
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0271083c with catch @ 0271092c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02710764 with catch @ 02710930
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027107a4 with catch @ 02710934
                        */
  uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                    (param_1,param_2,param_3,param_4,param_5);
  uVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    /* try { // try from 0271094c to 0281094f has its CatchHandler @ 027109c8 */
  if (*(long *)(param_4 + 0x38) != 0) {
    lVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                      (*(undefined4 *)(*(long *)(param_4 + 0x38) + 0x144),uVar6,uVar4,0);
    if (*(long *)(param_4 + 0x38) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x148);
                    /* try { // try from 0271098c to 028109b3 has its CatchHandler @ 027109d4 */
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar4,*(undefined8 *)PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar5 + 0xb4) = 0x25;
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar2 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar4,0);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar5 + 0xb8) = lVar3;
            FUN_012d0d74((long *)(lVar5 + 0xb8),lVar3);
            return lVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

