/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$Progress
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Progress (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$Progress
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Progress
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, bool immediate, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Progress_2f5ac7c
               (long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if ((bRam0000000005c308d0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe628);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_0575b768);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057cb760);
    bRam0000000005c308d0 = 1;
  }
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  if ((bRam0000000005c308d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c308d5 = 1;
  }
  puVar5 = PTR_DAT_057b43e8;
  lVar8 = *(long *)(param_1 + 0x58);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
    iVar2 = *(int *)(lVar8 + 0x18) + -1;
    lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar8,iVar2,*(undefined8 *)PTR_DAT_057b43e8);
    if (lVar8 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                (lVar8,param_1,0);
      if (((*(long *)(param_1 + 0x58) != 0) &&
          (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)puVar5), lVar8 != 0))
         && (*(long *)(lVar8 + 0x40) != 0)) {
        Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                  (*(long *)(lVar8 + 0x40),param_1,0);
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)puVar5),
           plVar9 != (long *)0x0)) {
          (**(code **)(*plVar9 + 0x278))(plVar9,*(undefined8 *)(*plVar9 + 0x280));
          if (*(long *)(param_1 + 0x58) != 0) {
            plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)puVar5);
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            puVar7 = PTR_DAT_05805c10;
            if (plVar9 != (long *)0x0) {
              puVar12 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
              (**(code **)(*plVar9 + 0x1d8))
                        (*puVar12,puVar12[1],puVar12[2],plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (((*(long *)(param_1 + 0x58) != 0) &&
                  (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)puVar5),
                  puVar6 = PTR_DAT_057fe628, puVar4 = PTR_DAT_057a7f80, puVar3 = PTR_DAT_057605b8,
                  lVar8 != 0)) && (*(long *)(lVar8 + 0x88) != 0)) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_a8,*(long *)(lVar8 + 0x88),*(undefined8 *)PTR_DAT_057b7918);
                uStack_88 = uStack_a0;
                uStack_90 = uStack_a8;
                plStack_80 = plStack_98;
                while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                          (&uStack_90,*(undefined8 *)puVar4), plVar9 = plStack_80,
                      (uVar10 & 1) != 0) {
                  if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  (**(code **)(*plStack_80 + 0x278))
                            (plStack_80,*(undefined8 *)(*plStack_80 + 0x280));
                  if (cRam0000000005c230aa == '\0') {
                    FUN_012d0dc8(puVar7);
                    cRam0000000005c230aa = '\x01';
                  }
                  lVar8 = *plVar9;
                  puVar12 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                  (**(code **)(lVar8 + 0x1d8))
                            (*puVar12,puVar12[1],puVar12[2],plVar9,*(undefined8 *)(lVar8 + 0x1e0));
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_90,*(undefined8 *)puVar3);
                uVar13 = 0;
                if (((param_2 & 1) == 0) &&
                   ((*(long *)(param_1 + 0x70) == 0 ||
                    (uVar10 = DG_Tweening_TweenExtensions__IsActive_1edefd4
                                        (*(long *)(param_1 + 0x70),0), uVar13 = 0, (uVar10 & 1) == 0
                    )))) {
                  uVar13 = _UNK_04397c88;
                }
                if (*(long *)(param_1 + 0x58) != 0) {
                  uVar1 = *(undefined4 *)(param_1 + 0x68);
                  uVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)puVar5);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
                  if (lVar8 != 0) {
                    System_Object___ctor_23dfe5c(lVar8,0);
                    *(undefined8 *)(lVar8 + 0x20) = uVar11;
                    *(int *)(lVar8 + 0x10) = iVar2;
                    *(undefined4 *)(lVar8 + 0x14) = uVar1;
                    *(undefined4 *)(lVar8 + 0x18) = uVar13;
                    FUN_012d0d74((undefined8 *)(lVar8 + 0x20),uVar11);
                    if (*(long *)(param_1 + 0x58) != 0) {
                      System_Collections_Generic_List_object___RemoveAt_21fe320
                                (*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)PTR_DAT_0575b768);
                      if (*(long *)(param_1 + 0x90) != 0) {
                        System_Collections_Generic_Queue_object___Enqueue_3368ec8
                                  (*(long *)(param_1 + 0x90),lVar8,*(undefined8 *)PTR_DAT_057cb760);
                        return;
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
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

