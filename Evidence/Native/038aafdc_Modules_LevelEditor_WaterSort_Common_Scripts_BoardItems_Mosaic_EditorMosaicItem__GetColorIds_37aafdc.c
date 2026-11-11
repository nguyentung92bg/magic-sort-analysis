/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$GetColorIds
System_Collections_Generic_List_ColorId__o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__GetColorIds (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$GetColorIds
   System_Collections_Generic_List_ColorId__o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__GetColorIds
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const
   MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__GetColorIds_37aafdc
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_05805bc0;
  if ((bRam0000000005c33e7c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6ca8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c33e7c = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_Int32Enum____ctor_2051418
              (lVar2,uVar3,*(undefined8 *)PTR_DAT_057e6ca8);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

