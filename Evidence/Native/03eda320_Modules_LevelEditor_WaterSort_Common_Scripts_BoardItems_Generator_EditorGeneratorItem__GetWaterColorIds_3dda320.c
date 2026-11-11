/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$GetWaterColorIds
System_Collections_Generic_List_ColorId__o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetWaterColorIds (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$GetWaterColorIds
   System_Collections_Generic_List_ColorId__o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetWaterColorIds
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this,
   const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetWaterColorIds_3dda320
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_05805bc0;
  if ((bRam0000000005c37e21 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_057e6ca8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c37e21 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 == 0) {
    if (lVar2 == 0) goto LAB_03eda3c8;
    System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar2,*(undefined8 *)PTR_DAT_057b99d0)
    ;
  }
  else {
    if (lVar2 == 0) {
LAB_03eda3c8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_Int32Enum____ctor_2051418
              (lVar2,lVar3,*(undefined8 *)PTR_DAT_057e6ca8);
  }
  return lVar2;
}

