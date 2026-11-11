/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayWaterFillAnimationFromBottom
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayWaterFillAnimationFromBottom (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t insertedHeight, int32_t newHeight, int32_t colorId, bool withParticle, bool isForGenerator, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayWaterFillAnimationFromBottom
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayWaterFillAnimationFromBottom
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t
   insertedHeight, int32_t newHeight, int32_t colorId, bool withParticle, bool isForGenerator, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayWaterFillAnimationFromBottom_249a670
          (long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  uint in_w5;
  long *plVar14;
  
  puVar3 = PTR_DAT_05796230;
  if ((bRam0000000005c2b314 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057e7c00);
    FUN_012d0dc8(PTR_DAT_05815cb8);
    FUN_012d0dc8(PTR_DAT_057e07d8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057e84b8);
    FUN_012d0dc8(PTR_DAT_05796230);
    FUN_012d0dc8(PTR_DAT_057c8568);
    FUN_012d0dc8(PTR_DAT_05792588);
    bRam0000000005c2b314 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar5 = PTR_DAT_057e07d8;
  puVar3 = PTR_DAT_057815e0;
  if (lVar7 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass149_0___ctor_22f9cfc
              (lVar7,0);
    *(long *)(lVar7 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar7 + 0x18),param_1);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar9 != 0) {
      System_Collections_Generic_HashSet_object____ctor_200a670
                (lVar9,*(undefined8 *)PTR_DAT_05815cb8);
      puVar3 = PTR_DAT_057f2468;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x80),0,*(undefined8 *)PTR_DAT_057f2468),
         puVar5 = PTR_DAT_057e7c00, lVar10 != 0)) {
        plVar14 = (long *)(lVar7 + 0x10);
        *plVar14 = *(long *)(lVar10 + 0x20);
        FUN_012d0d74(plVar14);
        if (*plVar14 != 0) {
          System_Collections_Generic_HashSet_object___Add_200b82c
                    (lVar9,*plVar14,*(undefined8 *)puVar5);
          lVar10 = *plVar14;
          if (lVar10 == 0) goto LAB_0259aa04;
          uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayRise_1e9e5e8
                             (lVar10,*(int *)(lVar10 + 0x40) - param_2,*(int *)(lVar10 + 0x40),0,
                              *(undefined4 *)(param_1 + 0x48),in_w5 & 1,0);
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          if (lVar10 == 0) goto LAB_0259aa04;
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar10,lVar7,*(undefined8 *)PTR_DAT_057e84b8,0);
          uVar11 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                             (uVar11,lVar10,*(undefined8 *)PTR_DAT_0578afb0);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar8,uVar11,0);
        }
        puVar4 = PTR_DAT_05792588;
        lVar10 = *(long *)(param_1 + 0x80);
        iVar1 = param_2;
        while (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) <= iVar1) {
            return uVar8;
          }
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if (lVar10 == 0) break;
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass149_1___ctor_22f9d38
                    (lVar10,0);
          *(long *)(lVar10 + 0x20) = lVar7;
          FUN_012d0d74((long *)(lVar10 + 0x20),lVar7);
          if ((*(long *)(param_1 + 0x80) == 0) ||
             (lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar3),
             lVar12 == 0)) break;
          lVar12 = *(long *)(lVar12 + 0x20);
          if ((lVar12 != 0) &&
             (uVar13 = System_Collections_Generic_HashSet_object___Add_200b82c
                                 (lVar9,lVar12,*(undefined8 *)puVar5), (uVar13 & 1) != 0)) {
            iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                              (param_1,lVar12);
            iVar2 = *(int *)(lVar12 + 0x40);
            plVar14 = (long *)(lVar10 + 0x10);
            *plVar14 = lVar12;
            FUN_012d0d74(plVar14,lVar12);
            lVar12 = *plVar14;
            *(int *)(lVar10 + 0x18) = iVar6;
            if (lVar12 == 0) break;
            uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayRise_1e9e5e8
                               (lVar12,(iVar6 - param_2) + iVar2,*(undefined4 *)(lVar12 + 0x40),
                                iVar6,*(undefined4 *)(param_1 + 0x48),in_w5 & 1,0);
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar12 == 0) break;
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar12,lVar10,*(undefined8 *)PTR_DAT_057c8568,0);
            uVar11 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                               (uVar11,lVar12,*(undefined8 *)PTR_DAT_0578afb0);
            DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar8,uVar11,0);
          }
          iVar1 = iVar1 + 1;
          lVar10 = *(long *)(param_1 + 0x80);
        }
      }
    }
  }
LAB_0259aa04:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

