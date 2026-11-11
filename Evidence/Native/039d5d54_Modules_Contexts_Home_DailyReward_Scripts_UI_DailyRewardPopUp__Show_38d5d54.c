/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardPopUp$$Show
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__Show (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardPopUp$$Show
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__Show
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__Show_38d5d54
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if ((bRam0000000005c34bd8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05775380);
    FUN_012d0dc8(PTR_DAT_0575c778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a9768);
    FUN_012d0dc8(PTR_DAT_057dc100);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057ab180);
    FUN_012d0dc8(PTR_DAT_05765150);
    bRam0000000005c34bd8 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057a9768 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057a9768))
    {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((long)param_2 + 0x24);
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_039d6008;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardPopupImpressionEvent_14716c4
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),*(undefined4 *)(param_1 + 0x68),0);
    }
  }
  if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_0575c778);
    plVar10 = (long *)(param_1 + 0x50);
    *plVar10 = lVar7;
    FUN_012d0d74(plVar10,lVar7);
    if (*plVar10 != 0) {
      uVar8 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsNotIntroduced_38d42f8
                        ();
      if ((uVar8 & 1) != 0) {
        if (*plVar10 == 0) goto LAB_039d6008;
        Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__MarkEventIntroducedEverInLifeTime_38d4334
                  ();
      }
      if (*plVar10 != 0) {
        uVar8 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsRewardPoolInitialized_38d3e6c
                          ();
        if ((uVar8 & 1) == 0) {
          if ((*plVar10 == 0) || (*(long *)(*plVar10 + 0x10) == 0)) goto LAB_039d6008;
          Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPoolV2_38d06fc
                    ();
        }
        lVar7 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                          (param_1,*(undefined8 *)PTR_DAT_05775380);
        plVar10 = (long *)(param_1 + 0x60);
        *plVar10 = lVar7;
        FUN_012d0d74(plVar10,lVar7);
        puVar6 = PTR_DAT_057dc100;
        puVar5 = PTR_DAT_057b8520;
        puVar4 = PTR_DAT_057ab180;
        puVar3 = PTR_DAT_0578b048;
        puVar2 = PTR_DAT_05765150;
        lVar7 = *plVar10;
        if (lVar7 != 0) {
          uVar8 = 0;
          while( true ) {
            if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar8) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar6);
              if (lVar7 != 0) {
                lVar9 = *(long *)(lVar7 + 0x20);
                if (lVar9 != 0) {
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                }
                lVar9 = *(long *)(lVar7 + 0x10);
                if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),lVar7,0,*(undefined8 *)(lVar9 + 0x28));
                  return;
                }
                return;
              }
              return;
            }
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar7 == 0) break;
            System_Object___ctor_23dfe5c(lVar7,0);
            *(long *)(lVar7 + 0x20) = param_1;
            FUN_012d0d74((long *)(lVar7 + 0x20),param_1);
            lVar9 = *(long *)(param_1 + 0x60);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            plVar11 = (long *)(lVar7 + 0x10);
            *plVar11 = *(long *)(lVar9 + uVar8 * 8 + 0x20);
            FUN_012d0d74(plVar11);
            *(int *)(lVar7 + 0x18) = (int)uVar8;
            if (*plVar11 == 0) break;
            lVar12 = *(long *)(*plVar11 + 0x18);
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if ((lVar9 == 0) ||
               (System_Action___ctor_21239bc(lVar9,lVar7,*(undefined8 *)puVar4,0), lVar12 == 0))
            break;
            Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                      (lVar12,lVar9,0);
            lVar7 = *plVar10;
            uVar8 = uVar8 + 1;
            if (lVar7 == 0) break;
          }
        }
      }
    }
  }
LAB_039d6008:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

