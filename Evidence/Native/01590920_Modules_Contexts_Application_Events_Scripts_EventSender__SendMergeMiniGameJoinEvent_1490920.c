/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameJoinEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameJoinEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameJoinEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameJoinEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameJoinEvent_1490920
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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23871 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0575a580);
                    /* try { // try from 015909c4 to 01690a4f has its CatchHandler @ 015909c4
                       catch() { ... } // from try @ 015909c4 with catch @ 015909c4
                       catch() { ... } // from try @ 01590a84 with catch @ 015909c4
                       catch() { ... } // from try @ 01590b48 with catch @ 015909c4
                       catch() { ... } // from try @ 01590b78 with catch @ 015909c4 */
    FUN_012d0dc8(PTR_DAT_05819710);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23871 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
    lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_057c39a8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 01590a50 to 01690a5b has its CatchHandler @ 01590b28 */
                    /* try { // try from 01590a68 to 01690a83 has its CatchHandler @ 01590b2c */
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
         (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar7,*(undefined8 *)PTR_DAT_05792f78), lVar6 != 0)) {
                    /* try { // try from 01590a84 to 01690b43 has its CatchHandler @ 015909c4 */
        uVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                          (lVar6,0);
        uVar10 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar6,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar7 != 0) {
          uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar7,0);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar4 = PTR_DAT_057e66c0;
          puVar3 = PTR_DAT_057d3f68;
          puVar1 = PTR_DAT_0575a580;
          if (lVar6 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar6,*(undefined8 *)PTR_DAT_05819710,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar6,*(undefined8 *)puVar1,uVar10,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar6,*(undefined8 *)puVar3,uVar11,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01590a50 with catch @ 01590b28
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01590a68 with catch @ 01590b2c
                        */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar6,*(undefined8 *)puVar4,uVar9,0);
            puVar4 = PTR_DAT_057db748;
            puVar3 = PTR_DAT_057caaf0;
            puVar1 = PTR_DAT_057636d0;
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
                    /* try { // try from 01590b44 to 01690b47 has its CatchHandler @ 01590b6c */
                    /* try { // try from 01590b48 to 01690b6f has its CatchHandler @ 015909c4 */
              uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                    /* catch() { ... } // from try @ 01590b44 with catch @ 01590b6c */
                    /* try { // try from 01590b70 to 01690b77 has its CatchHandler @ 01590b8c */
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar12 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_01590ba0;
                  }
                  uVar14 = uVar14 - 1;
                    /* try { // try from 01590b78 to 01690b83 has its CatchHandler @ 015909c4 */
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
                    /* try { // try from 01590b84 to 01690b8b has its CatchHandler @ 01590b8c */
              puVar12 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01590b70 with catch @ 01590b8c
                       catch(type#2 @ 00000000) { ... } // from try @ 01590b84 with catch @ 01590b8c
                        */
LAB_01590ba0:
              puVar2 = PTR_DAT_0575f9f0;
              uStack_54 = (*(code *)*puVar12)(plVar8,puVar12[1]);
              uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar6,*(undefined8 *)puVar3,uVar13,0);
              lVar7 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                    /* try { // try from 01590c20 to 01690ed3 has its CatchHandler @ 01590c20
                       catch() { ... } // from try @ 01590c20 with catch @ 01590c20
                       catch() { ... } // from try @ 015918c8 with catch @ 01590c20
                       catch() { ... } // from try @ 01591a08 with catch @ 01590c20
                       catch() { ... } // from try @ 01591a10 with catch @ 01590c20
                       catch() { ... } // from try @ 01591a40 with catch @ 01590c20
                       catch() { ... } // from try @ 01591bf8 with catch @ 01590c20 */
                    puVar12 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_01590c2c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar12 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,1);
LAB_01590c2c:
              iVar5 = (*(code *)*puVar12)(plVar8,puVar12[1]);
              uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventJoin_2dbcfe8
                                (uVar10,uVar11,uVar9,(long)iVar5,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar2);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar6);
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

