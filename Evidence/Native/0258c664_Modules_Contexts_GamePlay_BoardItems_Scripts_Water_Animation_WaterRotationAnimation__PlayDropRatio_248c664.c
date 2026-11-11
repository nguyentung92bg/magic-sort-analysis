/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$PlayDropRatio
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__PlayDropRatio (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this, float duration, float currentHeight, float nextHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$PlayDropRatio
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__PlayDropRatio
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this,
   float duration, float currentHeight, float nextHeight, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__PlayDropRatio_248c664
          (undefined8 param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_057cc518;
  if ((bRam0000000005c2b286 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057f65b8);
    FUN_012d0dc8(PTR_DAT_057d52e8);
    bRam0000000005c2b286 = 1;
  }
  *(undefined1 *)(param_4 + 0x60) = 1;
  *(undefined4 *)(param_4 + 0x50) = 0;
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057f65b8;
  if (lVar2 != 0) {
    DG_Tweening_TweenCallback_float____ctor_341f244(lVar2,param_4,*(undefined8 *)PTR_DAT_057d52e8,0)
    ;
    uVar3 = DG_Tweening_DOVirtual__Float_1edbb8c(0x3f800000,param_3 / param_2,param_1,lVar2,0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                      (uVar3,1,*(undefined8 *)puVar1);
    puVar4 = (undefined8 *)(param_4 + 0x58);
    *puVar4 = uVar3;
    FUN_012d0d74(puVar4);
    return *puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

