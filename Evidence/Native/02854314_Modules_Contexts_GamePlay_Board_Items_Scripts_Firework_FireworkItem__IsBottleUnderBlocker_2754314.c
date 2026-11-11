/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$IsBottleUnderBlocker
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__IsBottleUnderBlocker (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$IsBottleUnderBlocker
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__IsBottleUnderBlocker
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__IsBottleUnderBlocker_2754314
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                    (param_2,0);
  if (((((uVar3 & 1) != 0) ||
       (uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                          (param_2,4,0), (uVar3 & 1) != 0)) ||
      (uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                         (param_2,6,0), (uVar3 & 1) != 0)) ||
     (uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                        (param_2,9,0), (uVar3 & 1) != 0)) {
    return 1;
  }
  if ((bRam0000000005c2b30e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380,0x17,0);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b30e = 1;
  }
  puVar1 = PTR_DAT_05802430;
  lVar2 = *(long *)(param_2 + 0x88);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return 0;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar4,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x18) == 0x17) {
        return 1;
      }
      lVar2 = *(long *)(param_2 + 0x88);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

