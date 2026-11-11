/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateWaterOrderComponents
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateWaterOrderComponents
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000005c2b2ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ec = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar3 < 0) {
                    /* catch() { ... } // from try @ 0259671c with catch @ 02596704
                       catch() { ... } // from try @ 0259674c with catch @ 02596704
                       catch() { ... } // from try @ 02596788 with catch @ 02596704 */
      return;
    }
    lVar5 = 0;
    iVar4 = -1;
    do {
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      lVar2 = *(long *)(lVar2 + 0x20);
      if ((lVar2 != 0) && (lVar2 != lVar5)) {
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0x50) = iVar4;
        lVar5 = lVar2;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x80);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

