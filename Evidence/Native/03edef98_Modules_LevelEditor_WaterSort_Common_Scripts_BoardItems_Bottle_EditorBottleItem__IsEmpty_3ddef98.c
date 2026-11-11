/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$IsEmpty
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsEmpty (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$IsEmpty
   bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsEmpty
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsEmpty_3ddef98
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c37e4e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e76e8);
    FUN_012d0dc8(PTR_DAT_057f6ca8);
    bRam0000000005c37e4e = 1;
  }
  puVar1 = PTR_DAT_057f6ca8;
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return 1;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x20) != 0) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x60);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

