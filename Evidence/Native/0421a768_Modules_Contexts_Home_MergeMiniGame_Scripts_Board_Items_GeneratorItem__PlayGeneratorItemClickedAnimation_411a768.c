/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$PlayGeneratorItemClickedAnimation
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__PlayGeneratorItemClickedAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$PlayGeneratorItemClickedAnimation
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__PlayGeneratorItemClickedAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__PlayGeneratorItemClickedAnimation_411a768
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c3ac3f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05793b20);
    FUN_012d0dc8(PTR_DAT_0580b950);
    FUN_012d0dc8(PTR_DAT_057e5890);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c3ac3f = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar7 = (undefined8 *)(param_1 + 0xc0);
  *puVar7 = uVar4;
  FUN_012d0d74(puVar7,uVar4);
  uVar4 = *puVar7;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_05793b20,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar4,lVar5,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x50);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback_float____ctor_341f244
                  (lVar5,param_1,*(undefined8 *)PTR_DAT_0580b950,0);
        uVar6 = DG_Tweening_DOVirtual__Float_1edbb8c(0,uVar8,uVar8,lVar5,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar6,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          fVar9 = *(float *)(*(long *)(param_1 + 0x50) + 0x50);
          uVar4 = *puVar7;
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar5,param_1,*(undefined8 *)PTR_DAT_057e5890,0);
            uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,0,1);
            if ((lVar5 != 0) && ((uVar3 & 1) != 0)) {
              DG_Tweening_Sequence__DoInsertCallback_1edffe8(fVar9 + 0.0,uVar4,lVar5);
            }
            return uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

