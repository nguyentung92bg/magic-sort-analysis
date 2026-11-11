/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$TryReveal
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$TryReveal
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal_1e90f3c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x40) == '\0')) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Complete_2745ae4
              (lVar5,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_012d0d74((long *)(param_1 + 0x28),0);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x48);
      *(undefined1 *)(lVar5 + 0x54) = 1;
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar5 + 0x58);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__KillColorChangeTweens_248b1c8
                  (lVar6,lVar5,0);
        if ((*(long *)(lVar6 + 0x50) != 0) &&
           (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ToggleWaterShape_1e9ebec
                      (*(long *)(lVar6 + 0x50),1,0), lVar5 != 0)) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__PlayBodyColors_248b3e0
                    (*(undefined4 *)(lVar5 + 0x50),*(undefined4 *)(lVar5 + 0x54),
                     *(undefined4 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x5c),0x3e800000,lVar6);
          lVar6 = *(long *)(lVar6 + 0x50);
          if (lVar6 != 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0(lVar6,0,0);
            }
            uVar8 = *(undefined8 *)(lVar5 + 0x78);
            if ((bRam0000000005c2819b & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057d4a60);
              FUN_012d0dc8(PTR_DAT_057710a8);
              FUN_012d0dc8(PTR_DAT_057815e0);
              FUN_012d0dc8(PTR_DAT_05786bf0);
              FUN_012d0dc8(PTR_DAT_057ac7b0);
              bRam0000000005c2819b = 1;
            }
            plVar9 = (long *)(lVar6 + 0xb0);
            if (*plVar9 != 0) {
              DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar9,0,0);
            }
            puVar4 = PTR_DAT_057d4a60;
            if (*(long *)(lVar6 + 0x28) != 0) {
              UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(lVar6 + 0x28),uVar8,0);
              *(undefined4 *)(lVar6 + 0x18) = 0;
              *(undefined4 *)(lVar6 + 0x1c) = 0;
              *(undefined4 *)(lVar6 + 0x20) = 0;
              *(undefined4 *)(lVar6 + 0x24) = 0x3f800000;
              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__UpdateMaterialProperties_1e9e9b0
                        (lVar6);
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              puVar4 = PTR_DAT_057710a8;
              if (lVar5 != 0) {
                DG_Tweening_Core_DOGetter_Color____ctor_156c9ec
                          (lVar5,lVar6,*(undefined8 *)PTR_DAT_05786bf0,0);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                puVar4 = PTR_DAT_057815e0;
                if (lVar7 != 0) {
                  DG_Tweening_Core_DOSetter_Color____ctor_156da1c
                            (lVar7,lVar6,*(undefined8 *)PTR_DAT_057ac7b0,0);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  lVar5 = DG_Tweening_DOTween__To_1ed8b94
                                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3e800000,lVar5,
                                     lVar7,0);
                  *plVar9 = lVar5;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

