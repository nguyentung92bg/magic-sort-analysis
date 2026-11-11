/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetShadowItem
Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowItemPart_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetShadowItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetShadowItem
   Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowItemPart_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetShadowItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetShadowItem_2300eec
                 (undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 02400f00 to 02500f0b has its CatchHandler @ 024009ac */
  if ((bRam0000000005c2a60f & 1) == 0) {
                    /* try { // try from 02400f0c to 02500f13 has its CatchHandler @ 02400f20 */
    FUN_012d0dc8(PTR_DAT_057673a8);
                    /* catch() { ... } // from try @ 02400e90 with catch @ 02400f14 */
    bRam0000000005c2a60f = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02400ed8 with catch @ 02400f20
                       catch(type#2 @ 00000000) { ... } // from try @ 02400f0c with catch @ 02400f20
                        */
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart_2300f88
                             (param_1,4);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057673a8 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057673a8)) {
      Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowItemPart__Prepare_2f609a8
                (plVar2,0);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

