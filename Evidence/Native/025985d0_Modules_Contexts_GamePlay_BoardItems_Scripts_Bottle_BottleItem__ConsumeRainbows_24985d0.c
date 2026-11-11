/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ConsumeRainbows
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeRainbows (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ConsumeRainbows
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeRainbows
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeRainbows_24985d0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
                    /* catch() { ... } // from try @ 02598018 with catch @ 025985d0 */
                    /* catch() { ... } // from try @ 02597fb8 with catch @ 025985d4 */
                    /* catch() { ... } // from try @ 02597ee4 with catch @ 025985d8 */
  if ((bRam0000000005c2b2e0 & 1) == 0) {
                    /* try { // try from 025985f4 to 0269860b has its CatchHandler @ 02598640 */
    FUN_012d0dc8(PTR_DAT_05770628);
    FUN_012d0dc8(PTR_DAT_0580dde8);
                    /* try { // try from 0259860c to 0269862f has its CatchHandler @ 02597c9c */
    FUN_012d0dc8(PTR_DAT_0580e8a8);
    FUN_012d0dc8(PTR_DAT_057c19f8);
    bRam0000000005c2b2e0 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
                    /* try { // try from 02598630 to 0269863f has its CatchHandler @ 02598640 */
  lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside_2498734
                    (param_1);
  puVar2 = PTR_DAT_0580dde8;
  puVar1 = PTR_DAT_05770628;
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 025985f4 with catch @ 02598640
                       catch() { ... } // from try @ 02598630 with catch @ 02598640 */
                    /* try { // try from 02598644 to 02698647 has its CatchHandler @ 02598650 */
                    /* try { // try from 02598648 to 02698653 has its CatchHandler @ 02597c9c */
                    /* catch() { ... } // from try @ 025985b0 with catch @ 02598650
                       catch() { ... } // from try @ 02598644 with catch @ 02598650 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,lVar3,*(undefined8 *)PTR_DAT_057c19f8);
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_28 == 0) break;
      lVar3 = *(long *)(lStack_28 + 0x10);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x55) != '\0')) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860(lVar3,0,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

