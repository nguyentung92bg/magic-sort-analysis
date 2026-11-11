/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendForceNameChangedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendForceNameChangedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* oldName, System_String_o* newName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendForceNameChangedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendForceNameChangedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* oldName,
   System_String_o* newName, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendForceNameChangedEvent_14726c0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  byte abStack_68 [4];
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057dac70);
    FUN_012d0dc8(PTR_DAT_057cf068);
    FUN_012d0dc8(PTR_DAT_057e4898);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057b8210);
    bRam0000000005c237f5 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_05792f78);
    puVar1 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar13 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar13,*(undefined8 *)PTR_DAT_057dac70,0), puVar2 = PTR_DAT_057d3f68,
         lVar12 != 0)) {
        uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                           (lVar12,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar2,uVar10,0);
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057cf068;
        puVar4 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057b8210;
        puVar2 = PTR_DAT_057636d0;
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_015728e0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_015728e0:
          puVar3 = PTR_DAT_057b4910;
          uStack_64 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar4,uVar10,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar5,param_2,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,param_3,0);
          lVar14 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
                goto LAB_01572998;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,0x10);
LAB_01572998:
          abStack_68[0] = (*(code *)*puVar11)(plVar9,puVar11[1]);
          abStack_68[0] = abStack_68[0] & 1;
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,abStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)PTR_DAT_057e4898,uVar10,0);
          uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar12,0);
          lVar12 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_01572a38;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_01572a38:
          puVar1 = PTR_DAT_0575f9f0;
          iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          lVar12 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
                goto LAB_01572aa0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,0x10);
LAB_01572aa0:
          uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ForcedNameChanged_2daef58
                             (uVar10,(long)iVar7,param_2,param_3,uVar8 & 1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar13)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

