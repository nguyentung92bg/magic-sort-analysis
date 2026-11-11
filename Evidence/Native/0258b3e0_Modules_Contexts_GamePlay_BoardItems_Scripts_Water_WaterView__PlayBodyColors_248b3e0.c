/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$PlayBodyColors
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayBodyColors (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, UnityEngine_Color_o color, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$PlayBodyColors
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayBodyColors
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, UnityEngine_Color_o
   color, float duration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayBodyColors_248b3e0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c(*(undefined8 *)(param_6 + 0x20),0);
  *(undefined8 *)(param_6 + 0x98) = uVar4;
  FUN_012d0d74();
  uVar4 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                    (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + 0x28),0);
  *(undefined8 *)(param_6 + 0xa0) = uVar4;
  FUN_012d0d74();
  uVar4 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                    (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + 0x30),0);
  *(undefined8 *)(param_6 + 0xa8) = uVar4;
  FUN_012d0d74();
  uVar4 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                    (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + 0x38),0);
  *(undefined8 *)(param_6 + 0xb0) = uVar4;
  FUN_012d0d74();
  uVar4 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                    (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + 0x48),0);
  puVar5 = (undefined8 *)(param_6 + 0xb8);
  *puVar5 = uVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

