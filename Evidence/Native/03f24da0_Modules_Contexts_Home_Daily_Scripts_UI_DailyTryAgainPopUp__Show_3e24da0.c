/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyTryAgainPopUp$$Show
void Modules_Contexts_Home_Daily_Scripts_UI_DailyTryAgainPopUp__Show (Modules_Contexts_Home_Daily_Scripts_UI_DailyTryAgainPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyTryAgainPopUp$$Show
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyTryAgainPopUp__Show
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyTryAgainPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyTryAgainPopUp__Show_3e24da0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c38143 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05778bf8);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c38143 = 1;
  }
  uStack_24 = 0;
  lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
  if (((((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) &&
       (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_057d9070), lVar4 != 0)) &&
      ((*(long *)(lVar4 + 0x18) != 0 &&
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0xa8), lVar4 != 0)))) &&
     (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    uStack_24 = *(undefined4 *)(lVar4 + 0x14);
    lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) &&
       (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_05778bf8), lVar4 != 0)) {
      uVar2 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetSelectedDailyLevelInfo_410533c
                        (lVar4,0);
      plVar5 = *(long **)(param_1 + 0x20);
      uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
        plVar5 = *(long **)(param_1 + 0x28);
        uVar2 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4(uVar2,0,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x558))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x560));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

