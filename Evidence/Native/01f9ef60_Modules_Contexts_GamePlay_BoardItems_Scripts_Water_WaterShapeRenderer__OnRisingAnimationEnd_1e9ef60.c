/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$OnRisingAnimationEnd
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationEnd (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$OnRisingAnimationEnd
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationEnd
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationEnd_1e9ef60
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__EndRisingAnimation_1e9ef90
                      (*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x20));
    puVar5 = (undefined8 *)(param_1 + 0xb8);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

