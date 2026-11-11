/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryGetTopNonEmptyCellIndex
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryGetTopNonEmptyCellIndex
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t* result, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
          (long param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if ((bRam0000000005c2b2cd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2cd = 1;
  }
  puVar1 = PTR_DAT_057f2468;
                    /* catch() { ... } // from try @ 025956b4 with catch @ 02595658
                       catch() { ... } // from try @ 025956ec with catch @ 02595658
                       catch() { ... } // from try @ 02595720 with catch @ 02595658
                       catch() { ... } // from try @ 025957a4 with catch @ 02595658 */
  if (*(long *)(param_1 + 0x80) == 0) {
LAB_025956b4:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025956b0 with catch @ 025956b4
                       try { // try from 025956b4 to 026956d3 has its CatchHandler @ 02595658 */
    FUN_012d0ef0();
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x80) + 0x18);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      uVar3 = 0;
      iVar4 = -1;
      goto LAB_025956a0;
    }
                    /* try { // try from 0259567c to 02695683 has its CatchHandler @ 025956b8 */
                    /* try { // try from 02595684 to 026956a3 has its CatchHandler @ 025956bc */
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x80),iVar4,*(undefined8 *)puVar1), lVar2 == 0))
    goto LAB_025956b4;
  } while (*(long *)(lVar2 + 0x20) == 0);
  uVar3 = 1;
LAB_025956a0:
  *param_2 = iVar4;
                    /* try { // try from 025956b0 to 026956b3 has its CatchHandler @ 025956b4 */
  return uVar3;
}

