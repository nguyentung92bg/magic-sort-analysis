/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$FindCollectibleCell
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__FindCollectibleCell (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$FindCollectibleCell
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__FindCollectibleCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__FindCollectibleCell_3fb2d20
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  uint uVar13;
  
  if ((bRam0000000005c39068 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581acb8);
    bRam0000000005c39068 = 1;
  }
  puVar2 = PTR_DAT_0581acb8;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar12 != 0)) {
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar10 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_040b2e54;
        uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HasBlocker_4110020
                          (lVar10,0);
        if ((uVar5 & 1) == 0) {
          plVar6 = (long *)Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__GetMergeableItem_410ebec
                                     (lVar10,0);
          bVar11 = false;
          if (plVar6 != (long *)0x0) {
            lVar8 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_040b2e00;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,2);
LAB_040b2e00:
            iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            bVar11 = 1 < iVar4;
          }
          bVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HasItem_410f66c
                            (lVar10,2,0);
          if ((bVar3 & bVar11) != 0) {
            return lVar10;
          }
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return 0;
  }
LAB_040b2e54:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

