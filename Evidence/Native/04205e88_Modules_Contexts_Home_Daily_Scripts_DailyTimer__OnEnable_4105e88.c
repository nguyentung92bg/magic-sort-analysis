/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyTimer$$OnEnable
void Modules_Contexts_Home_Daily_Scripts_DailyTimer__OnEnable (Modules_Contexts_Home_Daily_Scripts_DailyTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyTimer$$OnEnable
   void Modules_Contexts_Home_Daily_Scripts_DailyTimer__OnEnable
   (Modules_Contexts_Home_Daily_Scripts_DailyTimer_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyTimer__OnEnable_4105e88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000005c3ab9b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab9b = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetNextDayLocalDateTime_41050b8();
    uStack_28 = uVar2;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
       lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
      plVar4 = *(long **)(param_1 + 0x20);
      uVar2 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTime_3de70c4(uVar2,0,0);
      puVar1 = PTR_DAT_0580b9d0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
        lVar3 = *(long *)(param_1 + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = System_DateTime__ToUniversalTime_21016ec(&uStack_28,0);
        if (lVar3 != 0) {
          Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__Initialize_160dfd0(lVar3,uVar2,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

