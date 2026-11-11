/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$ReverseSelection
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__ReverseSelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$ReverseSelection
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__ReverseSelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__ReverseSelection_1612f1c
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c24484 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808e00);
    bRam0000000005c24484 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_05808e00) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_01712fb4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_05808e00,3);
LAB_01712fb4:
                    /* WARNING: Could not recover jumptable at 0x01712fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,param_1,uVar1,uVar2,uVar8,puVar3[1]);
  return;
}

