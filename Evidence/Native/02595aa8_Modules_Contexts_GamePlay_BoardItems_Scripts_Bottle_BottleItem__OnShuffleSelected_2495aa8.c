/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnShuffleSelected
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnShuffleSelected (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnShuffleSelected
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnShuffleSelected
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnShuffleSelected_2495aa8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000005c2b2d0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b2d0 = 1;
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  if (*(long *)(param_1 + 200) != 0) {
    auVar5 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                       (*(long *)(param_1 + 200),*(int *)(param_1 + 0xc0) + 10,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
                (*(long *)(param_1 + 0x50),auVar5._0_8_,auVar5._8_8_,0);
      puVar1 = PTR_DAT_05802430;
      lVar2 = *(long *)(param_1 + 0x88);
      if (lVar2 != 0) {
        iVar4 = 0;
        do {
          if (*(int *)(lVar2 + 0x18) <= iVar4) {
            return;
          }
          plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar2,iVar4,*(undefined8 *)puVar1);
          if (plVar3 == (long *)0x0) break;
          (**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
          lVar2 = *(long *)(param_1 + 0x88);
          iVar4 = iVar4 + 1;
        } while (lVar2 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

