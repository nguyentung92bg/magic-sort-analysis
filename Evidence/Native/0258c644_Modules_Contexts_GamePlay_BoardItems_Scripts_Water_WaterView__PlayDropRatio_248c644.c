/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$PlayDropRatio
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayDropRatio (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, float duration, int32_t currentHeight, int32_t nextHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$PlayDropRatio
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayDropRatio
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, float duration, int32_t
   currentHeight, int32_t nextHeight, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayDropRatio_248c644
          (undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_057cc518;
  lVar2 = *(long *)(param_2 + 0x88);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b286 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057f65b8);
    FUN_012d0dc8(PTR_DAT_057d52e8);
    bRam0000000005c2b286 = 1;
  }
  *(undefined1 *)(lVar2 + 0x60) = 1;
  *(undefined4 *)(lVar2 + 0x50) = 0;
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057f65b8;
  if (lVar3 != 0) {
    DG_Tweening_TweenCallback_float____ctor_341f244(lVar3,lVar2,*(undefined8 *)PTR_DAT_057d52e8,0);
    uVar4 = DG_Tweening_DOVirtual__Float_1edbb8c
                      (0x3f800000,(float)param_4 / (float)param_3,param_1,lVar3,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                      (uVar4,1,*(undefined8 *)puVar1);
    puVar5 = (undefined8 *)(lVar2 + 0x58);
    *puVar5 = uVar4;
    FUN_012d0d74(puVar5);
    return *puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

