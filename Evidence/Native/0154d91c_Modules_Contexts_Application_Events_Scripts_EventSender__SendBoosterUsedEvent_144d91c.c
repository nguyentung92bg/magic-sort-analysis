/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoosterUsedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterUsedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoosterUsedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterUsedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencyType, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoosterUsedEvent_144d91c
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23767 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057ada20);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_058056c0);
    FUN_012d0dc8(PTR_DAT_05804550);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23767 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
    lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
         (plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar7,*(undefined8 *)PTR_DAT_057e8f70), plVar9 != (long *)0x0)
         ) {
        lVar7 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_0154daf0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0581aae8,10);
LAB_0154daf0:
        lVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (lVar7 != 0) {
          lVar16 = *(long *)(lVar7 + 0x20);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
          puVar1 = PTR_DAT_057ada20;
          if (lVar7 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar7,*(undefined8 *)PTR_DAT_05804550,0);
            uStack_78 = *(undefined8 *)puVar1;
            uStack_70 = 0xffffffffffffffff;
            uStack_68 = param_2;
            lVar11 = System_Enum__ToString_23a4eac(&uStack_78,0);
            puVar2 = PTR_DAT_058056c0;
            if (lVar11 != 0) {
              uVar12 = System_String__ToLower_1ed4ee0(lVar11,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar7,*(undefined8 *)puVar2,uVar12,0);
              puVar4 = PTR_DAT_057db748;
              puVar3 = PTR_DAT_057caaf0;
              puVar2 = PTR_DAT_057636d0;
              if (plVar8 != (long *)0x0) {
                lVar11 = *plVar8;
                uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto LAB_0154dbe8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0154dbe8:
                uStack_54 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)puVar3,uVar12,0);
                puVar3 = PTR_DAT_057d3f68;
                if (lVar6 != 0) {
                  uVar12 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                     (lVar6,0);
                  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                            (lVar7,*(undefined8 *)puVar3,uVar12,0);
                  puVar3 = PTR_DAT_0580a230;
                  if (lVar16 != 0) {
                    uStack_58 = *(undefined4 *)(lVar16 + 0xf8);
                    uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar7,*(undefined8 *)puVar3,uVar12,0);
                    uStack_90 = *(undefined8 *)puVar1;
                    uStack_88 = 0xffffffffffffffff;
                    uStack_80 = param_2;
                    lVar11 = System_Enum__ToString_23a4eac(&uStack_90,0);
                    puVar1 = PTR_DAT_0575f9f0;
                    if (lVar11 != 0) {
                      uVar12 = System_String__ToLower_1ed4ee0(lVar11,0);
                      lVar11 = *plVar8;
                      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                            goto LAB_0154dd00;
                          }
                          uVar14 = uVar14 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_0154dd00:
                      iVar5 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                      uVar13 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                         (lVar6,0);
                      uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BoosterUsed_2dbc608
                                         (uVar12,(long)iVar5,uVar13,(long)*(int *)(lVar16 + 0xf8),0)
                      ;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_0130472c(*(long *)puVar1);
                      }
                      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
                      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                (param_1,lVar7);
                      return;
                    }
                  }
                }
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

