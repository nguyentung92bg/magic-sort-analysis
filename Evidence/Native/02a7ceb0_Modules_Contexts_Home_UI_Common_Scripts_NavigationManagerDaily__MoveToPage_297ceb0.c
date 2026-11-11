/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$MoveToPage
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__MoveToPage (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t pageType, bool playAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$MoveToPage
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__MoveToPage
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t pageType, bool
   playAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__MoveToPage_297ceb0
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((int)param_2 != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = Modules_Contexts_Home_UI_SwipeMenu_Scripts_SwipeMenuManager__GetIndexByPageType_2dd0280
                      (*(long *)(param_1 + 0x70),param_2,0);
    Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexView_297cf18
              (param_1,uVar1,param_3 & 1);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
  }
  return;
}

