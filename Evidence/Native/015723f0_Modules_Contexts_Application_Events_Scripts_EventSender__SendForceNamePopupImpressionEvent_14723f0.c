/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendForceNamePopupImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendForceNamePopupImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendForceNamePopupImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendForceNamePopupImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendForceNamePopupImpressionEvent_14723f0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c9730);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237f4 = 1;
  }
  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_05792f78);
    puVar3 = PTR_DAT_057c8a60;
    lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
      plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar10 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar10,*(undefined8 *)PTR_DAT_057c9730,0), puVar2 = PTR_DAT_057d3f68,
         lVar9 != 0)) {
        uVar7 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                          (lVar9,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar7,0);
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar6 != (long *)0x0) {
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_015725bc;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,1);
LAB_015725bc:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_44 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar3,uVar7,0);
          uVar7 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                            (lVar9,0);
          lVar9 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_01572658;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,1);
LAB_01572658:
          iVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ForcedNameImpression_2daeec0
                            (uVar7,(long)iVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
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

