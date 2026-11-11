/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetVariant
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetVariant (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t variant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetVariant
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetVariant
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t variant, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetVariant_248aae8
               (long param_1,int param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  lVar2 = 0x70;
  if (param_2 != 0) {
    lVar2 = 0x78;
  }
  *(int *)(param_1 + 200) = param_2;
  if (param_1 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x68);
    *puVar5 = *(undefined8 *)(param_1 + lVar2);
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

