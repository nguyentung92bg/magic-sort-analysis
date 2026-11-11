/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$SetAsRainbow
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetAsRainbow (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$SetAsRainbow
   void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetAsRainbow
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetAsRainbow_20ef190
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  
  puVar4 = PTR_DAT_057815e0;
  if ((bRam0000000005c2974b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_057c2298);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c2974b = 1;
  }
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
            (param_1);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar5 = PTR_DAT_057c2298;
  puVar4 = PTR_DAT_0576d090;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_021ef300;
    lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    if (lVar10 != 0) {
      iVar11 = 0;
      do {
        if ((*(int *)(lVar8 + 0x18) <= iVar11) || (*(int *)(lVar10 + 0x18) <= iVar11))
        goto LAB_021ef2cc;
        uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar11,*(undefined8 *)puVar5);
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha_20ef304
                  (0);
        uVar12 = System_Collections_Generic_List_float___get_Item_1d70b20
                           (lVar10,iVar11,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x28) == 0) break;
        uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (uVar12,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18),uVar7,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
        lVar8 = *(long *)(param_1 + 0x18);
        iVar11 = iVar11 + 1;
      } while (lVar8 != 0);
      goto LAB_021ef300;
    }
  }
LAB_021ef2cc:
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),1,0);
    puVar9 = (undefined8 *)(param_1 + 0x30);
    *puVar9 = uVar6;
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
LAB_021ef300:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

