/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$remove_OnClosed
void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__remove_OnClosed (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$remove_OnClosed
   void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__remove_OnClosed
   (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, System_Action_o* value,
   const MethodInfo* method); */

void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__remove_OnClosed_34535bc
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c325ac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    bRam0000000005c325ac = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  lVar5 = *(long *)(param_1 + 0x40);
  while ((plVar3 = (long *)System_Delegate__Remove_23e3b70(lVar5,param_2,0), plVar3 == (long *)0x0
         || (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_01351224((long *)(param_1 + 0x40),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d1288(plVar3);
}

