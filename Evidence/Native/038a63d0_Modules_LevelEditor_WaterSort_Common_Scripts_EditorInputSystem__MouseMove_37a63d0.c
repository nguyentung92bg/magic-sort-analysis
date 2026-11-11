/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$MouseMove
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__MouseMove (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$MouseMove
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__MouseMove
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__MouseMove_37a63d0
               (float param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  if ((*(long *)(param_3 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_3 + 0x10) + 0x50), lVar1 != 0)) {
    fVar9 = *(float *)(lVar1 + 0x20);
    uVar7 = (ulong)(uint)(param_2 + -0.25);
    uVar5 = Modules_LevelEditor_WaterSort_Common_GridRenderer__GetRoundedSnapPosition_37a13e8
                      (param_1 + 0.0,uVar7);
    if (6 < *(int *)(param_3 + 0x2c) - 1U) {
LAB_038a6488:
      return;
    }
    uVar6 = (ulong)(uint)(fVar9 * (float)(int)(param_1 / fVar9));
    uVar8 = (ulong)(uint)(fVar9 * (float)(int)(param_2 / fVar9));
    switch(*(int *)(param_3 + 0x2c)) {
    default:
      lVar1 = *(long *)(param_3 + 0x58);
      break;
    case 3:
    case 5:
    case 6:
      goto LAB_038a6488;
    case 4:
      lVar1 = *(long *)(param_3 + 0x58);
      uVar6 = uVar5;
      uVar8 = uVar7;
    }
    if (lVar1 != 0) {
      if ((bRam0000000005c33e42 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575a2d8);
        bRam0000000005c33e42 = 1;
      }
      if ((*(long *)(lVar1 + 0x20) == 0) ||
         (plVar4 = *(long **)(*(long *)(lVar1 + 0x20) + 0x18), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar1 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12a);
      if (uVar5 != 0) {
        piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
            goto LAB_038a6544;
          }
          uVar5 = uVar5 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0575a2d8,1);
LAB_038a6544:
                    /* WARNING: Could not recover jumptable at 0x038a6568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(uVar6,uVar8,0,plVar4,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

