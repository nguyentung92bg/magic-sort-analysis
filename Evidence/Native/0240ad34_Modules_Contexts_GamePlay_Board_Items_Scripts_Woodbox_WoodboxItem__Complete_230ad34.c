/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, bool isKeyOnQuestionMark, float revealDelay, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0240afc8) */
/* WARNING: Removing unreachable block (ram,0x0240afcc) */
/* WARNING: Removing unreachable block (ram,0x0240b128) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, bool
   isKeyOnQuestionMark, float revealDelay, bool immediate, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Complete_230ad34
               (undefined4 param_1,long param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if ((bRam0000000005c2a674 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_057884b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2a674 = 1;
  }
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_b0 = 0;
  if (*(char *)(param_2 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0x40) = 1;
  if (*(long *)(param_2 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
              (*(long *)(param_2 + 0x50),param_2,0);
    puVar4 = PTR_DAT_057b7918;
    puVar3 = PTR_DAT_057b41c8;
    puVar2 = PTR_DAT_057a7f80;
    puVar1 = PTR_DAT_057605b8;
    if (*(long *)(param_2 + 0x58) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_c8,*(long *)(param_2 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
      puVar5 = PTR_DAT_05805c10;
      uStack_88 = uStack_c0;
      uStack_90 = uStack_c8;
      plStack_80 = plStack_b8;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_90,*(undefined8 *)puVar3), plVar6 = plStack_80,
            (uVar7 & 1) != 0) {
        if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                  (plStack_80,param_2,0);
        if (plVar6[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(plVar6[8],param_2,0);
        (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(puVar5);
          cRam0000000005c230aa = '\x01';
        }
        puVar8 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
        (**(code **)(*plVar6 + 0x1d8))
                  (*puVar8,puVar8[1],puVar8[2],plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        if (plVar6[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_c8,plVar6[0x11],*(undefined8 *)puVar4);
        uStack_a8 = uStack_c0;
        uStack_b0 = uStack_c8;
        plStack_a0 = plStack_b8;
        while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_b0,*(undefined8 *)puVar2), plVar6 = plStack_a0,
              (uVar7 & 1) != 0) {
          if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          (**(code **)(*plStack_a0 + 0x278))(plStack_a0,*(undefined8 *)(*plStack_a0 + 0x280));
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(puVar5);
            cRam0000000005c230aa = '\x01';
          }
          lVar9 = *plVar6;
          puVar8 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
          (**(code **)(lVar9 + 0x1d8))
                    (*puVar8,puVar8[1],puVar8[2],plVar6,*(undefined8 *)(lVar9 + 0x1e0));
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_b0,*(undefined8 *)puVar1);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_90,*(undefined8 *)PTR_DAT_057d0ba8);
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)PTR_DAT_057884b8);
      if (lVar9 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar9,0);
        if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
            (lVar9 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar9 != 0))
           && (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar9,*(undefined8 *)PTR_DAT_0575c3c8), lVar9 != 0)) {
          lVar10 = *(long *)(param_2 + 0x48);
          auVar11 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxAnimationSorting_4002c00
                              (lVar9,0);
          if (lVar10 != 0) {
            Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetSorting_2607ee0
                      (lVar10,auVar11._0_8_,auVar11._8_8_,0);
            if ((param_3 & 1) == 0) {
              param_1 = 0;
            }
            Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__PlayCompleteAnimation_230b1f0
                      (param_1,param_2,param_4 & 1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

