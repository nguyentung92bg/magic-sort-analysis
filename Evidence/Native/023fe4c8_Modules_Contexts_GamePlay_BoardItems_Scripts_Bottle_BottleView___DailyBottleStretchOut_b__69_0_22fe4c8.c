/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$<DailyBottleStretchOut>b__69_0
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView___DailyBottleStretchOut_b__69_0 (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$<DailyBottleStretchOut>b__69_0
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView___DailyBottleStretchOut_b__69_0
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, float value, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView___DailyBottleStretchOut_b__69_0_22fe4c8
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2a606 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2a606 = 1;
  }
  if ((*(long *)(param_4 + 0xc0) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_4 + 0xc0) + 0x30), lVar2 != 0)) {
    uVar7 = UnityEngine_AnimationCurve__Evaluate_4084894(param_1,lVar2,0);
    if ((*(long *)(param_4 + 0xc0) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0xc0) + 0x38), lVar2 != 0)) {
      uVar8 = UnityEngine_AnimationCurve__Evaluate_4084894(param_1,lVar2,0);
      puVar1 = PTR_DAT_0575a2d8;
      plVar6 = *(long **)(param_4 + 0x18);
      if (plVar6 != (long *)0x0) {
        lVar2 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 6) * 0x10 + 0x138);
              goto LAB_023fe5a0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,6);
LAB_023fe5a0:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
        lVar2 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
              goto LAB_023fe600;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,7);
LAB_023fe600:
                    /* WARNING: Could not recover jumptable at 0x023fe624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(uVar8,uVar7,param_3,plVar6,puVar3[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

