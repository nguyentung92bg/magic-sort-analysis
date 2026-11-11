/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsEmpty
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsEmpty
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
                    /* try { // try from 0259578c to 0269579b has its CatchHandler @ 0259579c */
  if ((bRam0000000005c2b2f7 & 1) == 0) {
                    /* catch() { ... } // from try @ 025956d4 with catch @ 0259579c
                       catch() { ... } // from try @ 02595708 with catch @ 0259579c
                       catch() { ... } // from try @ 0259578c with catch @ 0259579c */
    FUN_012d0dc8(PTR_DAT_05780fc0);
                    /* try { // try from 025957a0 to 026957a3 has its CatchHandler @ 025957ac */
                    /* try { // try from 025957a4 to 026957af has its CatchHandler @ 02595658 */
    FUN_012d0dc8(PTR_DAT_057f2468);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025957a0 with catch @ 025957ac
                        */
    bRam0000000005c2b2f7 = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return 1;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x20) != 0) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x80);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

