/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawDeterBottle
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDeterBottle (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawDeterBottle
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDeterBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, int32_t height, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDeterBottle_37a60dc
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  *(undefined1 *)(param_3 + 0x68) = 1;
  if (*(long *)(param_3 + 0x48) != 0) {
    lVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBottle_37a7514
                      (param_1,param_2,0);
    if ((lVar1 != 0) && (0 < param_4)) {
      iVar3 = 0;
      do {
        if (*(long *)(param_3 + 0x90) == 0) goto LAB_038a616c;
        lVar4 = *(long *)(param_3 + 0x48);
        lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetBlackColorAndColorId_2307e58
                          (*(long *)(param_3 + 0x90),0);
        if ((lVar2 == 0) || (lVar4 == 0)) goto LAB_038a616c;
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterItem_37a7738
                  (lVar4,lVar1,1,iVar3,*(undefined4 *)(lVar2 + 0x70));
        iVar3 = iVar3 + 1;
      } while (param_4 != iVar3);
    }
    return;
  }
LAB_038a616c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

