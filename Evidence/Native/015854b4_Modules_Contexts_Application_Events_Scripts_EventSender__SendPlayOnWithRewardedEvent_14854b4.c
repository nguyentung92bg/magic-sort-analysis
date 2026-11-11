/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPlayOnWithRewardedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendPlayOnWithRewardedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* source, System_Collections_Generic_List_PlayOnBehaviourType__o* playOnBehaviours, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPlayOnWithRewardedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendPlayOnWithRewardedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* source,
   System_Collections_Generic_List_PlayOnBehaviourType__o* playOnBehaviours, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendPlayOnWithRewardedEvent_14854b4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23848 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05764560);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_05798908);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057fc560);
    FUN_012d0dc8(PTR_DAT_05764048);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23848 = 1;
  }
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) &&
         (plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar11,*(undefined8 *)PTR_DAT_057e8f70),
         plVar13 != (long *)0x0)) {
        lVar11 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar14 = (undefined8 *)(lVar11 + (long)(*piVar19 + 10) * 0x10 + 0x138);
              goto LAB_015856a4;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar14 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_0581aae8,10);
LAB_015856a4:
        lVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if (lVar11 != 0) {
          lVar20 = *(long *)(lVar11 + 0x20);
          lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
          if ((lVar11 != 0) &&
             (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                        (lVar11,*(undefined8 *)PTR_DAT_05798908,0), puVar2 = PTR_DAT_057d3f68,
             lVar10 != 0)) {
            uVar15 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar10,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar2,uVar15,0);
            puVar6 = PTR_DAT_057db748;
            puVar3 = PTR_DAT_057caaf0;
            puVar2 = PTR_DAT_057636d0;
            if (plVar12 != (long *)0x0) {
              lVar17 = *plVar12;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar14 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_0158577c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0158577c:
              uStack_64 = (*(code *)*puVar14)(plVar12,puVar14[1]);
              uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar3,uVar15,0);
              puVar8 = PTR_DAT_0580a230;
              puVar7 = PTR_DAT_057fc560;
              puVar5 = PTR_DAT_057ab1a0;
              puVar4 = PTR_DAT_05764560;
              puVar3 = PTR_DAT_05764048;
              if (lVar20 != 0) {
                uStack_68 = *(undefined4 *)(lVar20 + 0xf8);
                uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_68);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar11,*(undefined8 *)puVar8,uVar15,0);
                uVar15 = System_String__Join_Int32Enum__26e2308
                                   (*(undefined8 *)puVar7,param_3,*(undefined8 *)puVar4);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar11,*(undefined8 *)puVar3,uVar15,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar11,*(undefined8 *)puVar5,param_2,0);
                uVar15 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                   (lVar10,0);
                lVar10 = *plVar12;
                uVar18 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                      puVar14 = (undefined8 *)(lVar10 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_015858ac;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_015858ac:
                iVar9 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                iVar1 = *(int *)(lVar20 + 0xf8);
                uVar16 = System_String__Join_Int32Enum__26e2308
                                   (*(undefined8 *)PTR_DAT_057fc560,param_3,*(undefined8 *)puVar4);
                uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__PlayOnWithRewarded_2db47d8
                                   (uVar15,(long)iVar9,param_2,(long)iVar1,uVar16,0);
                if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (param_1,lVar11);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

