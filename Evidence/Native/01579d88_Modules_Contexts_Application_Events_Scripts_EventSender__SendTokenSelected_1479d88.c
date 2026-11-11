/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTokenSelected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTokenSelected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* tokenId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTokenSelected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTokenSelected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* tokenId,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTokenSelected_1479d88
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23821 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05780248);
    FUN_012d0dc8(PTR_DAT_057761d0);
    FUN_012d0dc8(PTR_DAT_057ae778);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23821 = 1;
  }
  lVar14 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_05776540);
    puVar3 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar15 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar15,*(undefined8 *)PTR_DAT_057ae778,0), puVar5 = PTR_DAT_057d8f18,
         puVar4 = PTR_DAT_057d6138, puVar3 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_057b8b10,
         lVar14 != 0)) {
        uVar9 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                          (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar5,uVar9,0);
        uStack_68 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                              (lVar14,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar2,uVar9,0);
        uVar9 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                          (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar3,uVar9,0);
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057caaf0;
        puVar4 = PTR_DAT_05780248;
        puVar3 = PTR_DAT_057761d0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar8 != (long *)0x0) {
          lVar16 = *plVar8;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0157a018;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0157a018:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_6c = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar5,uVar9,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar3,param_2,0);
          uVar9 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                            (lVar14,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar4,uVar9,0);
          uVar9 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                            (lVar14,0);
          uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                             (lVar14,0);
          uVar12 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                             (lVar14,0);
          lVar16 = *plVar8;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0157a108;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_0157a108:
          iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar14,0);
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TokenSelected_2db0b84
                            (uVar9,uVar11,uVar12,(long)iVar7,param_2,uVar13,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar15)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

