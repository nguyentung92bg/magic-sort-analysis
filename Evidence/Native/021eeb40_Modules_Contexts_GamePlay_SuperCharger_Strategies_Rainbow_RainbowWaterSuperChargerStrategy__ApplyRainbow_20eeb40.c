/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$ApplyRainbow
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__ApplyRainbow (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


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
/* WARNING: Removing unreachable block (ram,0x0258b048) */
/* WARNING: Removing unreachable block (ram,0x0258b050) */
/* WARNING: Removing unreachable block (ram,0x0258b05c) */
/* WARNING: Removing unreachable block (ram,0x021ef524) */
/* WARNING: Removing unreachable block (ram,0x021ef548) */
/* WARNING: Removing unreachable block (ram,0x0418e334) */
/* WARNING: Removing unreachable block (ram,0x0418e348) */
/* WARNING: Removing unreachable block (ram,0x021ef55c) */
/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$ApplyRainbow
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__ApplyRainbow
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__ApplyRainbow_20eeb40
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(char *)(lVar7 + 0x55) == '\x01') {
    return;
  }
  lVar6 = *(long *)(lVar7 + 0x48);
  *(undefined1 *)(lVar7 + 0x55) = 1;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,1,0);
  }
  if ((bRam0000000005c2b27e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8,1,1,0);
    FUN_012d0dc8(PTR_DAT_0576e2b8);
    bRam0000000005c2b27e = 1;
  }
  uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                     (lVar6);
  puVar4 = PTR_DAT_057815e0;
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(lVar6 + 0x90);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2974b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0);
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_057c2298);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c2974b = 1;
  }
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
            (lVar7);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar5 = PTR_DAT_057c2298;
  puVar4 = PTR_DAT_0576d090;
  lVar6 = *(long *)(lVar7 + 0x18);
  if (lVar6 != 0) {
    if (*(long *)(lVar7 + 0x28) == 0) goto LAB_021ef300;
    lVar12 = *(long *)(*(long *)(lVar7 + 0x28) + 0x20);
    if (lVar12 != 0) {
      iVar13 = 0;
      do {
        if ((*(int *)(lVar6 + 0x18) <= iVar13) || (*(int *)(lVar12 + 0x18) <= iVar13))
        goto LAB_021ef2cc;
        uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar13,*(undefined8 *)puVar5);
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha_20ef304
                  (0);
        uVar14 = System_Collections_Generic_List_float___get_Item_1d70b20
                           (lVar12,iVar13,*(undefined8 *)puVar4);
        if (*(long *)(lVar7 + 0x28) == 0) break;
        uVar9 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (uVar14,*(undefined4 *)(*(long *)(lVar7 + 0x28) + 0x18),uVar9,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar8,uVar9,0);
        lVar6 = *(long *)(lVar7 + 0x18);
        iVar13 = iVar13 + 1;
      } while (lVar6 != 0);
      goto LAB_021ef300;
    }
  }
LAB_021ef2cc:
  if (*(long *)(lVar7 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar7 + 0x20),1,0);
    puVar11 = (undefined8 *)(lVar7 + 0x30);
    *puVar11 = uVar8;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
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

