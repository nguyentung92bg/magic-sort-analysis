/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$OnDisable
void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__OnDisable (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.DailyInLevelTimer$$OnDisable
   void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__OnDisable
   (Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_DailyInLevelTimer__OnDisable_160bde4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2443a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_057f9658);
    FUN_012d0dc8(PTR_DAT_0580b4e8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0578d5f8);
    bRam0000000005c2443a = 1;
  }
  puVar3 = PTR_DAT_0580b4e8;
  puVar1 = PTR_DAT_0577f3c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057f9658,0), lVar4 != 0
     )) {
                    /* WARNING: Could not recover jumptable at 0x0343cfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0578d5f8 + 0x20) + 0xc0) + 0x10) + 8
                ))(lVar4,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

