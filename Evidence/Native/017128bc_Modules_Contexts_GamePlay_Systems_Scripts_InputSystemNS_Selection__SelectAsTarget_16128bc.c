/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$SelectAsTarget
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__SelectAsTarget (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$SelectAsTarget
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__SelectAsTarget
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__SelectAsTarget_16128bc
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000005c24480 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808e00);
    bRam0000000005c24480 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (lVar5 != 0) {
    uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (lVar5,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult__GetSelectionResult_16129d0
                        (lVar5,uVar1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80),
                         *(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      FUN_012d0d74((undefined8 *)(param_1 + 0x30),uVar1);
      plVar6 = *(long **)(param_1 + 0x40);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_05808e00) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 1) * 0x10 + 0x138);
              goto LAB_017129b0;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_05808e00,1);
LAB_017129b0:
                    /* WARNING: Could not recover jumptable at 0x017129c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar2)(plVar6,uVar1,param_1,puVar2[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

