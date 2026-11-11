/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetBlobItemPart
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetBlobItemPart (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetBlobItemPart
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetBlobItemPart
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, int32_t
   sortOrder, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetBlobItemPart_2301258
               (undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a612 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05806d78);
    bRam0000000005c2a612 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart_2300f88
                             (param_1,2);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05806d78 + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05806d78)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288();
    }
    if (plVar2[5] != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

