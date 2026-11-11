/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ResetPositionAfterMegaShuffle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ResetPositionAfterMegaShuffle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ResetPositionAfterMegaShuffle
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ResetPositionAfterMegaShuffle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ResetPositionAfterMegaShuffle_249dd40
               (long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  if ((bRam0000000005c2b31a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057df9a0);
    bRam0000000005c2b31a = 1;
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  puVar3 = PTR_DAT_05802430;
  puVar2 = PTR_DAT_057df9a0;
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return;
      }
      plVar5 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar4,iVar6,*(undefined8 *)puVar3);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__ResetViewRotation_27459a8
                    (plVar5,0);
        }
      }
      lVar4 = param_1[0x11];
      iVar6 = iVar6 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

