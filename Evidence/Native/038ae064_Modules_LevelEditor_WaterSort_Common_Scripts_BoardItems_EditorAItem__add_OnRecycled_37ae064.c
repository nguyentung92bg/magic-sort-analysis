/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$add_OnRecycled
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__add_OnRecycled (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this, System_Action_EditorAItem__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$add_OnRecycled
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__add_OnRecycled
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this,
   System_Action_EditorAItem__o* value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__add_OnRecycled_37ae064
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c33e3f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578db30);
    bRam0000000005c33e3f = 1;
  }
  puVar1 = PTR_DAT_0578db30;
  lVar5 = *(long *)(param_1 + 0x10);
  do {
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
    lVar3 = FUN_01351224((long *)(param_1 + 0x10),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

