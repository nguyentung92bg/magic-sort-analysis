/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$get_IsLongBottle
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__get_IsLongBottle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$get_IsLongBottle
   bool 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__get_IsLongBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__get_IsLongBottle_3dde430
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_057d0c00;
  if ((bRam0000000005c37e46 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0c00);
    bRam0000000005c37e46 = 1;
  }
  lVar3 = *(long *)puVar2;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar2;
  }
  return **(int **)(lVar3 + 0xb8) < iVar1;
}

