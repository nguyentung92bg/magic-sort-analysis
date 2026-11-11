/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayMoveToCenterAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayMoveToCenterAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayMoveToCenterAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayMoveToCenterAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayMoveToCenterAnimation_260cfa0
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000005c2b9ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0580ea28);
    FUN_012d0dc8(PTR_DAT_05770998);
                    /* try { // try from 0270cffc to 0280cfff has its CatchHandler @ 0270d008 */
                    /* try { // try from 0270d000 to 0280d02b has its CatchHandler @ 0270cb4c */
    bRam0000000005c2b9ec = 1;
  }
  plVar11 = *(long **)(param_4 + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270cffc with catch @ 0270d008
                        */
  if (plVar11 != (long *)0x0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270cf2c with catch @ 0270d00c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ce5c with catch @ 0270d010
                        */
    lVar7 = *plVar11;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ce9c with catch @ 0270d014
                        */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 0270d02c to 0280d02f has its CatchHandler @ 0270d0b0 */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_0270d064;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_0270d064:
    lVar7 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar7 != 0) {
                    /* try { // try from 0270d074 to 0280d09b has its CatchHandler @ 0270d0bc */
      uVar13 = UnityEngine_Transform__get_position_4092b08(lVar7,0);
      if (cRam0000000005c2ba36 == '\0') {
                    /* try { // try from 0270d09c to 0280d0a7 has its CatchHandler @ 0270cb4c */
        FUN_012d0dc8(PTR_DAT_057c0d90);
                    /* try { // try from 0270d0a8 to 0280d0af has its CatchHandler @ 0270d0bc */
        cRam0000000005c2ba36 = '\x01';
      }
      puVar1 = PTR_DAT_057c0d90;
      puVar2 = PTR_DAT_057815e0;
                    /* catch() { ... } // from try @ 0270d02c with catch @ 0270d0b0 */
      lVar5 = *(long *)PTR_DAT_057c0d90;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270d074 with catch @ 0270d0bc
                       catch(type#2 @ 00000000) { ... } // from try @ 0270d0a8 with catch @ 0270d0bc
                        */
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *(long *)puVar1;
      }
      puVar3 = PTR_DAT_0580ea28;
      puVar1 = PTR_DAT_05770998;
      puVar8 = *(undefined4 **)(lVar5 + 0xb8);
      uVar16 = *puVar8;
      fVar14 = (float)puVar8[1];
      uVar15 = puVar8[2];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
      fVar12 = (float)param_2;
      if ((float)param_2 <= fVar14) {
        fVar12 = fVar14;
      }
      uVar13 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierPathControlPointsAnchoredX_3de0a80
                         (uVar13,param_2,param_3,uVar16,fVar14,uVar15,fVar12 + 1.5,0);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uVar13 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                         (0x3f000000,lVar7,uVar13,2,1,10,&uStack_78,0);
      uVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                         (uVar13,4,*(undefined8 *)puVar3);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar13,0);
      uVar13 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c(_UNK_0438ebbc,0x3f000000,lVar7,0);
      uVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                         (uVar13,6,*(undefined8 *)puVar1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar13,0);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

