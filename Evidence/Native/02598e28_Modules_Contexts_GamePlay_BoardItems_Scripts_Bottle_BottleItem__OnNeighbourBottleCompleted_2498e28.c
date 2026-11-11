/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnNeighbourBottleCompleted
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnNeighbourBottleCompleted (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnNeighbourBottleCompleted
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnNeighbourBottleCompleted
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnNeighbourBottleCompleted_2498e28
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam0000000005c2b2e2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b2e2 = 1;
  }
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
      (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
      lVar2 = *(long *)(param_1 + 0x88);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

