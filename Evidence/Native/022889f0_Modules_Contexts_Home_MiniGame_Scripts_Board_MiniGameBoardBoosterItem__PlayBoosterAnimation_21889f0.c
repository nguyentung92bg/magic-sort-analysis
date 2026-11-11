/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$PlayBoosterAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayBoosterAnimation (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, System_Collections_Generic_List_MiniGameBoardCell__o* targetCells, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$PlayBoosterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayBoosterAnimation
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this,
   System_Collections_Generic_List_MiniGameBoardCell__o* targetCells, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayBoosterAnimation_21889f0
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c29d45 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d0e60);
    FUN_012d0dc8(PTR_DAT_057fab68);
    FUN_012d0dc8(PTR_DAT_057cb950);
    FUN_012d0dc8(PTR_DAT_057fa168);
    FUN_012d0dc8(PTR_DAT_057f66f8);
    FUN_012d0dc8(PTR_DAT_05793bf0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c29d45 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar4 = (undefined8 *)(param_4 + 0x58);
  *puVar4 = uVar2;
  FUN_012d0d74(puVar4,uVar2);
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0x18) == 0) {
LAB_02288d24:
      return *puVar4;
    }
    lVar3 = System_Linq_Enumerable__Last_object__242283c(param_5,*(undefined8 *)PTR_DAT_057d0e60);
    if ((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_transform_408b444(lVar3,0), lVar3 != 0))
    {
      uVar6 = UnityEngine_Transform__get_position_4092b08(lVar3,0);
      uVar2 = param_2;
      uVar5 = param_3;
      uVar7 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetRotationByTarget_2188d50
                        (param_4);
      lVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__set_eulerAngles_4092e00(uVar7,uVar2,uVar5,lVar3,0);
        puVar1 = PTR_DAT_057606c8;
        if (*(long *)(param_4 + 0x50) != 0) {
          fVar8 = *(float *)(*(long *)(param_4 + 0x50) + 0x88);
          iVar9 = *(int *)(param_5 + 0x18);
          uVar2 = *puVar4;
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          if (lVar3 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar3,param_4,*(undefined8 *)PTR_DAT_057fa168,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar2,lVar3,0);
            if (*(long *)(param_4 + 0x50) != 0) {
              fVar10 = *(float *)(*(long *)(param_4 + 0x50) + 0x80);
              uVar2 = *puVar4;
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                fVar10 = fVar10 + 0.0;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar3,param_4,*(undefined8 *)PTR_DAT_057f66f8,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar10,uVar2,lVar3,0);
                if (*(long *)(param_4 + 0x50) != 0) {
                  fVar11 = *(float *)(*(long *)(param_4 + 0x50) + 0x84);
                  uVar5 = *(undefined8 *)(param_4 + 0x58);
                  fVar8 = fVar8 * (float)iVar9;
                  uVar2 = UnityEngine_Component__get_transform_408b444(param_4,0);
                  uVar2 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                    (uVar6,param_2,param_3,fVar8,uVar2,0,0);
                  if (*(long *)(param_4 + 0x50) != 0) {
                    fVar10 = fVar10 + fVar11;
                    uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                      (uVar2,*(undefined8 *)(*(long *)(param_4 + 0x50) + 0x90),
                                       *(undefined8 *)PTR_DAT_057874c0);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10,uVar5,uVar2,0);
                    uVar5 = *(undefined8 *)(param_4 + 0x58);
                    uVar2 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayCellHitAnimations_2188dfc
                                      (fVar8,param_4,param_5);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10,uVar5,uVar2,0);
                    uVar2 = *(undefined8 *)(param_4 + 0x58);
                    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar3 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar3,param_4,*(undefined8 *)PTR_DAT_05793bf0,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar10,uVar2,lVar3,0);
                      if (*(long *)(param_4 + 0x50) != 0) {
                        fVar11 = *(float *)(*(long *)(param_4 + 0x50) + 0x98);
                        uVar2 = *puVar4;
                        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                        if (lVar3 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar3,param_4,*(undefined8 *)PTR_DAT_057cb950,0);
                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                    (fVar10 + fVar8 + fVar11,uVar2,lVar3,0);
                          goto LAB_02288d24;
                        }
                      }
                    }
                  }
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

