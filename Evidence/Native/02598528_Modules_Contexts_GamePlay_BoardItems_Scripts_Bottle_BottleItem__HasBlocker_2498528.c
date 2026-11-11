/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$HasBlocker
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$HasBlocker
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t itemType,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
          (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 02597e10 with catch @ 02598528 */
                    /* catch() { ... } // from try @ 02597da0 with catch @ 0259852c */
                    /* catch() { ... } // from try @ 025980ec with catch @ 02598530
                       catch() { ... } // from try @ 02598274 with catch @ 02598530 */
                    /* catch() { ... } // from try @ 025980c8 with catch @ 02598534 */
                    /* catch() { ... } // from try @ 0259809c with catch @ 02598538 */
  if ((bRam0000000005c2b30e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
                    /* try { // try from 02598554 to 0269856b has its CatchHandler @ 025985a8 */
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b30e = 1;
  }
  puVar1 = PTR_DAT_05802430;
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
                    /* try { // try from 02598570 to 02698573 has its CatchHandler @ 025985a4 */
                    /* try { // try from 02598574 to 0269858f has its CatchHandler @ 02597c9c */
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
                    /* try { // try from 025985b4 to 026985f3 has its CatchHandler @ 02597c9c */
                    /* catch() { ... } // from try @ 0259806c with catch @ 025985b8 */
                    /* catch() { ... } // from try @ 02597ea4 with catch @ 025985c0 */
                    /* catch() { ... } // from try @ 02597e50 with catch @ 025985c4 */
                    /* catch() { ... } // from try @ 02597e70 with catch @ 025985c8
                       catch() { ... } // from try @ 02598234 with catch @ 025985c8 */
                    /* catch() { ... } // from try @ 02597f84 with catch @ 025985cc */
        return 0;
      }
                    /* try { // try from 02598590 to 0269859f has its CatchHandler @ 025985a8 */
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x18) == param_2) {
        return 1;
      }
                    /* catch() { ... } // from try @ 02598570 with catch @ 025985a4 */
      lVar2 = *(long *)(param_1 + 0x88);
                    /* catch() { ... } // from try @ 02598554 with catch @ 025985a8
                       catch() { ... } // from try @ 02598590 with catch @ 025985a8 */
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025985b0 to 026985b3 has its CatchHandler @ 02598650 */
  FUN_012d0ef0();
}

