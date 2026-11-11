/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetFrogPathItem
Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetFrogPathItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetFrogPathItem
   Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetFrogPathItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, int32_t
   frogType, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetFrogPathItem_23010d0
                 (undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a610 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3e90);
    bRam0000000005c2a610 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart_2300f88
                             (param_1,3);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057a3e90 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057a3e90)) {
      Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem__Prepare_2f60c54
                (plVar2,param_2,0);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

