/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameSpendEnergyEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameSpendEnergyEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameSpendEnergyEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameSpendEnergyEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t multiplier, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameSpendEnergyEvent_14925b8
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  int *piVar20;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23877 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580be48);
    FUN_012d0dc8(PTR_DAT_057b0120);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05761a50);
    FUN_012d0dc8(PTR_DAT_05815d80);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23877 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057c39a8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) {
      plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) &&
         (lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar12,*(undefined8 *)PTR_DAT_05792f78), lVar11 != 0)) {
        uVar14 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                           (lVar11,0);
        uVar15 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar11,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar12 != 0) {
          uVar16 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar12,0);
          iVar8 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEnergyCount_2197298
                            (lVar11,0);
          iVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetCurrentStage_219a9ac
                            (lVar11,0,0);
          lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057d3f68;
          puVar1 = PTR_DAT_0575a580;
          if (lVar11 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar11,*(undefined8 *)PTR_DAT_05761a50,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar1,uVar15,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar2,uVar16,0);
            puVar7 = PTR_DAT_05815d80;
            puVar6 = PTR_DAT_0580be48;
            puVar5 = PTR_DAT_057e66c0;
            puVar4 = PTR_DAT_057db748;
            puVar3 = PTR_DAT_057caaf0;
            puVar2 = PTR_DAT_057b0120;
            puVar1 = PTR_DAT_057636d0;
            if (plVar13 != (long *)0x0) {
              lVar12 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar17 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_01592898;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar17 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01592898:
              uStack_64 = (*(code *)*puVar17)(plVar13,puVar17[1]);
              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar3,uVar18,0);
              iStack_68 = iVar9;
              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar2,uVar18,0);
              iStack_6c = param_2;
              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_6c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar7,uVar18,0);
              iStack_70 = iVar8;
              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar6,uVar18,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar5,uVar14,0);
              lVar12 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                    puVar17 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_015929ac;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar17 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar1,1);
LAB_015929ac:
              iVar10 = (*(code *)*puVar17)(plVar13,puVar17[1]);
              uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventSpendEnergy_2dbd740
                                 (uVar15,uVar16,(long)iVar10,(long)iVar9,(long)param_2,(long)iVar8,
                                  uVar14,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar11);
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

