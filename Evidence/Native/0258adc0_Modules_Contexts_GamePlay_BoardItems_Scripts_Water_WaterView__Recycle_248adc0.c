/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$Recycle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Recycle (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258b014) */
/* WARNING: Removing unreachable block (ram,0x0258b088) */
/* WARNING: Removing unreachable block (ram,0x0258b09c) */
/* WARNING: Removing unreachable block (ram,0x021ef33c) */
/* WARNING: Removing unreachable block (ram,0x021ef368) */
/* WARNING: Removing unreachable block (ram,0x021ef3b8) */
/* WARNING: Removing unreachable block (ram,0x021ef3d4) */
/* WARNING: Removing unreachable block (ram,0x021ef3d8) */
/* WARNING: Removing unreachable block (ram,0x021ef3ec) */
/* WARNING: Removing unreachable block (ram,0x021ef414) */
/* WARNING: Removing unreachable block (ram,0x021ef424) */
/* WARNING: Removing unreachable block (ram,0x021ef4a0) */
/* WARNING: Removing unreachable block (ram,0x021ef42c) */
/* WARNING: Removing unreachable block (ram,0x021ef458) */
/* WARNING: Removing unreachable block (ram,0x021ef464) */
/* WARNING: Removing unreachable block (ram,0x0258b01c) */
/* WARNING: Removing unreachable block (ram,0x021ef190) */
/* WARNING: Removing unreachable block (ram,0x021ef1b8) */
/* WARNING: Removing unreachable block (ram,0x021ef1fc) */
/* WARNING: Removing unreachable block (ram,0x021ef210) */
/* WARNING: Removing unreachable block (ram,0x021ef214) */
/* WARNING: Removing unreachable block (ram,0x021ef228) */
/* WARNING: Removing unreachable block (ram,0x021ef230) */
/* WARNING: Removing unreachable block (ram,0x021ef238) */
/* WARNING: Removing unreachable block (ram,0x021ef24c) */
/* WARNING: Removing unreachable block (ram,0x021ef258) */
/* WARNING: Removing unreachable block (ram,0x021ef264) */
/* WARNING: Removing unreachable block (ram,0x021ef298) */
/* WARNING: Removing unreachable block (ram,0x021ef2c8) */
/* WARNING: Removing unreachable block (ram,0x021ef2cc) */
/* WARNING: Removing unreachable block (ram,0x012d0d74) */
/* WARNING: Removing unreachable block (ram,0x0138e090) */
/* WARNING: Removing unreachable block (ram,0x0138e0b8) */
/* WARNING: Removing unreachable block (ram,0x0138e0c0) */
/* WARNING: Removing unreachable block (ram,0x0138e0c8) */
/* WARNING: Removing unreachable block (ram,0x021ef300) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$Recycle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Recycle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Recycle_248adc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000005c2b276 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2b276 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    uVar9 = *(undefined4 *)(lVar4 + 0xc);
    uVar8 = *(undefined4 *)(lVar4 + 0x10);
    uVar7 = *(undefined4 *)(lVar4 + 0x14);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_0258ae8c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,7);
LAB_0258ae8c:
    (*(code *)*puVar1)(uVar9,uVar8,uVar7,plVar6,puVar1[1]);
    if (*(long *)(param_1 + 0x88) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__Dispose_248aee8
                ();
    }
    plVar6 = *(long **)(param_1 + 0x80);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      if ((bRam0000000005c2b27e & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_0576e2b8);
        bRam0000000005c2b27e = 1;
      }
      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                        (param_1);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
           lVar2 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
          lVar2 = *(long *)(param_1 + 0x90);
          if (lVar2 != 0) {
            Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
                      (lVar2,0,0);
            Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas_20ef560
                      (lVar2);
            lVar2 = *(long *)(lVar2 + 0x20);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar2,0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

