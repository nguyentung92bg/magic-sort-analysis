/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleCompleted
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleCompleted (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02598d08) */
/* WARNING: Removing unreachable block (ram,0x02598d0c) */
/* WARNING: Removing unreachable block (ram,0x02598d94) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleCompleted
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleCompleted
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleCompleted_24989f4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000005c2b2e1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b2e1 = 1;
  }
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_70 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    auVar16 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                        (*(long *)(param_1 + 200),0,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
                (*(long *)(param_1 + 0x50),auVar16._0_8_,auVar16._8_8_,0);
      plVar9 = *(long **)(param_1 + 0x58);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
      }
      plVar9 = *(long **)(param_1 + 0x60);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
      }
      lVar14 = *(long *)(param_1 + 0xd0);
      lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                         (param_1);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) == 0)) {
        uVar12 = 0xc;
      }
      else {
        uVar12 = *(undefined4 *)(*(long *)(lVar10 + 0x58) + 0x70);
      }
      if (lVar14 != 0) {
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnBottleCompleted_2f6ae18
                  (lVar14,param_1,uVar12,0);
        uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                           (param_1,5);
        if (((uVar11 & 1) == 0) &&
           (uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                               (param_1,8), (uVar11 & 1) == 0)) {
          uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                            (param_1,0x18);
        }
        else {
          uVar8 = 1;
        }
        lVar14 = *(long *)(param_1 + 0x50);
        uVar12 = *(undefined4 *)(param_1 + 0x48);
        lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                           (param_1);
        if (lVar10 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar10 + 0x58);
        }
        if (*(long *)(param_1 + 200) != 0) {
          auVar16 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                              (*(long *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc0),0);
          if (lVar14 != 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnFilled_22fc370
                      (lVar14,uVar12,uVar15,auVar16._0_8_,auVar16._8_8_,uVar8 & 1,0);
            puVar7 = PTR_DAT_05802430;
            puVar6 = PTR_DAT_057f9000;
            puVar5 = PTR_DAT_057e1088;
            puVar4 = PTR_DAT_057db9e8;
            puVar3 = PTR_DAT_05795370;
            puVar2 = PTR_DAT_057822a8;
            puVar1 = PTR_DAT_05763bd8;
            lVar10 = *(long *)(param_1 + 0x88);
            if (lVar10 != 0) {
              iVar13 = 0;
              do {
                if (*(int *)(lVar10 + 0x18) <= iVar13) {
                  if (*(long *)(param_1 + 0x80) != 0) {
                    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                              (&uStack_a8,*(long *)(param_1 + 0x80),*(undefined8 *)puVar2);
                    uStack_68 = uStack_a0;
                    uStack_70 = uStack_a8;
                    plStack_60 = plStack_98;
                    while( true ) {
                      uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                         (&uStack_70,*(undefined8 *)puVar5);
                      if ((uVar11 & 1) == 0) {
                        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                  (&uStack_70,*(undefined8 *)puVar3);
                        return;
                      }
                      if (plStack_60 == (long *)0x0) break;
                      if (plStack_60[7] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                (&uStack_a8,plStack_60[7],*(undefined8 *)puVar4);
                      uStack_88 = uStack_a0;
                      uStack_90 = uStack_a8;
                      plStack_80 = plStack_98;
                      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                (&uStack_90,*(undefined8 *)puVar1),
                            (uVar11 & 1) != 0) {
                        if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        (**(code **)(*plStack_80 + 0x248))
                                  (plStack_80,*(undefined8 *)(*plStack_80 + 0x250));
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                (&uStack_90,*(undefined8 *)puVar6);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  break;
                }
                plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar10,iVar13,*(undefined8 *)puVar7);
                if (plVar9 == (long *)0x0) break;
                (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
                lVar10 = *(long *)(param_1 + 0x88);
                iVar13 = iVar13 + 1;
              } while (lVar10 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

