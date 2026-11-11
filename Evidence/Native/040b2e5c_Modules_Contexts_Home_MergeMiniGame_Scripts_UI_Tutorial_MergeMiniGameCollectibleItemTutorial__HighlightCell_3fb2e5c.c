/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$HighlightCell
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__HighlightCell (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$HighlightCell
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__HighlightCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o*
   __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__HighlightCell_3fb2e5c
               (long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar3 = PTR_DAT_0576c200;
  if ((bRam0000000005c3906c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_0577a378);
    FUN_012d0dc8(PTR_DAT_057e7cf0);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3906c = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = UnityEngine_Object__op_Equality_407f288(param_2,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    lVar7 = UnityEngine_Component__get_transform_408b444(param_2,0);
    uVar8 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar7 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar7,uVar8,0);
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        }
        puVar5 = PTR_DAT_057f7f10;
        puVar4 = PTR_DAT_0577a378;
        puVar3 = PTR_DAT_0576d610;
        if (*(long *)(param_2 + 0xa0) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_78,*(long *)(param_2 + 0xa0),*(undefined8 *)PTR_DAT_05818d08);
          uStack_58 = uStack_70;
          uStack_60 = uStack_78;
          lStack_50 = lStack_68;
          while( true ) {
            uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar7 = lStack_50;
            if ((uVar6 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_60,*(undefined8 *)puVar5);
              return;
            }
            lVar9 = *(long *)(param_1 + 0x78);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              plVar11 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
              *plVar11 = lStack_50;
              FUN_012d0d74(plVar11,lStack_50);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar9,lStack_50);
            }
            if (lVar7 == 0) break;
            lVar9 = UnityEngine_Component__get_transform_408b444(lVar7,0);
            uVar8 = UnityEngine_Component__get_transform_408b444(param_1,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0(uVar8,uVar8);
            }
            UnityEngine_Transform__SetParent_409352c(lVar9,uVar8,0);
            Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder_410baa4
                      (lVar7,*(undefined4 *)(param_1 + 0x48),0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

