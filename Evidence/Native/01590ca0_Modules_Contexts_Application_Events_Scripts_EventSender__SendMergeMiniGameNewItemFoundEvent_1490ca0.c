/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameNewItemFoundEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameNewItemFoundEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* foundedItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameNewItemFoundEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameNewItemFoundEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   foundedItemId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameNewItemFoundEvent_1490ca0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23872 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580be48);
    FUN_012d0dc8(PTR_DAT_058023f8);
    FUN_012d0dc8(PTR_DAT_0578cb08);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23872 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 != 0)) {
    lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_057c39a8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) &&
         (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar9,*(undefined8 *)PTR_DAT_05792f78), lVar8 != 0)) {
        uVar11 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                           (lVar8,0);
        uVar12 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar8,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar9 != 0) {
          uVar13 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar9,0);
          iVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEnergyCount_2197298
                            (lVar8,0);
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_0580be48;
          puVar5 = PTR_DAT_057db748;
          puVar4 = PTR_DAT_057d3f68;
          puVar3 = PTR_DAT_0578cb08;
          puVar1 = PTR_DAT_0575a580;
          if (lVar8 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar8,*(undefined8 *)PTR_DAT_058023f8,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar1,uVar12,0);
                    /* try { // try from 01590ed4 to 01690efb has its CatchHandler @ 01591b70 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar4,uVar13,0);
            iStack_64 = iVar6;
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar2,uVar14,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar3,param_2,0);
            puVar4 = PTR_DAT_057e66c0;
            puVar3 = PTR_DAT_057caaf0;
            puVar1 = PTR_DAT_057636d0;
            if (plVar10 != (long *)0x0) {
              lVar9 = *plVar10;
                    /* try { // try from 01590f30 to 01690f57 has its CatchHandler @ 01591b6c */
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 01590f84 to 01690f87 has its CatchHandler @ 01591b4c */
                    puVar15 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_01590f88;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                    /* try { // try from 01590f64 to 01690f6f has its CatchHandler @ 01591b64 */
                } while (uVar16 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01590f88:
              puVar2 = PTR_DAT_0575f9f0;
                    /* try { // try from 01590f88 to 01690f93 has its CatchHandler @ 01591b68 */
              uStack_68 = (*(code *)*puVar15)(plVar10,puVar15[1]);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
                    /* try { // try from 01590fb4 to 01690fb7 has its CatchHandler @ 01591b3c */
                    /* try { // try from 01590fb8 to 01690fc3 has its CatchHandler @ 01591b5c */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar8,*(undefined8 *)puVar3,uVar14,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar8,*(undefined8 *)puVar4,uVar11,0);
              lVar9 = *plVar10;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    /* try { // try from 01590fe4 to 01690fe7 has its CatchHandler @ 01591b30 */
              if (uVar16 != 0) {
                    /* try { // try from 01590fe8 to 01690ff3 has its CatchHandler @ 01591b50 */
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                    /* try { // try from 01591018 to 01691023 has its CatchHandler @ 01591b40 */
                    puVar15 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_01591028;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
                    /* try { // try from 01591014 to 01691017 has its CatchHandler @ 01591b24 */
LAB_01591028:
              iVar7 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                    /* try { // try from 01591044 to 01691047 has its CatchHandler @ 01591b14 */
                    /* try { // try from 01591048 to 01691053 has its CatchHandler @ 01591b34 */
              uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventNewItemFound_2dbd0c8
                                 (uVar12,uVar13,(long)iVar6,param_2,(long)iVar7,uVar11,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar2);
              }
                    /* try { // try from 01591074 to 01691077 has its CatchHandler @ 01591b08 */
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
                    /* try { // try from 01591078 to 01691083 has its CatchHandler @ 01591b28 */
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
                    /* try { // try from 015910a4 to 016910a7 has its CatchHandler @ 01591afc */
  FUN_012d0ef0();
}

