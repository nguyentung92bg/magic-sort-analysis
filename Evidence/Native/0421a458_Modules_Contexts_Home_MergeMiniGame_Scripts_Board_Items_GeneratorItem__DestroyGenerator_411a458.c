/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$DestroyGenerator
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__DestroyGenerator (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$DestroyGenerator
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__DestroyGenerator
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__DestroyGenerator_411a458
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c3ac3d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807170);
    FUN_012d0dc8(PTR_DAT_057bafb0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05766e90);
    bRam0000000005c3ac3d = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar7 = (undefined8 *)(param_1 + 0xb8);
  *puVar7 = uVar4;
  FUN_012d0d74(puVar7,uVar4);
  uVar4 = *puVar7;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_05807170,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar4,lVar5,0);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*puVar6,puVar6[1],puVar6[2],
                         *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x40),uVar4,0);
      uVar4 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar8,uVar4,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                  (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x48),
                   *(undefined8 *)PTR_DAT_05766e90);
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0xb8);
          uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x40);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar5,param_1,*(undefined8 *)PTR_DAT_057bafb0,0);
            uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,0,1);
            if ((lVar5 != 0) && ((uVar3 & 1) != 0)) {
              DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar9,uVar4,lVar5);
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

