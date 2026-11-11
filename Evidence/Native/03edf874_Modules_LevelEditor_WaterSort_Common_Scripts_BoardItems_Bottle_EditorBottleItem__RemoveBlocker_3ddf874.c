/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$RemoveBlocker
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$RemoveBlocker
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem_o* item, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf874
               (long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000005c37e59 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576b6e0);
    bRam0000000005c37e59 = 1;
  }
  puVar1 = PTR_DAT_0576b6e0;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_List_object___Remove_21fe044
              (*(long *)(param_1 + 0x68),param_2,*(undefined8 *)PTR_DAT_0576b6e0);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (System_Collections_Generic_List_object___Remove_21fe044
                  (*(long *)(param_1 + 0x70),param_2,*(undefined8 *)puVar1), param_2 != (long *)0x0)
       ) {
      plVar2 = (long *)param_2[4];
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(0,0);
      }
      (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
      (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      lVar3 = param_2[2];
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x038a3890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),param_2,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

