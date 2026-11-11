/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLevelDurationEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelDurationEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t finishStatus, int32_t levelEndType, int64_t levelStartTimeStamp, int64_t levelEndTimeStamp, float averageMoveDuration, float firstMoveDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLevelDurationEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelDurationEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t finishStatus, int32_t
   levelEndType, int64_t levelStartTimeStamp, int64_t levelEndTimeStamp, float averageMoveDuration,
   float firstMoveDuration, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelDurationEvent_1463b3c
               (float param_1,float param_2,undefined8 param_3,int param_4,undefined4 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237b0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057ad0e0);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057e96b8);
    FUN_012d0dc8(PTR_DAT_05765e40);
    FUN_012d0dc8(PTR_DAT_057ae270);
    FUN_012d0dc8(PTR_DAT_0579a428);
    FUN_012d0dc8(PTR_DAT_057da9a8);
    FUN_012d0dc8(PTR_DAT_057ab1b0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057c7a30);
    bRam0000000005c237b0 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
     (plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057a1e60), puVar1 = PTR_DAT_057c8a60,
     plVar8 != (long *)0x0)) {
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_01563cf4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01563cf4:
    iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar5 = PTR_DAT_057db748;
    puVar4 = PTR_DAT_057d6138;
    puVar3 = PTR_DAT_057c7a30;
    puVar2 = PTR_DAT_057ad0e0;
    puVar1 = PTR_DAT_0579a428;
    if (lVar7 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar7,*(undefined8 *)PTR_DAT_057da9a8,0);
      uStack_88 = *(undefined8 *)puVar2;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_5;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar3,uVar10,0);
      iStack_8c = param_4;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_8c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar1,uVar10,0);
      uStack_98 = param_6;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_98);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)PTR_DAT_057e96b8,uVar10,0);
      uStack_a0 = param_7;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)PTR_DAT_057ae270,uVar10,0);
      puVar1 = PTR_DAT_057ce7d0;
      fStack_a4 = param_1;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&fStack_a4);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)PTR_DAT_05765e40,uVar10,0);
      fStack_a8 = param_2;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&fStack_a8);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)PTR_DAT_057ab1b0,uVar10,0);
      iStack_ac = iVar6;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_ac);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)PTR_DAT_057caaf0,uVar10,0);
      uStack_c8 = *(undefined8 *)PTR_DAT_057ad0e0;
      uStack_c0 = 0xffffffffffffffff;
      uStack_b8 = param_5;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_c8,0);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__LevelDuration_2db87e0
                         ((double)param_1,(double)param_2,uVar10,(long)param_4,param_6,param_7,
                          (long)iVar6,0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_3,lVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

