/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$<PrepareNewBottle>b__14_1
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem___PrepareNewBottle_b__14_1 (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$<PrepareNewBottle>b__14_1
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem___PrepareNewBottle_b__14_1
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem___PrepareNewBottle_b__14_1_2f59564
               (long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c308bf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c308bf = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                               (*(long *)(param_1 + 0x50),0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      uVar10 = *(undefined4 *)(lVar6 + 0xc);
      uVar9 = *(undefined4 *)(lVar6 + 0x10);
      uVar8 = *(undefined4 *)(lVar6 + 0x14);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_03059640;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,7);
LAB_03059640:
      (*(code *)*puVar3)(uVar10,uVar9,uVar8,plVar2,puVar3[1]);
      if (*(long *)(param_1 + 0x48) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__HideAnimationBottle_2f59694
                  ();
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar4 != 0)) {
          if ((bRam0000000005c3aa98 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057aeae8,param_1,0);
            bRam0000000005c3aa98 = 1;
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar6 = *(long *)PTR_DAT_057aeae8;
          iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0xa0) + 8))
                            (lVar4,param_1);
          if (-1 < iVar1) {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x158) + 8))
                      (lVar4,iVar1);
          }
          return -1 < iVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

