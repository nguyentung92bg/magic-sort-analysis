/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayLaunchFromGeneratorButtonAnimation
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayLaunchFromGeneratorButtonAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayLaunchFromGeneratorButtonAnimation
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayLaunchFromGeneratorButtonAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o*
   from, UnityEngine_Transform_o* target, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayLaunchFromGeneratorButtonAnimation_410ae94
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
          undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  puVar1 = PTR_DAT_05804df0;
  if ((bRam0000000005c3abc5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05762d28);
    FUN_012d0dc8(PTR_DAT_05817850);
    FUN_012d0dc8(PTR_DAT_05804df0);
    bRam0000000005c3abc5 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_4);
    *(undefined8 *)(lVar4 + 0x18) = param_5;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x18),param_5);
    puVar7 = (undefined8 *)(lVar4 + 0x20);
    *puVar7 = *(undefined8 *)(param_4 + 0x88);
    FUN_012d0d74(puVar7);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar8 = (undefined8 *)(param_4 + 0x68);
    *puVar8 = uVar5;
    FUN_012d0d74(puVar8,uVar5);
    uVar5 = *puVar8;
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_05762d28,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
      if (*(long *)(lVar4 + 0x18) != 0) {
        uVar5 = *puVar8;
        uVar9 = UnityEngine_Transform__get_position_4092b08(*(long *)(lVar4 + 0x18),0);
        if (param_6 != 0) {
          uVar11 = param_2;
          uVar12 = param_3;
          uVar10 = UnityEngine_Transform__get_position_4092b08(param_6,0);
          uVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__FollowBezierPath_410b0dc
                            (uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_4,*puVar7);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar9,0);
          if (*(long *)(param_4 + 0x50) != 0) {
            uVar5 = *(undefined8 *)(param_4 + 0x68);
            uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x50) + 0x164);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback_float____ctor_341f244
                        (lVar6,lVar4,*(undefined8 *)PTR_DAT_05817850,0);
              uVar9 = DG_Tweening_DOVirtual__Float_1edbb8c(0,uVar13,uVar13,lVar6,0);
              uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                (uVar5,uVar9,0);
              if ((uVar3 & 1) != 0) {
                DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar5,uVar9);
              }
              return uVar5;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

