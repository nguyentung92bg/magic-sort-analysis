/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ShouldComplete
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ShouldComplete
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

byte Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete_249784c
               (long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 0259784c to 02697857 has its CatchHandler @ 0259786c */
                    /* try { // try from 02597858 to 02697863 has its CatchHandler @ 02597754 */
                    /* try { // try from 02597864 to 0269786b has its CatchHandler @ 0259786c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259784c with catch @ 0259786c
                       catch(type#2 @ 00000000) { ... } // from try @ 02597864 with catch @ 0259786c
                        */
                    /* try { // try from 02597870 to 026978af has its CatchHandler @ 02597870
                       catch() { ... } // from try @ 02597870 with catch @ 02597870
                       catch() { ... } // from try @ 025978dc with catch @ 02597870
                       catch() { ... } // from try @ 02597914 with catch @ 02597870
                       catch() { ... } // from try @ 0259795c with catch @ 02597870 */
  if (((*(char *)(param_1 + 0x4d) != '\0') && (*(char *)(param_1 + 0x4c) == '\0')) &&
     (uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                        (param_1), (uVar4 & 1) == 0)) {
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_1);
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar5 + 0x40);
    }
    if (iVar3 == *(int *)(param_1 + 0x48)) {
                    /* try { // try from 025978b0 to 026978bf has its CatchHandler @ 0259791c */
      bVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible_2498edc
                        (param_1);
    }
    else {
      bVar1 = 0;
    }
    if (*(long *)(param_1 + 0xd0) == 0) {
LAB_02597928:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                      (*(long *)(param_1 + 0xd0),0);
    if ((uVar4 & 1) == 0) goto LAB_02597878;
                    /* try { // try from 025978d4 to 026978db has its CatchHandler @ 02597918 */
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_1);
                    /* try { // try from 025978dc to 0269790f has its CatchHandler @ 02597870 */
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_1 + 0xd0);
      uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                        (lVar5,0);
      if (lVar6 == 0) goto LAB_02597928;
      iVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCount_2f6c1dc
                        (lVar6,uVar2,0);
      if ((bVar1 & 1) != 0) {
        if (iVar3 == *(int *)(param_1 + 0x48)) {
                    /* try { // try from 02597910 to 02697913 has its CatchHandler @ 02597914 */
          bVar1 = 1;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02597910 with catch @ 02597914
                       try { // try from 02597914 to 02697933 has its CatchHandler @ 02597870 */
        }
        else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025978d4 with catch @ 02597918
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025978b0 with catch @ 0259791c
                        */
          bVar1 = *(char *)(param_1 + 0xec) != '\0';
        }
        goto LAB_02597878;
      }
    }
  }
  bVar1 = 0;
LAB_02597878:
  return bVar1 & 1;
}

