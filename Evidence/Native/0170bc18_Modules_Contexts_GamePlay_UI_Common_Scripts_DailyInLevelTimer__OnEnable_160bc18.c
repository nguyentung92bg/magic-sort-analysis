/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$OnEnable
void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__OnEnable (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$OnEnable
   void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__OnEnable
   (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__OnEnable_160bc18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((bRam0000000005c24439 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_05778bf8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057f9658);
    FUN_012d0dc8(PTR_DAT_0580b4e8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b7ab0);
    bRam0000000005c24439 = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
     puVar3 = PTR_DAT_0580b4e8, puVar2 = PTR_DAT_057b8520, puVar1 = PTR_DAT_0577f3c8, lVar4 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057f9658,0),
       puVar1 = PTR_DAT_0576aae0, lVar4 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Subscribe_333cf9c
                (lVar4,lVar5,*(undefined8 *)PTR_DAT_057b7ab0);
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         ((lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0 &&
          (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar4,*(undefined8 *)PTR_DAT_05778bf8), lVar4 != 0)))) {
        uVar6 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetSelectedDailyLevelInfo_410533c
                          (lVar4,0);
        plVar7 = *(long **)(param_1 + 0x18);
        uVar6 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4(uVar6,1,0);
        if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0170bdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

