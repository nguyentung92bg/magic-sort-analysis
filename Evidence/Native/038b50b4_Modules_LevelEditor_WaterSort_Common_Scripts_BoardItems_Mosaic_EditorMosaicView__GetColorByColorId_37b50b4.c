/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$GetColorByColorId
UnityEngine_Color_o Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__GetColorByColorId (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$GetColorByColorId
   UnityEngine_Color_o
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__GetColorByColorId
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this,
   int32_t colorId, const MethodInfo* method); */

undefined4
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__GetColorByColorId_37b50b4
          (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33e85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33e85 = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
      (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar2,*(undefined8 *)PTR_DAT_057d5610), lVar2 != 0)) &&
     (lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                        (lVar2,param_2,0), lVar2 != 0)) {
    return *(undefined4 *)(lVar2 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

