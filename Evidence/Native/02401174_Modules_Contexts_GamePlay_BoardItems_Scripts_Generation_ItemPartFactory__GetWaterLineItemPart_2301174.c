/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetWaterLineItemPart
Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetWaterLineItemPart (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetWaterLineItemPart
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetWaterLineItemPart
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetWaterLineItemPart_2301174
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a611 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05768790);
    bRam0000000005c2a611 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart_2300f88
                             (param_5,1);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05768790 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05768790)) {
      Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__Prepare_230123c
                (param_1,param_2,param_3,param_4,plVar2);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

