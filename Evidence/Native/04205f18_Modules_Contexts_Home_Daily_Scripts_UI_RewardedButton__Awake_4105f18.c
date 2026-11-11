/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$Awake
void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__Awake (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$Awake
   void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__Awake
   (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__Awake_4105f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c3ab9e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05808938);
    FUN_012d0dc8(PTR_DAT_057607c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3ab9e = 1;
  }
  puVar3 = PTR_DAT_0578b048;
  puVar1 = PTR_DAT_057607c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar5 == 0) ||
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05808938,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar4,lVar5,0);
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3aba0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2938);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3aba0 = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_057a2938), lVar4 != 0)) {
    uVar6 = Modules_Contexts_Application_Ads_Scripts_AdService__IsRewardedReady_1b5f73c(lVar4,0);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      if ((uVar6 & 1) == 0) {
        Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Show_16e9050(lVar4,0);
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) goto LAB_042060b4;
        uVar7 = 0;
      }
      else {
        Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Hide_16e9010(lVar4,0);
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) goto LAB_042060b4;
        uVar7 = 1;
      }
      if (pcRam0000000005c39bb8 == (code *)0x0) {
        pcRam0000000005c39bb8 = (code *)FUN_012d0d84(&UNK_043eabe3);
      }
                    /* WARNING: Could not recover jumptable at 0x041822f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39bb8)(lVar4,uVar7);
      return;
    }
  }
LAB_042060b4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

