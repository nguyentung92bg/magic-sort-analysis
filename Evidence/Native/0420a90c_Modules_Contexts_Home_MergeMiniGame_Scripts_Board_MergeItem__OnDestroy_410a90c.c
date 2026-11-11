/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$OnDestroy
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__OnDestroy (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fdaa20) */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$OnDestroy
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__OnDestroy
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__OnDestroy_410a90c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x30;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3abc1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3abc1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if ((bRam0000000005c28433 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,1,0);
    FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28433 = 1;
  }
  puVar1 = PTR_DAT_058163b8;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar2 = DG_Tweening_DOTween__CompleteAndReturnKilledTot_1eda48c(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar3 = DG_Tweening_Core_TweenManager__FilteredOperation_3331d1c
                      (0,1,1,param_1,0,0,0,0,in_x7,unaff_x21,unaff_x20,unaff_x19,unaff_x30);
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}

