/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRendererRegular$$OnRisingAnimationEnd
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererRegular__OnRisingAnimationEnd (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererRegular_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRendererRegular$$OnRisingAnimationEnd
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererRegular__OnRisingAnimationEnd
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererRegular_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRendererRegular__OnRisingAnimationEnd_248a6ac
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000005c2b273 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057d9198);
    bRam0000000005c2b273 = 1;
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationEnd_1e9ef60
            (param_1,0);
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    fVar7 = *(float *)(lVar5 + 0x20);
    fVar8 = *(float *)(lVar5 + 0x24);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar5 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_057d9198,0);
      uVar4 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar7 - fVar8,lVar5,1,0);
      puVar6 = (undefined8 *)(param_1 + 0xc0);
      *puVar6 = uVar4;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

