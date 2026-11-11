/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$UpdateRainbow
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__UpdateRainbow (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, bool isRainbow, bool animated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$UpdateRainbow
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__UpdateRainbow
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, bool isRainbow, bool
   animated, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__UpdateRainbow_248afc0
               (long param_1,uint param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uStack_48;
  
  if ((bRam0000000005c2b27e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0576e2b8);
    bRam0000000005c2b27e = 1;
  }
  uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                    (param_1);
  puVar4 = PTR_DAT_057815e0;
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar12 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
       lVar12 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar12,0,0);
      lVar12 = *(long *)(param_1 + 0x90);
      if (lVar12 != 0) {
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
                  (lVar12,param_2 & 1,0);
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas_20ef560
                  (lVar12);
        lVar12 = *(long *)(lVar12 + 0x20);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar12,param_2 & 1);
        return;
      }
    }
LAB_0258b0d8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar12 = *(long *)(param_1 + 0x90);
  if ((param_2 & 1) == 0) {
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if ((lVar9 != 0) &&
       (DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,param_1,*(undefined8 *)PTR_DAT_0576e2b8,0),
       puVar4 = PTR_DAT_057815e0, lVar12 != 0)) {
      if ((bRam0000000005c2974c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0,lVar9,0);
        FUN_012d0dc8(PTR_DAT_057936b8);
        FUN_012d0dc8(PTR_DAT_057fbae0);
        FUN_012d0dc8(PTR_DAT_05795d58);
        FUN_012d0dc8(PTR_DAT_0579f3e8);
        FUN_012d0dc8(PTR_DAT_0579e470);
        bRam0000000005c2974c = 1;
      }
      uStack_48 = 0;
      Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
                (lVar12);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
      puVar5 = PTR_DAT_057fbae0;
      puVar4 = PTR_DAT_057936b8;
      if (*(long *)(lVar12 + 0x18) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_48,*(long *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_0579f3e8);
        while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_48,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
          if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                            (0,*(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x18),0,0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar4);
      }
      DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                (uVar6,lVar9,*(undefined8 *)PTR_DAT_0579e470);
      *(undefined8 *)(lVar12 + 0x30) = uVar6;
      FUN_012d0d74((undefined8 *)(lVar12 + 0x30),uVar6);
      return;
    }
    goto LAB_0258b0d8;
  }
  if (lVar12 == 0) goto LAB_0258b0d8;
  if ((bRam0000000005c2974b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0);
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_057c2298);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c2974b = 1;
  }
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
            (lVar12);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar5 = PTR_DAT_057c2298;
  puVar4 = PTR_DAT_0576d090;
  lVar9 = *(long *)(lVar12 + 0x18);
  if (lVar9 != 0) {
    if (*(long *)(lVar12 + 0x28) == 0) goto LAB_021ef300;
    lVar11 = *(long *)(*(long *)(lVar12 + 0x28) + 0x20);
    if (lVar11 != 0) {
      iVar13 = 0;
      do {
        if ((*(int *)(lVar9 + 0x18) <= iVar13) || (*(int *)(lVar11 + 0x18) <= iVar13))
        goto LAB_021ef2cc;
        uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar13,*(undefined8 *)puVar5);
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha_20ef304
                  (0);
        uVar14 = System_Collections_Generic_List_float___get_Item_1d70b20
                           (lVar11,iVar13,*(undefined8 *)puVar4);
        if (*(long *)(lVar12 + 0x28) == 0) break;
        uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (uVar14,*(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x18),uVar7,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
        lVar9 = *(long *)(lVar12 + 0x18);
        iVar13 = iVar13 + 1;
      } while (lVar9 != 0);
      goto LAB_021ef300;
    }
  }
LAB_021ef2cc:
  if (*(long *)(lVar12 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar12 + 0x20),1,0);
    puVar10 = (undefined8 *)(lVar12 + 0x30);
    *puVar10 = uVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
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

