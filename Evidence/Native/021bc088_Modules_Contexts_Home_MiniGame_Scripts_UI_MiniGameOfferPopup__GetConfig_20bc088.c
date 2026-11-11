/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$GetConfig
Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_RewardContainerConfigForCount_o Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__GetConfig (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$GetConfig
   Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_RewardContainerConfigForCount_o
   Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__GetConfig
   (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this, int32_t count, const
   MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__GetConfig_20bc088
               (int *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x60);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = *(int *)(lVar4 + 0x18);
  if (0 < iVar1) {
    iVar5 = 0;
    puVar6 = (undefined8 *)(lVar4 + 0x24);
    do {
      uVar7 = *(undefined8 *)((long)puVar6 + 0x24);
      uVar11 = puVar6[1];
      uVar10 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      uStack_30 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0x1c) >> 0x20);
      uStack_34 = (undefined4)((ulong)uVar9 >> 0x20);
      if (*(int *)((long)puVar6 + -4) == param_3) {
        *param_1 = param_3;
        *(undefined8 *)(param_1 + 10) = uVar7;
        *(ulong *)(param_1 + 8) = CONCAT44(uStack_30,uStack_34);
        *(undefined8 *)(param_1 + 7) = uVar9;
        *(undefined8 *)(param_1 + 5) = uVar8;
        *(undefined8 *)(param_1 + 3) = uVar11;
        *(undefined8 *)(param_1 + 1) = uVar10;
        goto LAB_021bc120;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 6;
    } while (iVar5 < iVar1);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  uVar11 = *(undefined8 *)(lVar4 + 0x30);
  uVar8 = *(undefined8 *)(lVar4 + 0x48);
  uVar7 = *(undefined8 *)(lVar4 + 0x40);
  uVar10 = *(undefined8 *)(lVar4 + 0x28);
  uVar9 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(param_1 + 4) = uVar11;
  *(undefined8 *)(param_1 + 10) = uVar8;
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 2) = uVar10;
  *(undefined8 *)param_1 = uVar9;
LAB_021bc120:
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

