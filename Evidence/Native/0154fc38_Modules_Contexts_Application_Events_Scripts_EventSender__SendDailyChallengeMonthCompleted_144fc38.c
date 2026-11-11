/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyChallengeMonthCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeMonthCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_DateTime_o month, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyChallengeMonthCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeMonthCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_DateTime_o month,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeMonthCompleted_144fc38
               (undefined8 param_1,undefined8 param_2)

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
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  uStack_58 = param_2;
  if ((bRam0000000005c2376e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057deaf8);
    FUN_012d0dc8(PTR_DAT_05789390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e2f60);
    bRam0000000005c2376e = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) {
    plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar7 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar7,*(undefined8 *)PTR_DAT_05789390,0), puVar1 = PTR_DAT_057db748,
       puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_0579d5c0, puVar2 = PTR_DAT_057636d0,
       plVar8 != (long *)0x0)) {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0154fdd4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0154fdd4:
      puVar5 = PTR_DAT_0580b9d0;
      uStack_5c = (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_5c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar4,uVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar4 = PTR_DAT_057e2f60;
      puVar3 = PTR_DAT_057deaf8;
      uVar10 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar5);
      }
      puVar1 = PTR_DAT_0575f9f0;
      uVar10 = System_DateTime__ToString_2101524(&uStack_58,*(undefined8 *)puVar4,uVar10,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar3,uVar10,0);
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0154fed0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_0154fed0:
      iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar10 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
      uVar10 = System_DateTime__ToString_2101524(&uStack_58,*(undefined8 *)puVar4,uVar10,0);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyChallengeMonthCompleted_2db8984
                         ((long)iVar6,uVar10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

