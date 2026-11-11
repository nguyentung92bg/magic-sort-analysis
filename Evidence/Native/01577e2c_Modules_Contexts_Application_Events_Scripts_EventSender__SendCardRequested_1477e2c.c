/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCardRequested
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardRequested (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCardRequested
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardRequested
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCardRequested_1477e2c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2381a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_05780248);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05786700);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2381a = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) {
    plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) {
      lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar7,*(undefined8 *)PTR_DAT_05792f78);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
        lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar9,*(undefined8 *)PTR_DAT_05776540);
        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar10 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar10,*(undefined8 *)PTR_DAT_05786700,0), puVar1 = PTR_DAT_0575a580,
           lVar9 != 0)) {
          uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetEventId_376c7f8
                             (lVar9,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar1,uVar11,0);
          puVar3 = PTR_DAT_057db748;
          puVar2 = PTR_DAT_057caaf0;
          puVar1 = PTR_DAT_057636d0;
          if (plVar8 != (long *)0x0) {
            lVar16 = *plVar8;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_01578058;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01578058:
            uStack_54 = (*(code *)*puVar12)(plVar8,puVar12[1]);
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar10,*(undefined8 *)puVar2,uVar11,0);
            puVar5 = PTR_DAT_057d8f18;
            puVar4 = PTR_DAT_057d3f68;
            puVar3 = PTR_DAT_05780248;
            puVar2 = PTR_DAT_0575f9f0;
            if (lVar7 != 0) {
              uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar7,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar4,uVar11,0);
              uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                                 (lVar9,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar3,uVar11,0);
              uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                                 (lVar9,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar10,*(undefined8 *)puVar5,uVar11,0);
              uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetEventId_376c7f8
                                 (lVar9,0);
              lVar16 = *plVar8;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                    puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_01578170;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,1);
LAB_01578170:
              iVar6 = (*(code *)*puVar12)(plVar8,puVar12[1]);
              uVar13 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar7,0);
              uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                                 (lVar9,0);
              uVar15 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                                 (lVar9,0);
              uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamsCardRequested_2db0384
                                 (uVar11,(long)iVar6,uVar13,uVar14,uVar15,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar2);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

