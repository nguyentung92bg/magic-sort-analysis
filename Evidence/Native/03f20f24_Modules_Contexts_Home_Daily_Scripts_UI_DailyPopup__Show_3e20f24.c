/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$Show
void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__Show (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$Show
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__Show
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__Show_3e20f24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyController__Initialize_3e1dde8();
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar9,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
      if ((bRam0000000005c380f5 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057bc5e8);
        FUN_012d0dc8(PTR_DAT_057db748);
        FUN_012d0dc8(PTR_DAT_057e8e78);
        bRam0000000005c380f5 = 1;
      }
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      if ((*(long *)(lVar9 + 0x38) != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar9 + 0x38),0),
         lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
        if (*(long *)(lVar9 + 0x70) != 0) {
          uVar6 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0
                            (*(long *)(lVar9 + 0x70),0);
          if ((*(long *)(lVar9 + 0x28) != 0) &&
             (lVar5 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(lVar9 + 0x28),0),
             lVar5 != 0)) {
            if ((uVar6 & 1) == 0) {
              UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
              puVar3 = PTR_DAT_057e8e78;
              puVar2 = PTR_DAT_057db748;
              puVar1 = PTR_DAT_057bc5e8;
              if (*(long *)(lVar9 + 0x70) != 0) {
                uVar4 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetFirstLevelToShow_410508c
                                  (*(long *)(lVar9 + 0x70),0);
                plVar10 = *(long **)(lVar9 + 0x40);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)puVar1);
                }
                uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                  (*(undefined8 *)puVar3,0);
                auStack_70[0] = uVar4;
                uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,auStack_70);
                uVar7 = System_String__Format_1ec10a8(uVar7,uVar8,0);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x558))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x560));
                  if ((*(long *)(lVar9 + 0x30) != 0) &&
                     (lVar9 = UnityEngine_GameObject__get_gameObject_408e764
                                        (*(long *)(lVar9 + 0x30),0), lVar9 != 0)) {
                    UnityEngine_GameObject__SetActive_408e318(lVar9,0,0);
                    return;
                  }
                }
              }
            }
            else {
              UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
              if ((*(long *)(lVar9 + 0x30) != 0) &&
                 (lVar5 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(lVar9 + 0x30),0),
                 lVar5 != 0)) {
                UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
                if (*(long *)(lVar9 + 0x70) != 0) {
                  Modules_Contexts_Home_Daily_Scripts_DailyService__GetActiveDailyViewModel_4105930
                            (auStack_70,*(long *)(lVar9 + 0x70),0);
                  uStack_48 = uStack_68;
                  uStack_38 = uStack_58;
                  uStack_40 = uStack_60;
                  uStack_88 = uStack_68;
                  uStack_78 = uStack_58;
                  uStack_80 = uStack_60;
                  Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetDailyViewModel_3e1e4bc
                            (lVar9,auStack_90);
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

