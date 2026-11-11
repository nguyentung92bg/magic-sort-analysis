/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleMove
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleMove (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t pourableHeight, bool isLeft, float moveDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleMove
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleMove
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t
   pourableHeight, bool isLeft, float moveDuration, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleMove_2496ab4
          (undefined8 param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  if ((bRam0000000005c2b2d7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2d7 = 1;
  }
  puVar3 = PTR_DAT_05802430;
  puVar2 = PTR_DAT_057f2468;
  lVar4 = *(long *)(param_2 + 0x80);
  if (lVar4 != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar10) {
        if (*(long *)(param_2 + 200) != 0) {
          auVar15 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                              (*(long *)(param_2 + 200),5,0);
          if (*(long *)(param_2 + 0x50) != 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
                      (*(long *)(param_2 + 0x50),auVar15._0_8_,auVar15._8_8_,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters_2496c48
                      (param_2,param_4 & 1);
            lVar4 = *(long *)(param_2 + 0x88);
            if (lVar4 != 0) {
              iVar10 = 0;
              goto LAB_02596bc4;
            }
          }
        }
        break;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar10,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__OnBottleMove_1e90dbc
                (param_1,lVar4,param_3,param_4 & 1,0);
      lVar4 = *(long *)(param_2 + 0x80);
      iVar10 = iVar10 + 1;
    } while (lVar4 != 0);
  }
  goto LAB_02596c08;
  while( true ) {
    (**(code **)(*plVar5 + 0x228))
              (param_1,plVar5,param_3,param_4 & 1,*(undefined8 *)(*plVar5 + 0x230));
    lVar4 = *(long *)(param_2 + 0x88);
    iVar10 = iVar10 + 1;
    if (lVar4 == 0) break;
LAB_02596bc4:
    puVar2 = PTR_DAT_057e34f0;
    uVar1 = _UNK_04339bf8;
                    /* try { // try from 02596bc8 to 02696c1f has its CatchHandler @ 02596bc8
                       catch() { ... } // from try @ 02596bc8 with catch @ 02596bc8
                       catch() { ... } // from try @ 02596d1c with catch @ 02596bc8
                       catch() { ... } // from try @ 02596e0c with catch @ 02596bc8
                       catch() { ... } // from try @ 02596e88 with catch @ 02596bc8 */
    if (*(int *)(lVar4 + 0x18) <= iVar10) {
      lVar4 = *(long *)(param_2 + 0xe0);
      if (lVar4 == 0) {
        return 0;
      }
      lVar8 = *(long *)(lVar4 + 0x28);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(lVar4,0);
      }
      uVar6 = *(undefined8 *)(lVar8 + 0x20);
      uVar11 = *(undefined4 *)(lVar8 + 0x48);
      uVar12 = *(undefined4 *)(lVar8 + 0x4c);
      uVar13 = *(undefined4 *)(lVar8 + 0x50);
      uVar14 = *(undefined4 *)(lVar8 + 0x54);
      if ((bRam0000000005c322ad & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057d4a60,0);
        FUN_012d0dc8(PTR_DAT_057710a8);
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_05798d68);
        FUN_012d0dc8(PTR_DAT_057db880);
        FUN_012d0dc8(PTR_DAT_058020d8);
        FUN_012d0dc8(PTR_DAT_057e34f0);
        bRam0000000005c322ad = 1;
      }
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_057d4a60;
      if (lVar4 != 0) {
        System_Object___ctor_23dfe5c(lVar4,0);
        puVar9 = (undefined8 *)(lVar4 + 0x10);
        *puVar9 = uVar6;
        FUN_012d0d74(puVar9,uVar6);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_057710a8;
        if (lVar8 != 0) {
          DG_Tweening_Core_DOGetter_Color____ctor_156c9ec
                    (lVar8,lVar4,*(undefined8 *)PTR_DAT_057db880,0);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar3 = PTR_DAT_05798d68;
          puVar2 = PTR_DAT_057815e0;
          if (lVar7 != 0) {
            DG_Tweening_Core_DOSetter_Color____ctor_156da1c
                      (lVar7,lVar4,*(undefined8 *)PTR_DAT_058020d8,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar6 = DG_Tweening_DOTween__To_1ed8b94(uVar11,uVar12,uVar13,uVar14,uVar1,lVar8,lVar7,0)
            ;
            DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                      (uVar6,*puVar9,*(undefined8 *)puVar3);
            return uVar6;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    plVar5 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar4,iVar10,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) break;
  }
LAB_02596c08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

