/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabStageClaimedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabStageClaimedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabStageClaimedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabStageClaimedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageId, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabStageClaimedEvent_146e7fc
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237de & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576f1a0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05783a80);
    FUN_012d0dc8(PTR_DAT_0577d810);
    FUN_012d0dc8(PTR_DAT_057d3108);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c237de = 1;
  }
  lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
    puVar3 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar15,*(undefined8 *)PTR_DAT_0576f1a0);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar10 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar10,*(undefined8 *)PTR_DAT_057d3108,0), puVar6 = PTR_DAT_057e66c0,
         puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_05783a80,
         puVar3 = PTR_DAT_0577d810, puVar1 = PTR_DAT_0575a580, lVar15 != 0)) {
        uVar11 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar11,0);
        iStack_64 = param_2;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar3,uVar11,0);
                    /* try { // try from 0156e9ec to 0166f0bf has its CatchHandler @ 0156e9ec
                       catch() { ... } // from try @ 0156e9ec with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f148 with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f20c with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f26c with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f29c with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f2d4 with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f2f0 with catch @ 0156e9ec
                       catch() { ... } // from try @ 0156f320 with catch @ 0156e9ec */
        uStack_68 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCurrentStage_37540e8
                              (lVar15,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar11,0);
        uVar11 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar1,uVar11,0);
        uVar11 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar6,uVar11,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar9 != (long *)0x0) {
          lVar16 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0156eabc;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_0156eabc:
          puVar2 = PTR_DAT_0575f9f0;
          uStack_6c = (*(code *)*puVar12)(plVar9,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar3,uVar11,0);
          uVar11 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                             (lVar15,0);
          iVar7 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCurrentStage_37540e8
                            (lVar15,0);
          uVar13 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                             (lVar15,0);
          uVar14 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                             (lVar15,0);
          lVar15 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0156eb88;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar1,1);
LAB_0156eb88:
          iVar8 = (*(code *)*puVar12)(plVar9,puVar12[1]);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicLabStageClaimed_2dad6a4
                             (uVar11,(long)param_2,(long)iVar7,uVar13,uVar14,(long)iVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

