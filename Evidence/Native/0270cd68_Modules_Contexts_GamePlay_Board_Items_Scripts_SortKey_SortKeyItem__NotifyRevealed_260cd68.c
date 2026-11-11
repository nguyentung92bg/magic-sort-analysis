/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$NotifyRevealed
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__NotifyRevealed (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$NotifyRevealed
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__NotifyRevealed
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__NotifyRevealed_260cd68
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  lVar8 = *(long *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x41) = 1;
  puVar1 = PTR_DAT_05819bb0;
  if (lVar8 == 0) {
    return;
  }
  if ((bRam0000000005c29754 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e45e0,param_1,0);
    FUN_012d0dc8(PTR_DAT_057a8378);
    FUN_012d0dc8(PTR_DAT_057dc458);
    FUN_012d0dc8(PTR_DAT_0580a980);
    FUN_012d0dc8(PTR_DAT_0576a4f8);
    FUN_012d0dc8(PTR_DAT_05819488);
    FUN_012d0dc8(PTR_DAT_057d6240);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0575a550);
    FUN_012d0dc8(PTR_DAT_05819bb0);
    bRam0000000005c29754 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 == 0) {
LAB_021f0208:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Object___ctor_23dfe5c(lVar5,0);
  *(long *)(lVar5 + 0x10) = lVar8;
  FUN_012d0d74((long *)(lVar5 + 0x10),lVar8);
  if ((*(char *)(lVar8 + 0x4c) == '\0') && (*(char *)(lVar8 + 0x49) == '\0')) {
    if (*(long *)(lVar8 + 0x38) == 0) goto LAB_021f0208;
    if (*(int *)(*(long *)(lVar8 + 0x38) + 0x18) != 0) {
      if ((*(long *)(lVar8 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10), lVar6 == 0)) goto LAB_021f0208;
      uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionCleared_2d94c3c
                        (lVar6,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy__GetKeysToMerge_20f05b8
                          (lVar8);
        plVar9 = (long *)(lVar5 + 0x18);
        *plVar9 = lVar6;
        FUN_012d0d74(plVar9,lVar6);
        uVar7 = Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy__AreAllKeysReady_20f0800
                          (*plVar9);
        if ((uVar7 & 1) != 0) {
          *(undefined1 *)(lVar8 + 0x49) = 1;
          if ((*plVar9 != 0) && (*(long *)(lVar8 + 0x38) != 0)) {
            System_Collections_Generic_List_object___RemoveRange_21fe3b8
                      (*(long *)(lVar8 + 0x38),0,*(undefined4 *)(*plVar9 + 0x18),
                       *(undefined8 *)PTR_DAT_0576a4f8);
            if (*plVar9 != 0) {
              lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*plVar9,0,*(undefined8 *)PTR_DAT_057d6240);
              puVar4 = PTR_DAT_057e45e0;
              puVar3 = PTR_DAT_057a8378;
              puVar2 = PTR_DAT_057606c8;
              puVar1 = PTR_DAT_0575a550;
              if (*plVar9 != 0) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_88,*plVar9,*(undefined8 *)PTR_DAT_0580a980);
                plVar9 = (long *)(lVar5 + 0x20);
                uStack_68 = uStack_80;
                uStack_70 = uStack_88;
                lStack_60 = lStack_78;
                while( true ) {
                  while( true ) {
                    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_70,*(undefined8 *)puVar3);
                    if ((uVar7 & 1) == 0) {
                      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                (&uStack_70,*(undefined8 *)puVar4);
                      return;
                    }
                    if (lStack_60 == lVar8) break;
                    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayMoveToCenterAnimation_260cf0c
                              (lStack_60,0,0);
                  }
                  lVar6 = *plVar9;
                  if (lVar6 == 0) {
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar5,*(undefined8 *)puVar1,0);
                    *plVar9 = lVar6;
                    FUN_012d0d74(plVar9,lVar6);
                  }
                  if (lVar8 == 0) break;
                  Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayMoveToCenterAnimation_260cf0c
                            (lVar8,lVar6,0);
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
          }
          goto LAB_021f0208;
        }
      }
      else {
        Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy__UnlockKeys_20f02a0
                  (uVar7,*(undefined8 *)(lVar8 + 0x38));
        Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy__DisappearAllPendingKeys_20f0434
                  (lVar8);
      }
    }
  }
  return;
}

