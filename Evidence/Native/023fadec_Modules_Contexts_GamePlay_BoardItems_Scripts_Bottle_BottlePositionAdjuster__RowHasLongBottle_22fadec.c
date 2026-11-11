/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$RowHasLongBottle
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__RowHasLongBottle (System_Collections_Generic_List_BottleItem__o* row, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$RowHasLongBottle
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__RowHasLongBottle
   (System_Collections_Generic_List_BottleItem__o* row, const MethodInfo* method); */

byte Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__RowHasLongBottle_22fadec
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2a5ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
                    /* try { // try from 023fae3c to 024fae4b has its CatchHandler @ 023fae4c */
    bRam0000000005c2a5ee = 1;
  }
  puVar2 = PTR_DAT_057d0ba8;
  puVar1 = PTR_DAT_057b41c8;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* catch() { ... } // from try @ 023fadc8 with catch @ 023fae4c
                       catch() { ... } // from try @ 023fae3c with catch @ 023fae4c */
                    /* try { // try from 023fae50 to 024fae53 has its CatchHandler @ 023fae5c */
                    /* try { // try from 023fae54 to 024fae5f has its CatchHandler @ 023facd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fae50 with catch @ 023fae5c
                        */
                    /* try { // try from 023fae60 to 024fb16f has its CatchHandler @ 023fae60
                       catch() { ... } // from try @ 023fae60 with catch @ 023fae60
                       catch() { ... } // from try @ 023fb260 with catch @ 023fae60
                       catch() { ... } // from try @ 023fb324 with catch @ 023fae60
                       catch() { ... } // from try @ 023fb3c0 with catch @ 023fae60 */
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_38,param_1,*(undefined8 *)PTR_DAT_05768d80);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_38,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      bVar4 = 0;
      iVar5 = 5;
      goto LAB_023faea8;
    }
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while (*(char *)(lStack_28 + 0xec) == '\0');
  bVar4 = 1;
  iVar5 = 4;
LAB_023faea8:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_38,*(undefined8 *)puVar2);
  return iVar5 == 4 & bVar4;
}

