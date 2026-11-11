/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$SendLevelDurationEvent
void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__SendLevelDurationEvent (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, int32_t finishStatus, int32_t gamePlayStateType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$SendLevelDurationEvent
   void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__SendLevelDurationEvent
   (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, int32_t
   finishStatus, int32_t gamePlayStateType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__SendLevelDurationEvent_1611118
               (long param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_50 [16];
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c2446f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057b5330);
    FUN_012d0dc8(PTR_DAT_05790438);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2446f = 1;
  }
  puVar2 = PTR_DAT_05790438;
  puVar1 = PTR_DAT_0578b048;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057b5330,0);
    puVar1 = PTR_DAT_05814758;
    puVar3 = PTR_DAT_0580b9d0;
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = System_DateTime__get_UtcNow_2100638(0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      auStack_50 = System_DateTimeOffset__op_Implicit_2106a94(uVar6,0);
      uVar6 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(auStack_50,0);
      auVar10 = System_DateTimeOffset__op_Implicit_2106a94(*(undefined8 *)(param_1 + 0x18),0);
      auStack_50 = auVar10;
      uVar7 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(auStack_50,0);
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      plVar9 = *(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      lVar4 = *plVar9;
      if (param_3 == 5) {
        uVar8 = 2;
      }
      else if (param_3 == 7) {
        uVar8 = 1;
      }
      else {
        plVar9 = (long *)0x3;
        uVar8 = 3;
        if (param_3 != 0xc) {
          uVar8 = 0;
        }
      }
      auVar10 = Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetAverageMoveDuration_1611368
                          (plVar9,param_1);
      if (lVar4 != 0) {
        Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelDurationEvent_1463b3c
                  (auVar10,*(undefined4 *)(param_1 + 0x24),lVar4,param_2,uVar8,uVar6,uVar7,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

