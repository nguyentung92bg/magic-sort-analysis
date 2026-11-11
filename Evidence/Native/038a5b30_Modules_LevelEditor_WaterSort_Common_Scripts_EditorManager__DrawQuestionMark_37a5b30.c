/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawQuestionMark
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawQuestionMark (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawQuestionMark
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawQuestionMark
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawQuestionMark_37a5b30
               (undefined8 param_1,float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  long lStack_18;
  
  lVar2 = *(long *)(param_3 + 0x48);
  *(undefined1 *)(param_3 + 0x68) = 1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c33e57 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057e76e8);
    bRam0000000005c33e57 = 1;
  }
  lStack_18 = 0;
  fVar8 = param_2;
  uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,lVar2,&lStack_18);
  if ((uVar3 & 1) != 0) {
    if (((lStack_18 == 0) || (*(long *)(lStack_18 + 0x20) == 0)) ||
       (plVar7 = *(long **)(*(long *)(lStack_18 + 0x20) + 0x18), plVar7 == (long *)0x0)) {
LAB_038a7d7c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_038a7d08;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575a2d8,0);
LAB_038a7d08:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    iVar1 = -0x80000000;
    if (param_2 - fVar8 != INFINITY) {
      iVar1 = (int)(param_2 - fVar8);
    }
    if (-1 < iVar1) {
      if ((lStack_18 == 0) || (*(long *)(lStack_18 + 0x60) == 0)) goto LAB_038a7d7c;
      if (iVar1 < *(int *)(*(long *)(lStack_18 + 0x60) + 0x18)) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveQuestionMark_3ddf684
                  (lStack_18,iVar1,0);
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddQuestionMarkItem_37a77ec
                  (lVar2,lStack_18,iVar1);
      }
    }
  }
  return;
}

