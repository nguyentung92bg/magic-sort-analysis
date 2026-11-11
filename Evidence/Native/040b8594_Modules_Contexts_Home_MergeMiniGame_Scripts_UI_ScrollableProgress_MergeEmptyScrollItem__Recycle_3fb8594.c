/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.ScrollableProgress.MergeEmptyScrollItem$$Recycle
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ScrollableProgress_MergeEmptyScrollItem__Recycle (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ScrollableProgress_MergeEmptyScrollItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.ScrollableProgress.MergeEmptyScrollItem$$Recycle
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ScrollableProgress_MergeEmptyScrollItem__Recycle
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ScrollableProgress_MergeEmptyScrollItem_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ScrollableProgress_MergeEmptyScrollItem__Recycle_3fb8594
               (long param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_parent_40933e0(lVar1,0,0);
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040b85ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

