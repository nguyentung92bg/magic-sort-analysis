/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$Prepare
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__Prepare (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameItemViewModel_o* itemViewModel, UnityEngine_Transform_o* parent, UnityEngine_Sprite_o* sprite, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* selectionSystem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$Prepare
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__Prepare
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameItemViewModel_o* itemViewModel,
   UnityEngine_Transform_o* parent, UnityEngine_Sprite_o* sprite,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o*
   selectionSystem, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__Prepare_41096d8
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x10);
    if (*(long *)(param_1 + 0x90) != 0) {
      UnityEngine_GameObject__SetActive_408e318
                (*(long *)(param_1 + 0x90),*(undefined1 *)(param_2 + 0x1c),0);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x20);
      FUN_012d0d74((undefined8 *)(param_1 + 0xd0));
      *(undefined1 *)(param_1 + 0xd8) = 0;
      if (*(char *)(param_2 + 0x1c) == '\0') {
        lVar2 = *(long *)(param_1 + 0x38);
        if (lVar2 == 0) goto LAB_042097fc;
        puVar5 = (undefined8 *)(param_1 + 0xb8);
      }
      else {
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_042097fc;
        lVar2 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x90),0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar2 == 0) goto LAB_042097fc;
        lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(float *)(lVar4 + 0xc) * _UNK_04339be4,*(float *)(lVar4 + 0x10) * _UNK_04339be4,
                   *(float *)(lVar4 + 0x14) * _UNK_04339be4,lVar2,0);
        lVar2 = *(long *)(param_1 + 0x38);
        if (lVar2 == 0) goto LAB_042097fc;
        puVar5 = (undefined8 *)(param_1 + 0xb0);
      }
      UnityEngine_Renderer__set_material_4082930(lVar2,*puVar5,0);
      plVar6 = (long *)(param_1 + 0x70);
      *plVar6 = param_2;
      FUN_012d0d74(plVar6);
      if (*plVar6 != 0) {
        lVar2 = *(long *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*plVar6 + 0x18);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x38) = param_5;
          FUN_012d0d74((undefined8 *)(lVar2 + 0x38),param_5);
          *(long *)(lVar2 + 0x40) = param_1;
          FUN_012d0d74((long *)(lVar2 + 0x40),param_1);
          *(undefined1 *)(lVar2 + 0x1c) = 1;
          if (*(long *)(param_1 + 0x60) != 0) {
            lVar2 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x60),0);
            if (lVar2 == 0) goto LAB_04209938;
            UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
          }
          if (*(long *)(param_1 + 0x58) != 0) {
            lVar2 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x58),0);
            if (lVar2 == 0) goto LAB_04209938;
            UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
          }
          lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (lVar2 != 0) {
            UnityEngine_Transform__SetParent_409352c(lVar2,param_3,0);
            lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
            if (cRam0000000005c230a9 == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230a9 = '\x01';
            }
            if (lVar2 != 0) {
              lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
              UnityEngine_Transform__set_localScale_40932d0
                        (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                         *(undefined4 *)(lVar4 + 0x14),lVar2,0);
              puVar1 = PTR_DAT_0576c200;
              if ((bRam0000000005c3abc0 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0576c200);
                bRam0000000005c3abc0 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar3 = UnityEngine_Object__op_Inequality_408e110(param_4,0,0);
              if ((uVar3 & 1) != 0) {
                lVar2 = *(long *)(param_1 + 0x38);
                if (lVar2 != 0) {
                  if (pcRam0000000005c3a730 == (code *)0x0) {
                    pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
                  }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c3a730)(lVar2,param_4);
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
LAB_042097fc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

