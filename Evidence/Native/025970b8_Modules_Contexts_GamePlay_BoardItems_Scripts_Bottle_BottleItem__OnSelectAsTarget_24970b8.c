/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnSelectAsTarget
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnSelectAsTarget (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnSelectAsTarget
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnSelectAsTarget
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnSelectAsTarget_24970b8
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
                    /* try { // try from 025970b8 to 026970c3 has its CatchHandler @ 02597160 */
                    /* try { // try from 025970d0 to 026970d3 has its CatchHandler @ 02597154 */
                    /* try { // try from 025970d4 to 02697137 has its CatchHandler @ 02597020 */
  if ((bRam0000000005c2b2d9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0580dab8);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2b2d9 = 1;
  }
  puVar4 = PTR_DAT_0580dab8;
  puVar3 = PTR_DAT_057a7f80;
  puVar2 = PTR_DAT_057605b8;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 02597138 to 0269713b has its CatchHandler @ 02597150 */
                    /* try { // try from 0259713c to 02697143 has its CatchHandler @ 02597020 */
                    /* try { // try from 02597144 to 0269714b has its CatchHandler @ 0259714c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02597144 with catch @ 0259714c
                       try { // try from 0259714c to 02697177 has its CatchHandler @ 02597020 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02597138 with catch @ 02597150
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025970d0 with catch @ 02597154
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02597074 with catch @ 02597158
                        */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_057b7918);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025970a8 with catch @ 0259715c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025970b8 with catch @ 02597160
                        */
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (plStack_38 != (long *)0x0) {
                    /* try { // try from 02597178 to 0269717b has its CatchHandler @ 02597188 */
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
                    /* catch() { ... } // from try @ 02597178 with catch @ 02597188 */
                    /* try { // try from 02597194 to 0269719f has its CatchHandler @ 025971b4 */
        if ((bVar1 <= *(byte *)(*plStack_38 + 300)) &&
           (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
                    /* try { // try from 025971a0 to 026971ab has its CatchHandler @ 02597020 */
          Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__MarkAsBeingFilled_274e4e0
                    (plStack_38,param_1,0);
                    /* try { // try from 025971ac to 026971b3 has its CatchHandler @ 025971b4 */
        }
      }
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02597194 with catch @ 025971b4
                       catch(type#2 @ 00000000) { ... } // from try @ 025971ac with catch @ 025971b4
                        */
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0xb8) != 0) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                (*(long *)(param_1 + 0xb8),param_2,0);
      if (*(long *)(param_1 + 200) != 0) {
        auVar6 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSelectedBottleTargetSorting_40028f8
                           (*(long *)(param_1 + 200),0);
        if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 025971f0 to 026972a3 has its CatchHandler @ 025971f0
                       catch() { ... } // from try @ 025971f0 with catch @ 025971f0
                       catch() { ... } // from try @ 02597324 with catch @ 025971f0
                       catch() { ... } // from try @ 02597368 with catch @ 025971f0
                       catch() { ... } // from try @ 025973ac with catch @ 025971f0 */
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
                    (*(long *)(param_1 + 0x50),auVar6._0_8_,auVar6._8_8_,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

