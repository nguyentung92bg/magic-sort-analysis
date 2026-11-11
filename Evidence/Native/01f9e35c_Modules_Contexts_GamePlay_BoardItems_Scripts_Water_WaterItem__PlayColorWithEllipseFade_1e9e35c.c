/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$PlayColorWithEllipseFade
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayColorWithEllipseFade (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$PlayColorWithEllipseFade
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayColorWithEllipseFade
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   float duration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayColorWithEllipseFade_1e9e35c
               (undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b278 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8,param_3,0);
    FUN_012d0dc8(PTR_DAT_057eeb58);
    FUN_012d0dc8(PTR_DAT_057f6410);
    bRam0000000005c2b278 = 1;
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__KillColorChangeTweens_248b1c8(lVar5)
  ;
  if ((*(long *)(lVar5 + 0x50) != 0) &&
     (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ToggleWaterShape_1e9ebec
                (*(long *)(lVar5 + 0x50),1,0), param_3 != 0)) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayBodyColors_248b3e0
              (*(undefined4 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 0x54),
               *(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_3 + 0x5c),param_1,lVar5);
    if (*(long *)(lVar5 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__FadeInSprite_1e9f124
                (param_1,*(long *)(lVar5 + 0x50),*(undefined8 *)(param_3 + 0x78),0);
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                        (lVar5);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if ((*(long *)(lVar5 + 0x40) != 0) &&
         (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x40),0),
         puVar4 = PTR_DAT_057606c8, lVar7 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
        uVar8 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                          (*(undefined4 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 0x54),
                           *(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_3 + 0x5c),param_1,
                           *(undefined8 *)(lVar5 + 0x40),0);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar4 = PTR_DAT_057eeb58;
        if (lVar7 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar5,*(undefined8 *)PTR_DAT_057f6410,0);
          uVar8 = DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                            (uVar8,lVar7,*(undefined8 *)puVar4);
          puVar9 = (undefined8 *)(lVar5 + 0xc0);
          *puVar9 = uVar8;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

