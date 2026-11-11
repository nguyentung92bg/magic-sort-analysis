/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$TryComplete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__TryComplete (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02714a5c) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$TryComplete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__TryComplete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__TryComplete_261462c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
                    /* try { // try from 02714638 to 0281464b has its CatchHandler @ 02714658 */
                    /* try { // try from 0271464c to 0281466f has its CatchHandler @ 027145f8 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02714638 with catch @ 02714658
                        */
  if ((bRam0000000005c2ba23 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
                    /* try { // try from 02714670 to 02814687 has its CatchHandler @ 027146c0 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
                    /* try { // try from 02714688 to 028146af has its CatchHandler @ 027145f8 */
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
                    /* try { // try from 027146b0 to 028146bf has its CatchHandler @ 027146c0 */
    FUN_012d0dc8(PTR_DAT_05817b98);
                    /* catch() { ... } // from try @ 02714670 with catch @ 027146c0
                       catch() { ... } // from try @ 027146b0 with catch @ 027146c0 */
                    /* try { // try from 027146c4 to 028146c7 has its CatchHandler @ 027146d0 */
    FUN_012d0dc8(PTR_DAT_05768d80);
                    /* try { // try from 027146c8 to 028146d3 has its CatchHandler @ 027145f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027146c4 with catch @ 027146d0
                        */
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_0580f438);
    FUN_012d0dc8(PTR_DAT_05791438);
    FUN_012d0dc8(PTR_DAT_0579fc20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2ba23 = 1;
  }
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x60) + -1;
  *(int *)(param_1 + 0x60) = iVar1;
  puVar2 = PTR_DAT_0579fc20;
  if (iVar1 < 1) {
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_0576aae0;
    if (lVar9 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar9,0);
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) &&
         (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar9,*(undefined8 *)PTR_DAT_0575c3c8), lVar9 != 0)) {
        lVar13 = *(long *)(param_1 + 0x48);
        auVar15 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSafeAnimationSorting_40032cc
                            (lVar9,0);
        if (lVar13 != 0) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetSorting_2615408
                    (lVar13,auVar15._0_8_,auVar15._8_8_);
          if (((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
             (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar9 != 0)) {
            lVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetSafeConfigsForSize_26138c4
                              (lVar9,*(int *)(*(long *)(param_1 + 0x58) + 0x18) + -1);
            if ((*(long *)(param_1 + 0x48) != 0) &&
               (uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteAnimation_2615464
                                   (*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)),
               puVar2 = PTR_DAT_057606c8, lVar9 != 0)) {
              uVar14 = *(undefined4 *)(lVar9 + 0x18);
              lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar13 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar13,param_1,*(undefined8 *)PTR_DAT_05791438,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar14,uVar10,lVar13,0);
                uVar14 = *(undefined4 *)(lVar9 + 0x1c);
                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar9 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar9,param_1,*(undefined8 *)PTR_DAT_0580f438,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar14,uVar10,lVar9,0)
                  ;
                  if (*(long *)(param_1 + 0x50) != 0) {
                    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
                              (*(long *)(param_1 + 0x50),param_1,0);
                    puVar6 = PTR_DAT_057d0ba8;
                    puVar5 = PTR_DAT_057b7918;
                    puVar4 = PTR_DAT_057b41c8;
                    puVar3 = PTR_DAT_057a7f80;
                    puVar2 = PTR_DAT_057605b8;
                    if (*(long *)(param_1 + 0x58) != 0) {
                      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                (&uStack_b8,*(long *)(param_1 + 0x58),
                                 *(undefined8 *)PTR_DAT_05768d80);
                      puVar7 = PTR_DAT_05805c10;
                      uStack_78 = uStack_b0;
                      uStack_80 = uStack_b8;
                      plStack_70 = plStack_a8;
                      while( true ) {
                        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                           (&uStack_80,*(undefined8 *)puVar4);
                        plVar8 = plStack_70;
                        if ((uVar11 & 1) == 0) {
                          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                    (&uStack_80,*(undefined8 *)puVar6);
                          return;
                        }
                        if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                                  (plStack_70,param_1,0);
                        if (plVar8[8] == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                                  (plVar8[8],param_1,0);
                        (**(code **)(*plVar8 + 0x278))(plVar8,*(undefined8 *)(*plVar8 + 0x280));
                        if (cRam0000000005c230aa == '\0') {
                          FUN_012d0dc8(puVar7);
                          cRam0000000005c230aa = '\x01';
                        }
                        puVar12 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                        (**(code **)(*plVar8 + 0x1d8))
                                  (*puVar12,puVar12[1],puVar12[2],plVar8,
                                   *(undefined8 *)(*plVar8 + 0x1e0));
                        if (plVar8[0x11] == 0) break;
                        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                  (&uStack_b8,plVar8[0x11],*(undefined8 *)puVar5);
                        uStack_98 = uStack_b0;
                        uStack_a0 = uStack_b8;
                        plStack_90 = plStack_a8;
                        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                  (&uStack_a0,*(undefined8 *)puVar3),
                              plVar8 = plStack_90, (uVar11 & 1) != 0) {
                          if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          (**(code **)(*plStack_90 + 0x278))
                                    (plStack_90,*(undefined8 *)(*plStack_90 + 0x280));
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(puVar7);
                            cRam0000000005c230aa = '\x01';
                          }
                          lVar9 = *plVar8;
                          puVar12 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                          (**(code **)(lVar9 + 0x1d8))
                                    (*puVar12,puVar12[1],puVar12[2],plVar8,
                                     *(undefined8 *)(lVar9 + 0x1e0));
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                  (&uStack_a0,*(undefined8 *)puVar2);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
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
  else if (*(long *)(param_1 + 0x48) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayProgressAnimation_2614b9c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

