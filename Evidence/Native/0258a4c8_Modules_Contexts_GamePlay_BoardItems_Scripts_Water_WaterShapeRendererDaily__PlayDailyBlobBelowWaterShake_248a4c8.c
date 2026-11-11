/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRendererDaily$$PlayDailyBlobBelowWaterShake
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererDaily__PlayDailyBlobBelowWaterShake (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererDaily_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRendererDaily$$PlayDailyBlobBelowWaterShake
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererDaily__PlayDailyBlobBelowWaterShake
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererDaily_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererDaily__PlayDailyBlobBelowWaterShake_248a4c8
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000005c2b271 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05801f50);
    FUN_012d0dc8(PTR_DAT_05808338);
    bRam0000000005c2b271 = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  plVar5 = (long *)(param_1 + 200);
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar5,0,0);
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *plVar5 = lVar4;
  FUN_012d0d74(plVar5,lVar4);
  lVar6 = *plVar5;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05801f50,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar6,lVar4,0);
    if (*(long *)(param_1 + 0xd0) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 200);
      uVar8 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x58);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05808338,0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar7,0,1);
        if ((lVar4 != 0) && ((uVar3 & 1) != 0)) {
          DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar8,uVar7,lVar4);
        }
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

