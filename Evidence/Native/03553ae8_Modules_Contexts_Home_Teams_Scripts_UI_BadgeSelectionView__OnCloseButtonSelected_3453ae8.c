/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$OnCloseButtonSelected
void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__OnCloseButtonSelected (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$OnCloseButtonSelected
   void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__OnCloseButtonSelected
   (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__OnCloseButtonSelected_3453ae8
               (long param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03553b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

