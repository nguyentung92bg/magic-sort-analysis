/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$SetParent
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$SetParent
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850
               (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c33e41 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c33e41 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 10) * 0x10 + 0x138);
        goto LAB_038ac8e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,10);
LAB_038ac8e8:
                    /* WARNING: Could not recover jumptable at 0x038ac8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

