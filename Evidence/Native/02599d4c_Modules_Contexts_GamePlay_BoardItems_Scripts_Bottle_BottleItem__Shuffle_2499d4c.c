/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$Shuffle
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Shuffle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, System_Collections_Generic_List_WaterAndColor__o* colorOrders, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$Shuffle
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Shuffle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   System_Collections_Generic_List_WaterAndColor__o* colorOrders, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Shuffle_2499d4c
          (long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  
  puVar2 = PTR_DAT_057c5fd8;
  if ((bRam0000000005c2b2fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0577ed88);
    FUN_012d0dc8(PTR_DAT_05784a78);
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057bcb60);
    FUN_012d0dc8(PTR_DAT_05795a20);
    FUN_012d0dc8(PTR_DAT_057a4ff8);
    FUN_012d0dc8(PTR_DAT_057c5fd8);
    FUN_012d0dc8(PTR_DAT_05818d58);
    bRam0000000005c2b2fc = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057815e0;
  if (lVar4 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass118_0___ctor_22f9c1c
              (lVar4,0);
    *(long *)(lVar4 + 0x10) = (long)param_1;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_1);
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x18),param_2);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_1,9);
    lVar13 = param_1[10];
    plVar7 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                               (param_1,0);
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_02599ef0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575a2d8,4);
LAB_02599ef0:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_0578afb0;
      puVar2 = PTR_DAT_057606c8;
      if (lVar13 != 0) {
        if ((uVar6 & 1) == 0) {
          uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimation_22fcf14
                            (lVar13,0);
          lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar13 != 0) && (param_1 != (long *)0x0)) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar13,param_1,*(undefined8 *)(*param_1 + 0x1d0),0);
            uVar9 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                              (uVar9,lVar13,*(undefined8 *)puVar3);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar9,0);
            if ((param_1[10] != 0) && (lVar13 = *(long *)(param_1[10] + 0x90), lVar13 != 0)) {
              uVar14 = *(undefined4 *)(lVar13 + 0x70);
              lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if (lVar13 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar13,lVar4,*(undefined8 *)PTR_DAT_05795a20,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar14,uVar5,lVar13,0);
                return uVar5;
              }
            }
          }
        }
        else {
          uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimationForGenerator_22fd6f8
                            ();
          lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar13 != 0) && (param_1 != (long *)0x0)) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar13,param_1,*(undefined8 *)(*param_1 + 0x1d0),0);
            uVar9 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                              (uVar9,lVar13,*(undefined8 *)puVar3);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar9,0);
            if ((param_1[10] != 0) && (lVar13 = *(long *)(param_1[10] + 0x98), lVar13 != 0)) {
              uVar14 = *(undefined4 *)(lVar13 + 0x70);
              lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_05818d58;
              if (lVar13 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar13,lVar4,*(undefined8 *)PTR_DAT_057a4ff8,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar14,uVar5,lVar13,0);
                lVar4 = *(long *)puVar2;
                lVar13 = param_1[0x11];
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar4 = *(long *)puVar2;
                }
                puVar3 = PTR_DAT_05784a78;
                lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
                if (lVar10 == 0) {
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar4 = *(long *)puVar2;
                  }
                  uVar9 = **(undefined8 **)(lVar4 + 0xb8);
                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                  if (lVar10 == 0) goto LAB_0259a16c;
                  System_Func_object__bool____ctor_338137c
                            (lVar10,uVar9,*(undefined8 *)PTR_DAT_057bcb60,0);
                  plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
                  *plVar7 = lVar10;
                  FUN_012d0d74(plVar7,lVar10);
                }
                plVar7 = (long *)System_Linq_Enumerable__FirstOrDefault_object__24215ac
                                           (lVar13,lVar10,*(undefined8 *)PTR_DAT_0577ed88);
                if (plVar7 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_057d99c8 + 300);
                  if ((bVar1 <= *(byte *)(*plVar7 + 300)) &&
                     (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)PTR_DAT_057d99c8)) {
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayShuffleAnimation_2750a74
                              (plVar7,0);
                  }
                }
                return uVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_0259a16c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

