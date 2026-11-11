/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamsMessageSent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamsMessageSent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t messageType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamsMessageSent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamsMessageSent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t messageType, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamsMessageSent_1476d4c
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iStack_58;
  undefined4 uStack_54;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23815 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e5ad8);
    FUN_012d0dc8(PTR_DAT_0575be90);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23815 = 1;
  }
  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
    plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
    puVar1 = PTR_DAT_057c8a60;
    lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar11,*(undefined8 *)PTR_DAT_05792f78);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar8 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar8,*(undefined8 *)PTR_DAT_057e5ad8,0), puVar5 = PTR_DAT_057db748,
         puVar1 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_057636d0, plVar7 != (long *)0x0)) {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_01576f00;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_01576f00:
        uStack_54 = (*(code *)*puVar9)(plVar7,puVar9[1]);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar1,uVar10,0);
        puVar4 = PTR_DAT_057d3f68;
        puVar2 = PTR_DAT_0575f9f0;
        puVar1 = PTR_DAT_0575be90;
        if (lVar11 != 0) {
          uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar11,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar4,uVar10,0);
          iStack_58 = param_2;
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_58);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar1,uVar10,0);
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_01576fe4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,1);
LAB_01576fe4:
          iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar11,0);
          uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamsMessageSent_2db0028
                             ((long)iVar6,uVar10,(long)param_2,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

