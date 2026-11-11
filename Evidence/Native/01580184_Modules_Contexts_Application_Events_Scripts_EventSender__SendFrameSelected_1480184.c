/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFrameSelected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendFrameSelected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* frameId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFrameSelected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendFrameSelected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* frameId,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendFrameSelected_1480184
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined4 uStack_48;
  int iStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23836 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057870b8);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05771d70);
    FUN_012d0dc8(PTR_DAT_057f7d88);
    FUN_012d0dc8(PTR_DAT_057641f8);
    FUN_012d0dc8(PTR_DAT_057cc8e8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23836 = 1;
  }
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
    plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
      lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_05792f78);
      if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
           (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) &&
          (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar8,*(undefined8 *)PTR_DAT_057870b8), lVar8 != 0)) &&
         (lVar8 = Modules_Contexts_Home_Profile_Scripts_ProfileSpriteService__GetAllFrames_2ae3eb8
                            (lVar8,0), puVar2 = PTR_DAT_057c8a60, lVar8 != 0)) {
        uVar9 = System_Collections_Generic_List_object___Contains_21fce6c
                          (lVar8,param_2,*(undefined8 *)PTR_DAT_05771d70);
        if ((uVar9 & 1) == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = System_Collections_Generic_List_object___IndexOf_21fd78c
                            (lVar8,param_2,*(undefined8 *)PTR_DAT_057f7d88);
          iVar4 = iVar4 + 1;
        }
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_057cc8e8;
        if (lVar8 != 0) {
          Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar8,*(undefined8 *)PTR_DAT_057641f8,0);
          iStack_44 = iVar4;
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_44);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar2,uVar10,0);
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar7 != (long *)0x0) {
            lVar12 = *plVar7;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_015803f8;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_015803f8:
            uStack_48 = (*(code *)*puVar11)(plVar7,puVar11[1]);
            uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_48);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar3,uVar10,0);
            puVar3 = PTR_DAT_057d3f68;
            puVar1 = PTR_DAT_0575f9f0;
            if (lVar6 != 0) {
              uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar6,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar8,*(undefined8 *)puVar3,uVar10,0);
              lVar12 = *plVar7;
              uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_015804b0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_015804b0:
              iVar5 = (*(code *)*puVar11)(plVar7,puVar11[1]);
              uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar6,0);
              uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__FrameSelected_2db22e0
                                 ((long)iVar4,(long)iVar5,uVar10,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar8);
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

