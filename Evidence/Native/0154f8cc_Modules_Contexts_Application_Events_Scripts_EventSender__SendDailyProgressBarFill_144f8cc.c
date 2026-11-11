/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyProgressBarFill
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyProgressBarFill (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_DateTime_o month, int32_t completedDaysInMonth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyProgressBarFill
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyProgressBarFill
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_DateTime_o month,
   int32_t completedDaysInMonth, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyProgressBarFill_144f8cc
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  uStack_68 = param_2;
  if ((bRam0000000005c2376d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057deaf8);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_0576e3e0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e2f60);
    bRam0000000005c2376d = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) {
    plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar8,*(undefined8 *)PTR_DAT_057a1e60);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar8 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar8,*(undefined8 *)PTR_DAT_0576e3e0,0), puVar5 = PTR_DAT_057db748,
       puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_0579d5c0, puVar2 = PTR_DAT_057636d0,
       plVar9 != (long *)0x0)) {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0154fa7c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_0154fa7c:
      puVar1 = PTR_DAT_0580b9d0;
      uStack_6c = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar4,uVar11,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar6 = PTR_DAT_057e2f60;
      puVar4 = PTR_DAT_057deaf8;
      puVar3 = PTR_DAT_05774660;
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_0575f9f0;
      uVar11 = System_DateTime__ToString_2101524(&uStack_68,*(undefined8 *)puVar6,uVar11,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar4,uVar11,0);
      iStack_70 = param_3;
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar3,uVar11,0);
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0154fba4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_0154fba4:
      iVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
      uVar11 = System_DateTime__ToString_2101524(&uStack_68,*(undefined8 *)puVar6,uVar11,0);
      uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyProgressBarFill_2db8a1c
                         ((long)iVar7,uVar11,(long)param_3,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

