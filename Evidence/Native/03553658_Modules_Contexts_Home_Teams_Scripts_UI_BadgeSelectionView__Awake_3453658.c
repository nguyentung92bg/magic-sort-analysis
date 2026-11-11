/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$Awake
void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__Awake (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$Awake
   void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__Awake
   (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__Awake_3453658(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000005c325ad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05793490);
    bRam0000000005c325ad = 1;
  }
  puVar3 = PTR_DAT_05793490;
  puVar2 = PTR_DAT_0578b048;
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar4 == 0) ||
           (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)puVar3,0), lVar5 == 0))
        goto LAB_03553728;
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                  (lVar5,lVar4,0);
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return;
  }
LAB_03553728:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

