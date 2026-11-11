/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$AddFrogPathItemToBottle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__AddFrogPathItemToBottle (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* currentBottle, Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem_o* frogPathItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$AddFrogPathItemToBottle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__AddFrogPathItemToBottle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* currentBottle,
   Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem_o* frogPathItem, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__AddFrogPathItemToBottle_2752350
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000005c2c704 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058035b8);
    bRam0000000005c2c704 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x10);
    lVar8 = *(long *)PTR_DAT_058035b8;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = param_3;
        FUN_012d0d74(plVar6,param_3);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar2,param_3);
      }
      if ((param_2 != 0) &&
         (uVar3 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0)
         , param_3 != 0)) {
        Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                  (param_3,uVar3,0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        uVar13 = puVar7[2];
        if ((bRam0000000005c3aa91 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575a2d8,0);
          bRam0000000005c3aa91 = 1;
        }
        if ((*(long *)(param_3 + 0x20) == 0) ||
           (plVar6 = *(long **)(*(long *)(param_3 + 0x20) + 0x18), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar2 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_041ea7f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,5);
LAB_041ea7f0:
                    /* WARNING: Could not recover jumptable at 0x041ea814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(uVar11,uVar12,uVar13,plVar6,puVar4[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

