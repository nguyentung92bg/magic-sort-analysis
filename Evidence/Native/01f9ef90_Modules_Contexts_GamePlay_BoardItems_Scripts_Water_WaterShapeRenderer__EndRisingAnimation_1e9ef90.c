/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$EndRisingAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__EndRisingAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, Tests_EclipseAnimationConfig_o* animationConfig, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$EndRisingAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__EndRisingAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this,
   Tests_EclipseAnimationConfig_o* animationConfig, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__EndRisingAnimation_1e9ef90
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_057c7da0;
  if ((bRam0000000005c2819a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057ae0f8);
    FUN_012d0dc8(PTR_DAT_057c7da0);
    bRam0000000005c2819a = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057cc518;
  if (lVar2 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer___c__DisplayClass51_0___ctor_248a44c
              (lVar2,0);
    *(long *)(lVar2 + 0x10) = param_2;
    FUN_012d0d74((long *)(lVar2 + 0x10),param_2);
    *(undefined8 *)(lVar2 + 0x18) = param_3;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x18),param_3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244(lVar3,lVar2,*(undefined8 *)PTR_DAT_057ae0f8,0)
      ;
      uVar4 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,param_1,lVar3,0);
      puVar5 = (undefined8 *)(param_2 + 0xa8);
      *puVar5 = uVar4;
      FUN_012d0d74(puVar5,uVar4);
      return *puVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

