/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$OnSelectionBackgroundHideEnd
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__OnSelectionBackgroundHideEnd (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$OnSelectionBackgroundHideEnd
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__OnSelectionBackgroundHideEnd
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__OnSelectionBackgroundHideEnd_1e92c2c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000005c28143 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c28143 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar6 = 0;
      do {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,iVar6,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_01f92d44;
        if (0 < *(int *)(lVar3 + 0x18)) {
          iVar7 = 0;
          do {
            lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar3,iVar7,*(undefined8 *)puVar2);
            if (lVar4 == 0) goto LAB_01f92d44;
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnShuffleDeselected_2495b7c
                      (lVar4,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnRevealDeselected_2495d1c
                      (lVar4,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar3 + 0x18));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar5 + 0x18));
    }
    return;
  }
LAB_01f92d44:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

