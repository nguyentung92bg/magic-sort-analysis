/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.BlockItem$$PlayNeighborMergeAnimationSequence
DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem__PlayNeighborMergeAnimationSequence (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.BlockItem$$PlayNeighborMergeAnimationSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem__PlayNeighborMergeAnimationSequence
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem__PlayNeighborMergeAnimationSequence_4115d50
          (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c3ac3b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b6778);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057a3b00);
    FUN_012d0dc8(PTR_DAT_05787cf0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0580b168);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3ac3b = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057b6778,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
    if (param_1[10] != 0) {
      uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                        (0,*(undefined4 *)(param_1[10] + 0xd8),param_1[7],0);
      if (param_1[10] != 0) {
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar7,*(undefined8 *)(param_1[10] + 0xe0),*(undefined8 *)PTR_DAT_0580b168
                          );
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
        puVar4 = PTR_DAT_05805c10;
        puVar3 = PTR_DAT_05787cf0;
        puVar1 = PTR_DAT_057874c0;
        puVar2 = PTR_DAT_0576c200;
        if (((param_1[10] != 0) && (param_1[0x11] != 0)) &&
           (lVar6 = *(long *)(param_1[0x11] + 0xa0), lVar6 != 0)) {
          iVar10 = *(int *)(lVar6 + 0x18) + -1;
          if (-1 < iVar10) {
            fVar11 = *(float *)(param_1[10] + 0xd8) + 0.0;
            do {
              uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar6,iVar10,*(undefined8 *)puVar3);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar2);
              }
              uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar7,param_1,0);
              if ((uVar8 & 1) != 0) {
                lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar6,iVar10,*(undefined8 *)puVar3);
                if (lVar9 == 0) goto LAB_04216034;
                uVar7 = UnityEngine_Component__get_transform_408b444(lVar9,0);
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(puVar4);
                  cRam0000000005c230a9 = '\x01';
                }
                if (param_1[10] == 0) goto LAB_04216034;
                lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
                uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                  (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                                   *(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(param_1[10] + 200),
                                   uVar7,0);
                if (param_1[10] == 0) goto LAB_04216034;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(param_1[10] + 0xd0),*(undefined8 *)puVar1);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar11,uVar5,uVar7,0);
                if (param_1[10] == 0) goto LAB_04216034;
                fVar11 = fVar11 + *(float *)(param_1[10] + 0xe8);
              }
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          if ((lVar6 != 0) && (param_1 != (long *)0x0)) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar6,param_1,*(undefined8 *)(*param_1 + 0x240),0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0x3fc00000,uVar5,lVar6,0);
            return uVar5;
          }
        }
      }
    }
  }
LAB_04216034:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

