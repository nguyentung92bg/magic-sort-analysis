/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$HasBlocker
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasBlocker (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$HasBlocker
   bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasBlocker
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   int32_t itemType, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasBlocker_3ddf498
          (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c37e55 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b1718);
    FUN_012d0dc8(PTR_DAT_057f8600);
    bRam0000000005c37e55 = 1;
  }
  puVar1 = PTR_DAT_057f8600;
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return 0;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x18) == param_2) {
        return 1;
      }
      lVar2 = *(long *)(param_1 + 0x68);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

