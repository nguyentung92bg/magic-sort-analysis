/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetRainbow
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, bool isRainbow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258b048) */
/* WARNING: Removing unreachable block (ram,0x0258b050) */
/* WARNING: Removing unreachable block (ram,0x0258b05c) */
/* WARNING: Removing unreachable block (ram,0x021ef524) */
/* WARNING: Removing unreachable block (ram,0x021ef548) */
/* WARNING: Removing unreachable block (ram,0x0418e334) */
/* WARNING: Removing unreachable block (ram,0x0418e348) */
/* WARNING: Removing unreachable block (ram,0x021ef55c) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetRainbow
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, bool isRainbow, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860
               (long param_1,byte param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uStack_48;
  
  if (*(byte *)(param_1 + 0x55) == (param_2 & 1)) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x55) = param_2 & 1;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b27e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8,param_2 & 1,1,0);
    FUN_012d0dc8(PTR_DAT_0576e2b8);
    bRam0000000005c2b27e = 1;
  }
  uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                    (lVar6);
  puVar4 = PTR_DAT_057815e0;
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar12 = *(long *)(lVar6 + 0x90);
  if ((param_2 & 1) == 0) {
    lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if ((lVar11 != 0) &&
       (DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,lVar6,*(undefined8 *)PTR_DAT_0576e2b8,0),
       puVar4 = PTR_DAT_057815e0, lVar12 != 0)) {
      if ((bRam0000000005c2974c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0,lVar11,0);
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
      uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
      puVar5 = PTR_DAT_057fbae0;
      puVar4 = PTR_DAT_057936b8;
      if (*(long *)(lVar12 + 0x18) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_48,*(long *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_0579f3e8);
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_48,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
          if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar8 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                            (0,*(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x18),0,0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar8,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar4);
      }
      DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                (uVar7,lVar11,*(undefined8 *)PTR_DAT_0579e470);
      *(undefined8 *)(lVar12 + 0x30) = uVar7;
      FUN_012d0d74((undefined8 *)(lVar12 + 0x30),uVar7);
      return;
    }
LAB_0258b0d8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
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
  uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar5 = PTR_DAT_057c2298;
  puVar4 = PTR_DAT_0576d090;
  lVar6 = *(long *)(lVar12 + 0x18);
  if (lVar6 != 0) {
    if (*(long *)(lVar12 + 0x28) == 0) goto LAB_021ef300;
    lVar11 = *(long *)(*(long *)(lVar12 + 0x28) + 0x20);
    if (lVar11 != 0) {
      iVar13 = 0;
      do {
        if ((*(int *)(lVar6 + 0x18) <= iVar13) || (*(int *)(lVar11 + 0x18) <= iVar13))
        goto LAB_021ef2cc;
        uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar13,*(undefined8 *)puVar5);
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha_20ef304
                  (0);
        uVar14 = System_Collections_Generic_List_float___get_Item_1d70b20
                           (lVar11,iVar13,*(undefined8 *)puVar4);
        if (*(long *)(lVar12 + 0x28) == 0) break;
        uVar8 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (uVar14,*(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x18),uVar8,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar8,0);
        lVar6 = *(long *)(lVar12 + 0x18);
        iVar13 = iVar13 + 1;
      } while (lVar6 != 0);
      goto LAB_021ef300;
    }
  }
LAB_021ef2cc:
  if (*(long *)(lVar12 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar12 + 0x20),1,0);
    puVar10 = (undefined8 *)(lVar12 + 0x30);
    *puVar10 = uVar7;
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

