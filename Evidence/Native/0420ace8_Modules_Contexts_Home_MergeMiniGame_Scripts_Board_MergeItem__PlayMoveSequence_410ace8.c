/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayMoveSequence
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayMoveSequence (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* targetCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayMoveSequence
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayMoveSequence
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* targetCell, const MethodInfo*
   method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayMoveSequence_410ace8
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_057e5b48;
  if ((bRam0000000005c3abc4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05818960);
    FUN_012d0dc8(PTR_DAT_057e5b48);
    bRam0000000005c3abc4 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    plVar6 = (long *)(lVar2 + 0x10);
    *plVar6 = param_2;
    FUN_012d0d74(plVar6,param_2);
    *(long *)(lVar2 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar2 + 0x18),param_1);
    if ((*plVar6 != 0) && (lVar3 = *(long *)(*plVar6 + 0x60), lVar3 != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar3,param_1,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                  (*(long *)(param_1 + 0x40),*(int *)(param_1 + 0x48) + 1000,0);
        uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
        if ((*plVar6 != 0) &&
           (lVar3 = UnityEngine_Component__get_transform_408b444(*plVar6,0), lVar3 != 0)) {
          UnityEngine_Transform__get_position_4092b08(lVar3,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            uVar4 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar4,0,0);
            puVar1 = PTR_DAT_057606c8;
            if (*(long *)(param_1 + 0x50) != 0) {
              lVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0xf8),
                                 *(undefined8 *)PTR_DAT_057874c0);
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_057984e0;
              if (lVar5 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar5,lVar2,*(undefined8 *)PTR_DAT_05818960,0);
                uVar4 = *(undefined8 *)puVar1;
                if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                  *(long *)(lVar3 + 0x80) = lVar5;
                  FUN_012d0d74((long *)(lVar3 + 0x80),lVar5,uVar4);
                }
                return lVar3;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

