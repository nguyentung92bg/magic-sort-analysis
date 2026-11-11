/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAddedTinyBottleInPlayOnEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendAddedTinyBottleInPlayOnEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAddedTinyBottleInPlayOnEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendAddedTinyBottleInPlayOnEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendAddedTinyBottleInPlayOnEvent_1485954
               (undefined8 param_1)

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
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23849 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_05803ee8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23849 = 1;
  }
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
    lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) &&
         (plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar7,*(undefined8 *)PTR_DAT_057e8f70), plVar9 != (long *)0x0)
         ) {
        lVar7 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar14 + 10) * 0x10 + 0x138);
              goto LAB_01585b04;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0581aae8,10);
LAB_01585b04:
        lVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (lVar7 != 0) {
          lVar15 = *(long *)(lVar7 + 0x20);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
          if ((lVar7 != 0) &&
             (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                        (lVar7,*(undefined8 *)PTR_DAT_05803ee8,0), puVar2 = PTR_DAT_057d3f68,
             lVar6 != 0)) {
            uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar6,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar7,*(undefined8 *)puVar2,uVar11,0);
            puVar3 = PTR_DAT_057db748;
            puVar1 = PTR_DAT_057caaf0;
            puVar2 = PTR_DAT_057636d0;
            if (plVar8 != (long *)0x0) {
              lVar12 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_01585bdc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01585bdc:
              uStack_44 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_44);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar7,*(undefined8 *)puVar1,uVar11,0);
              puVar4 = PTR_DAT_0580a230;
              puVar1 = PTR_DAT_0575f9f0;
              if (lVar15 != 0) {
                uStack_48 = *(undefined4 *)(lVar15 + 0xf8);
                uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_48);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar7,*(undefined8 *)puVar4,uVar11,0);
                uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                   (lVar6,0);
                lVar6 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                      puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_01585cac;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_01585cac:
                iVar5 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__PlayOnWithRewardedMegaShuffleStucked_2dbc358
                                   (uVar11,(long)iVar5,(long)*(int *)(lVar15 + 0xf8),0);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)puVar1);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

