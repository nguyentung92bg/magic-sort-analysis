/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$PlayCompleteAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$PlayCompleteAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__PlayCompleteAnimation_230ca20
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000005c2a67c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057af900);
    FUN_012d0dc8(PTR_DAT_0579e5d0);
    bRam0000000005c2a67c = 1;
  }
  if ((param_4[10] != 0) && (lVar2 = *(long *)(param_4[10] + 0x48), lVar2 != 0)) {
    uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__GetKeyTargetPositionForBox_2608630
                      (lVar2,0);
    if ((param_4[0xc] != 0) &&
       (uVar11 = param_2, uVar12 = param_3,
       plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (param_4[0xc],0), puVar1 = PTR_DAT_0575a2d8, plVar3 != (long *)0x0
       )) {
      lVar2 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0240cb14;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,0);
LAB_0240cb14:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      (**(code **)(*param_4 + 0x278))(param_4,*(undefined8 *)(*param_4 + 0x280));
      plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_4,0);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        lVar2 = *(long *)puVar1;
                    /* try { // try from 0240cb58 to 0250cb7f has its CatchHandler @ 0240cd00 */
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
                    /* try { // try from 0240cb98 to 0250cbfb has its CatchHandler @ 0240cd04 */
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 10) * 0x10 + 0x138);
              goto LAB_0240cba4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar3,lVar2,10);
LAB_0240cba4:
        (*(code *)*puVar4)(plVar3,0,puVar4[1]);
        lVar2 = param_4[9];
        plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_4,0);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          lVar5 = *(long *)puVar1;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0240cc18;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_0131971c(plVar3,lVar5,0);
LAB_0240cc18:
                    /* try { // try from 0240cc1c to 0250cc2b has its CatchHandler @ 0240ccfc */
          uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (lVar2 != 0) {
                    /* try { // try from 0240cc2c to 0250cceb has its CatchHandler @ 0240c848 */
            uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayUnlockAnimation_230cda8
                              (uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_2,lVar2,
                               (char)param_4[0x11]);
            puVar1 = PTR_DAT_057606c8;
            fVar13 = 0.0;
            if ((char)param_4[0x11] != '\0') {
              fVar13 = _UNK_04321764;
            }
            if (((param_4[9] != 0) && (lVar2 = *(long *)(param_4[9] + 0x50), lVar2 != 0)) &&
               (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
              fVar14 = *(float *)(lVar2 + 0x1c);
              lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar2 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar2,param_4,*(undefined8 *)PTR_DAT_057af900,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                          (fVar13 + fVar14,uVar9,lVar2,0);
                lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0240ccec to 0250ccef has its CatchHandler @ 0240ccf8 */
                if (lVar2 != 0) {
                    /* try { // try from 0240ccf0 to 0250cd1b has its CatchHandler @ 0240c848 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240ccec with catch @ 0240ccf8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240cc1c with catch @ 0240ccfc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240cb58 with catch @ 0240cd00
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240cb98 with catch @ 0240cd04
                        */
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar2,param_4,*(undefined8 *)PTR_DAT_0579e5d0,0);
                  uVar7 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                    (uVar9,0,1);
                    /* try { // try from 0240cd1c to 0250cd1f has its CatchHandler @ 0240cda0 */
                  if ((lVar2 != 0) && ((uVar7 & 1) != 0)) {
                    DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x40000000,uVar9,lVar2);
                  }
                  return uVar9;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

