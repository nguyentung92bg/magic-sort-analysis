/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$TryGetMergeableCells
bool Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryGetMergeableCells (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o** cell1, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o** cell2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$TryGetMergeableCells
   bool 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryGetMergeableCells
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o** cell1,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o** cell2, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryGetMergeableCells_3fb593c
          (long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_0580e478;
  if ((bRam0000000005c3907f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e62a8);
    FUN_012d0dc8(PTR_DAT_057899d8);
    FUN_012d0dc8(PTR_DAT_05777510);
    FUN_012d0dc8(PTR_DAT_0581acb8);
    FUN_012d0dc8(PTR_DAT_057db570);
    FUN_012d0dc8(PTR_DAT_057e8e60);
    FUN_012d0dc8(PTR_DAT_057b4950);
    FUN_012d0dc8(PTR_DAT_0580e478);
    bRam0000000005c3907f = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  *param_2 = 0;
  FUN_012d0d74(param_2,0);
  *param_3 = 0;
  FUN_012d0d74(param_3,0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar4,*(undefined8 *)PTR_DAT_057b4950);
    puVar3 = PTR_DAT_0581acb8;
    puVar2 = PTR_DAT_057899d8;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar13 != 0)) {
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        do {
          if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          lVar12 = *(long *)(lVar13 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_040b5ca0;
          uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HasBlocker_4110020
                            (lVar12,0);
          if ((uVar5 & 1) == 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_98,lVar4,*(undefined8 *)PTR_DAT_057e8e60);
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
            lStack_70 = lStack_88;
            while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_80,*(undefined8 *)puVar2), lVar10 = lStack_70,
                  (uVar5 & 1) != 0) {
              plVar6 = (long *)Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__GetMergeableItem_410ebec
                                         (lVar12,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__GetMergeableItem_410ebec
                                (lVar10,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              lVar9 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar5 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                    goto LAB_040b5b30;
                  }
                  uVar5 = uVar5 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar5 != 0);
              }
              puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar3,4);
LAB_040b5b30:
              uVar5 = (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
              if ((uVar5 & 1) != 0) {
                *param_2 = lVar12;
                FUN_012d0d74(param_2,lVar12);
                *param_3 = lVar10;
                FUN_012d0d74(param_3,lVar10);
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_80,*(undefined8 *)PTR_DAT_057e62a8);
                return 1;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)PTR_DAT_057e62a8);
            lVar10 = *(long *)(lVar4 + 0x10);
            lVar9 = *(long *)PTR_DAT_057db570;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_040b5ca0;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar12;
              FUN_012d0d74(plVar6,lVar12);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar4,lVar12);
            }
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar1);
      }
      return 0;
    }
  }
LAB_040b5ca0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

