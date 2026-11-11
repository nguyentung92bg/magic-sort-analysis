/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabInfoImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabInfoImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabInfoImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabInfoImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabInfoImpressionEvent_146da08
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237db & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576f1a0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a73c8);
                    /* try { // try from 0156daa0 to 0166dac7 has its CatchHandler @ 0156e154 */
    FUN_012d0dc8(PTR_DAT_05783a80);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c237db = 1;
  }
  lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
                    /* try { // try from 0156dafc to 0166db23 has its CatchHandler @ 0156e150 */
    plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
    puVar3 = PTR_DAT_057c8a60;
    lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar14,*(undefined8 *)PTR_DAT_0576f1a0);
                    /* try { // try from 0156db40 to 0166db87 has its CatchHandler @ 0156e158 */
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar9 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar9,*(undefined8 *)PTR_DAT_057a73c8,0), puVar5 = PTR_DAT_057e66c0,
         puVar4 = PTR_DAT_057db748, puVar2 = PTR_DAT_057d3f68, puVar3 = PTR_DAT_05783a80,
         puVar1 = PTR_DAT_0575a580, lVar14 != 0)) {
                    /* try { // try from 0156db88 to 0166df13 has its CatchHandler @ 0156d1f0 */
        uVar10 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                           (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar2,uVar10,0);
        uStack_54 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCurrentStage_37540e8
                              (lVar14,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar3,uVar10,0);
        uVar10 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                           (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar1,uVar10,0);
        uVar10 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                           (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar5,uVar10,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar8 != (long *)0x0) {
          lVar15 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0156dc88;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0156dc88:
          puVar2 = PTR_DAT_0575f9f0;
          uStack_58 = (*(code *)*puVar11)(plVar8,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar9,*(undefined8 *)puVar3,uVar10,0);
          uVar10 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                             (lVar14,0);
          iVar6 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCurrentStage_37540e8
                            (lVar14,0);
          uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                             (lVar14,0);
          uVar13 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                             (lVar14,0);
          lVar14 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0156dd54;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,1);
LAB_0156dd54:
          iVar7 = (*(code *)*puVar11)(plVar8,puVar11[1]);
          uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicLabInfoImpression_2dad338
                             (uVar10,(long)iVar6,uVar12,uVar13,(long)iVar7,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

