/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnPouringCompletedToTargetBottle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnPouringCompletedToTargetBottle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnPouringCompletedToTargetBottle
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnPouringCompletedToTargetBottle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnPouringCompletedToTargetBottle_249755c
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000005c2b2db & 1) == 0) {
                    /* try { // try from 0259758c to 0269758f has its CatchHandler @ 025975c8 */
                    /* try { // try from 02597590 to 026975a3 has its CatchHandler @ 025975c4 */
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057605b8);
                    /* try { // try from 025975a4 to 026975ab has its CatchHandler @ 025973c4 */
    FUN_012d0dc8(PTR_DAT_057a7f80);
                    /* try { // try from 025975ac to 026975af has its CatchHandler @ 025975bc */
                    /* try { // try from 025975b0 to 026975b3 has its CatchHandler @ 025975c0 */
                    /* try { // try from 025975b4 to 026975b7 has its CatchHandler @ 025975dc */
    FUN_012d0dc8(PTR_DAT_05817b98);
                    /* try { // try from 025975b8 to 026975bb has its CatchHandler @ 025975c0 */
                    /* catch() { ... } // from try @ 025975ac with catch @ 025975bc
                       try { // try from 025975bc to 026975f3 has its CatchHandler @ 025973c4 */
                    /* catch() { ... } // from try @ 025975b0 with catch @ 025975c0
                       catch() { ... } // from try @ 025975b8 with catch @ 025975c0 */
    FUN_012d0dc8(PTR_DAT_0580dab8);
                    /* catch() { ... } // from try @ 02597590 with catch @ 025975c4 */
                    /* catch() { ... } // from try @ 0259758c with catch @ 025975c8 */
                    /* catch() { ... } // from try @ 025974bc with catch @ 025975cc */
    FUN_012d0dc8(PTR_DAT_057b7918);
                    /* catch() { ... } // from try @ 025974a8 with catch @ 025975d0 */
                    /* catch() { ... } // from try @ 0259749c with catch @ 025975d4 */
                    /* catch() { ... } // from try @ 0259741c with catch @ 025975d8 */
    FUN_012d0dc8(PTR_DAT_057bb678);
                    /* catch() { ... } // from try @ 02597520 with catch @ 025975dc
                       catch() { ... } // from try @ 025975b4 with catch @ 025975dc */
    FUN_012d0dc8(PTR_DAT_057d6d68);
    bRam0000000005c2b2db = 1;
  }
  puVar7 = PTR_DAT_0580dab8;
  puVar6 = PTR_DAT_05807f60;
  puVar5 = PTR_DAT_057d6d68;
  puVar4 = PTR_DAT_057bb678;
  puVar3 = PTR_DAT_057a7f80;
  puVar2 = PTR_DAT_057605b8;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
                    /* try { // try from 025975f4 to 026975f7 has its CatchHandler @ 02597608 */
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_025977d0;
                    /* catch() { ... } // from try @ 025975f4 with catch @ 02597608 */
                    /* try { // try from 02597614 to 0269761f has its CatchHandler @ 02597634 */
                    /* try { // try from 02597620 to 0269762b has its CatchHandler @ 025973c4 */
                    /* try { // try from 0259762c to 02697633 has its CatchHandler @ 02597634 */
                    /* catch() { ... } // from try @ 02597614 with catch @ 02597634
                       catch() { ... } // from try @ 0259762c with catch @ 02597634 */
                    /* try { // try from 02597638 to 02697677 has its CatchHandler @ 02597638
                       catch() { ... } // from try @ 02597638 with catch @ 02597638
                       catch() { ... } // from try @ 025976b4 with catch @ 02597638
                       catch() { ... } // from try @ 025976f0 with catch @ 02597638
                       catch() { ... } // from try @ 0259773c with catch @ 02597638 */
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_057b7918);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  plStack_60 = plStack_78;
  while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar3), plVar8 = plStack_60, (uVar9 & 1) != 0
        ) {
    if (plStack_60 != (long *)0x0) {
                    /* try { // try from 02597678 to 02697687 has its CatchHandler @ 025976f8 */
      bVar1 = *(byte *)(*(long *)puVar7 + 300);
                    /* try { // try from 02597688 to 0269768f has its CatchHandler @ 025976f4 */
      if (((bVar1 <= *(byte *)(*plStack_60 + 300)) &&
          (*(long *)(*(long *)(*plStack_60 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) &&
         (uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete_249784c
                            (param_1), (uVar9 & 1) == 0)) {
                    /* try { // try from 025976a8 to 026976b3 has its CatchHandler @ 025976f0 */
        Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__UnmarkAsBeingFilled_274e5b8
                  (plVar8,param_1,0);
      }
                    /* try { // try from 025976b4 to 026976eb has its CatchHandler @ 02597638 */
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if (((bVar1 <= *(byte *)(*plVar8 + 300)) &&
          (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) &&
         (uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete_249784c
                            (param_1), (uVar9 & 1) == 0)) {
                    /* try { // try from 025976ec to 026976ef has its CatchHandler @ 025976f0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025976a8 with catch @ 025976f0
                       catch(type#1 @ 054cbd58) { ... } // from try @ 025976ec with catch @ 025976f0
                       try { // try from 025976f0 to 0269770f has its CatchHandler @ 02597638 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02597688 with catch @ 025976f4
                        */
        Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__TryPlayToggleAnimation_2609168
                  (plVar8,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02597678 with catch @ 025976f8
                        */
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar2);
  if (*(char *)(param_1 + 0xd8) == '\0') {
                    /* try { // try from 02597710 to 02697713 has its CatchHandler @ 02597724 */
    if (*(long *)(param_1 + 200) == 0) goto LAB_025977d0;
    auVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                        (*(long *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc0),0);
                    /* catch() { ... } // from try @ 02597710 with catch @ 02597724 */
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_025977d0;
                    /* try { // try from 02597730 to 0269773b has its CatchHandler @ 02597750 */
                    /* try { // try from 0259773c to 02697747 has its CatchHandler @ 02597638 */
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
              (*(long *)(param_1 + 0x50),auVar10._0_8_,auVar10._8_8_,0);
  }
                    /* try { // try from 02597748 to 0269774f has its CatchHandler @ 02597750 */
  if (*(long *)(param_1 + 0xb8) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02597730 with catch @ 02597750
                       catch(type#2 @ 00000000) { ... } // from try @ 02597748 with catch @ 02597750
                        */
                    /* try { // try from 02597754 to 02697793 has its CatchHandler @ 02597754
                       catch() { ... } // from try @ 02597754 with catch @ 02597754
                       catch() { ... } // from try @ 025977d0 with catch @ 02597754
                       catch() { ... } // from try @ 02597858 with catch @ 02597754 */
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
              (*(long *)(param_1 + 0xb8),param_2,0);
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar9 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                        (*(long *)(param_1 + 0xb8),0);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0xb0) == 0) goto LAB_025977d0;
        uVar9 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                          (*(long *)(param_1 + 0xb0),0);
        if ((uVar9 & 1) == 0) {
          uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete_249784c
                            (param_1);
          if ((uVar9 & 1) == 0) {
            return;
          }
                    /* try { // try from 025977c4 to 026977cf has its CatchHandler @ 0259780c */
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Complete_249792c(param_1);
          return;
        }
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
                    /* try { // try from 02597794 to 026977a3 has its CatchHandler @ 02597814 */
      UnityEngine_Debug__Log_4087f08(*(undefined8 *)puVar5,0);
                    /* try { // try from 025977b4 to 026977bb has its CatchHandler @ 02597810 */
      return;
    }
  }
LAB_025977d0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025977d0 to 0269782b has its CatchHandler @ 02597754 */
  FUN_012d0ef0();
}

