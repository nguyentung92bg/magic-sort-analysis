/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$ResetCell
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__ResetCell (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$ResetCell
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__ResetCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o*
   __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__ResetCell_3fb33d4
               (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c3906d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_057e7cf0);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3906d = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Equality_407f288(param_2,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if ((param_2 != 0) &&
     (lVar6 = UnityEngine_Component__get_transform_408b444(param_2,0), lVar6 != 0)) {
    UnityEngine_Transform__SetParent_409352c(lVar6,*(undefined8 *)(param_1 + 0x50),0);
    puVar4 = PTR_DAT_057f7f10;
    puVar3 = PTR_DAT_0576d610;
    if (*(long *)(param_1 + 0x78) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_68,*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_05818d08);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_50,*(undefined8 *)puVar3), lVar6 = lStack_40,
            (uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = UnityEngine_Object__op_Equality_407f288(lVar6,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar7 = UnityEngine_Component__get_transform_408b444(lVar6,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          UnityEngine_Transform__SetParent_409352c(lVar7,*(undefined8 *)(param_1 + 0x58),0);
          Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder_410baa4
                    (lVar6,*(undefined4 *)(param_1 + 0x60),0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_50,*(undefined8 *)puVar4);
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar6 != 0) {
        iVar1 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (iVar1 < 1) {
          return;
        }
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

