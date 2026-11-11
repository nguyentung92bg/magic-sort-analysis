/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$Prepare
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__Prepare (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameItemViewModel_o* viewModel, UnityEngine_Transform_o* parent, UnityEngine_Sprite_o* sprite, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* selectionSystem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$Prepare
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__Prepare
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameItemViewModel_o* viewModel,
   UnityEngine_Transform_o* parent, UnityEngine_Sprite_o* sprite,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o*
   selectionSystem, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__Prepare_410c6f4
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x10);
    lVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar3 != 0) {
      lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar3,0);
      plVar5 = (long *)(param_1 + 0x70);
      *plVar5 = param_2;
      FUN_012d0d74(plVar5);
      if (*plVar5 != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*plVar5 + 0x18);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x38) = param_5;
          FUN_012d0d74((undefined8 *)(lVar3 + 0x38),param_5);
          *(long *)(lVar3 + 0x40) = param_1;
          FUN_012d0d74((long *)(lVar3 + 0x40),param_1);
          *(undefined1 *)(lVar3 + 0x1c) = 1;
          if (*(long *)(param_1 + 0x60) != 0) {
            lVar3 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x60),0);
            if (lVar3 == 0) goto LAB_04209938;
            UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
          }
          if (*(long *)(param_1 + 0x58) != 0) {
            lVar3 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x58),0);
            if (lVar3 == 0) goto LAB_04209938;
            UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
          }
          lVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (lVar3 != 0) {
            UnityEngine_Transform__SetParent_409352c(lVar3,param_3,0);
            lVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
            if (cRam0000000005c230a9 == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230a9 = '\x01';
            }
            if (lVar3 != 0) {
              lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
              UnityEngine_Transform__set_localScale_40932d0
                        (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                         *(undefined4 *)(lVar4 + 0x14),lVar3,0);
              puVar1 = PTR_DAT_0576c200;
              if ((bRam0000000005c3abc0 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0576c200);
                bRam0000000005c3abc0 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar2 = UnityEngine_Object__op_Inequality_408e110(param_4,0,0);
              if ((uVar2 & 1) != 0) {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != 0) {
                  if (pcRam0000000005c3a730 == (code *)0x0) {
                    pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
                  }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c3a730)(lVar3,param_4);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              return;
            }
          }
        }
      }
LAB_04209938:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

