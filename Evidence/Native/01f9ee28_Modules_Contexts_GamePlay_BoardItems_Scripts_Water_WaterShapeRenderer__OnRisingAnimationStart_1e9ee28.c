/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$OnRisingAnimationStart
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$OnRisingAnimationStart
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart_1e9ee28
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  
  puVar4 = PTR_DAT_057cb258;
  if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x1c);
  if ((bRam0000000005c28199 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_0576c3a0);
    FUN_012d0dc8(PTR_DAT_057cb258);
    bRam0000000005c28199 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_057cc518;
  if (lVar5 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer___c__DisplayClass49_0___ctor_248a3ec
              (lVar5,0);
    *(long *)(lVar5 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_1);
    puVar8 = (undefined8 *)(lVar5 + 0x18);
    *puVar8 = uVar7;
    FUN_012d0d74(puVar8,uVar7);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ClearTweens_1e9f0a0
              (param_1);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ApplyConfig_1e9ebb0
              (param_1,*puVar8);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244(lVar6,lVar5,*(undefined8 *)PTR_DAT_0576c3a0,0)
      ;
      uVar7 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,uVar9,lVar6,0);
      puVar8 = (undefined8 *)(param_1 + 0xa8);
      *puVar8 = uVar7;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
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

