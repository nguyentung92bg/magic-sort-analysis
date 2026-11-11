/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyChallengeScreenViewEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeScreenViewEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t dailyScreenViewSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyChallengeScreenViewEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeScreenViewEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t
   dailyScreenViewSource, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeScreenViewEvent_144ff5c
               (undefined8 param_1,undefined4 param_2)

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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2376f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05798420);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057b07d8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2376f = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) {
    plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar8,*(undefined8 *)PTR_DAT_057a1e60);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar8 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar8,*(undefined8 *)PTR_DAT_057b07d8,0), puVar6 = PTR_DAT_057e3618,
       puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_05798420,
       puVar2 = PTR_DAT_057636d0, plVar9 != (long *)0x0)) {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_015500ec;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_015500ec:
      puVar1 = PTR_DAT_0575f9f0;
      uStack_54 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar4,uVar11,0);
      uStack_78 = *(undefined8 *)puVar3;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = param_2;
      uVar11 = System_Enum__ToString_23a4eac(&uStack_78,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar6,uVar11,0);
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_015501a8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_015501a8:
      iVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uStack_90 = *(undefined8 *)puVar3;
      uStack_88 = 0xffffffffffffffff;
      uStack_80 = param_2;
      uVar11 = System_Enum__ToString_23a4eac(&uStack_90,0);
      uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyChallengeScreenView_2db88ec
                         ((long)iVar7,uVar11,0);
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

