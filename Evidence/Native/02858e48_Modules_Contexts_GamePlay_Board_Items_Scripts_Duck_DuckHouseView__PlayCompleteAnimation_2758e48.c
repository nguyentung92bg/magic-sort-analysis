/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$PlayCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, System_Collections_Generic_List_BottleItem__o* bottleItems, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$PlayCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this,
   System_Collections_Generic_List_BottleItem__o* bottleItems, bool immediate, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__PlayCompleteAnimation_2758e48
          (long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_057c0918;
  if ((bRam0000000005c2c738 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057e7848);
    FUN_012d0dc8(PTR_DAT_05807168);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_0580d9a8);
    FUN_012d0dc8(PTR_DAT_057b0e18);
    FUN_012d0dc8(PTR_DAT_057f21a0);
    FUN_012d0dc8(PTR_DAT_05778320);
    FUN_012d0dc8(PTR_DAT_0580fcd8);
    FUN_012d0dc8(PTR_DAT_05790270);
    FUN_012d0dc8(PTR_DAT_057c0918);
    FUN_012d0dc8(PTR_DAT_05786458);
    bRam0000000005c2c738 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView___c__DisplayClass36_0___ctor_2f5287c
              (lVar3,0);
    *(long *)(lVar3 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_1);
    plVar8 = (long *)(lVar3 + 0x20);
    *plVar8 = param_2;
    FUN_012d0d74(plVar8,param_2);
    *(undefined1 *)(param_1 + 0xc0) = 1;
    puVar1 = PTR_DAT_057fc1d0;
    puVar2 = PTR_DAT_057815e0;
    if ((*plVar8 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      lVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetDuckHouseConfigBySize_2756640
                        (*(long *)(param_1 + 0x28),*(int *)(*plVar8 + 0x18) + -1);
      plVar7 = (long *)(lVar3 + 0x28);
      *plVar7 = lVar4;
      FUN_012d0d74(plVar7,lVar4);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar5,uVar6,*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05786458;
      if (*plVar8 != 0) {
        *(int *)(lVar3 + 0x18) = *(int *)(*plVar8 + 0x18) + -1;
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar4 = *(long *)puVar2;
        }
        puVar1 = PTR_DAT_057606c8;
        lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar9 == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar4 = *(long *)puVar2;
          }
          uVar6 = **(undefined8 **)(lVar4 + 0xb8);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar9 == 0) goto LAB_028592c8;
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,uVar6,*(undefined8 *)PTR_DAT_0580d9a8,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar8 = lVar9;
          FUN_012d0d74(plVar8,lVar9);
        }
        uVar10 = 0;
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar9,0);
        if ((param_3 & 1) == 0) {
          if (*plVar7 == 0) goto LAB_028592c8;
          uVar10 = *(undefined4 *)(*plVar7 + 0x20);
        }
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_057b0e18,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar10,uVar5,lVar4,0);
          uVar10 = 0;
          if ((param_3 & 1) == 0) {
            if (*plVar7 == 0) goto LAB_028592c8;
            uVar10 = *(undefined4 *)(*plVar7 + 0x1c);
          }
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_057f21a0,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar10,uVar5,lVar4,0);
            if ((param_3 & 1) != 0) {
              return uVar5;
            }
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c);
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar4 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar4,param_1,*(undefined8 *)PTR_DAT_05807168,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar10,uVar5,lVar4,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x38);
                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar4 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar4,param_1,*(undefined8 *)PTR_DAT_057e7848,0);
                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                              (uVar10,uVar5,lVar4,0);
                    if (*(long *)(param_1 + 0x28) != 0) {
                      uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x60);
                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar4 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar4,lVar3,*(undefined8 *)PTR_DAT_05778320,0);
                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                  (uVar10,uVar5,lVar4,0);
                        if (*(long *)(param_1 + 0x28) != 0) {
                          uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50);
                          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                          if (lVar4 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar4,lVar3,*(undefined8 *)PTR_DAT_0580fcd8,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (uVar10,uVar5,lVar4,0);
                            if (*(long *)(param_1 + 0x28) != 0) {
                              uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x88);
                              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                              if (lVar4 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar4,lVar3,*(undefined8 *)PTR_DAT_05790270,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (uVar10,uVar5,lVar4,0);
                                return uVar5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_028592c8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

