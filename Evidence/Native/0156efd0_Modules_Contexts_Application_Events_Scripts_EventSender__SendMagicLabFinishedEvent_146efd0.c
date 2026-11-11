/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabFinishedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabFinishedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabFinishedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabFinishedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabFinishedEvent_146efd0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237e0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576f1a0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0577f648);
    FUN_012d0dc8(PTR_DAT_05795198);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057a8d50);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c237e0 = 1;
  }
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0156f0c0 to 0166f0c7 has its CatchHandler @ 0156f27c */
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
                    /* try { // try from 0156f0d4 to 0166f147 has its CatchHandler @ 0156f2d4 */
    plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
    puVar3 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar16,*(undefined8 *)PTR_DAT_0576f1a0);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar11 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar11,*(undefined8 *)PTR_DAT_0577f648,0), puVar6 = PTR_DAT_057e66c0,
         puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_057a8d50,
         puVar3 = PTR_DAT_05795198, puVar1 = PTR_DAT_0575a580, lVar16 != 0)) {
                    /* try { // try from 0156f148 to 0166f183 has its CatchHandler @ 0156e9ec */
        uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                           (lVar16,0);
                    /* try { // try from 0156f184 to 0166f18b has its CatchHandler @ 0156f278 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar4,uVar12,0);
                    /* try { // try from 0156f198 to 0166f20b has its CatchHandler @ 0156f280 */
        uStack_54 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCompletedStageCount_375414c
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar3,uVar12,0);
        uStack_58 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetClaimedChestCount_3754164
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar2,uVar12,0);
        uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                           (lVar16,0);
                    /* try { // try from 0156f20c to 0166f263 has its CatchHandler @ 0156e9ec */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar1,uVar12,0);
        uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar6,uVar12,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar17 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
                    /* try { // try from 0156f264 to 0166f267 has its CatchHandler @ 0156f274 */
                    /* try { // try from 0156f268 to 0166f26b has its CatchHandler @ 0156f270 */
                    /* try { // try from 0156f26c to 0166f297 has its CatchHandler @ 0156e9ec */
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 0156f298 to 0166f29b has its CatchHandler @ 0156f2b8 */
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0156f29c;
              }
                    /* catch() { ... } // from try @ 0156f268 with catch @ 0156f270 */
              uVar18 = uVar18 - 1;
                    /* catch() { ... } // from try @ 0156f264 with catch @ 0156f274 */
              piVar19 = piVar19 + 4;
                    /* catch() { ... } // from try @ 0156f184 with catch @ 0156f278 */
            } while (uVar18 != 0);
          }
                    /* catch() { ... } // from try @ 0156f0c0 with catch @ 0156f27c */
                    /* catch() { ... } // from try @ 0156f198 with catch @ 0156f280 */
          puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0156f29c:
          puVar2 = PTR_DAT_0575f9f0;
                    /* try { // try from 0156f29c to 0166f2bf has its CatchHandler @ 0156e9ec */
          uStack_64 = (*(code *)*puVar13)(plVar10,puVar13[1]);
                    /* catch() { ... } // from try @ 0156f298 with catch @ 0156f2b8 */
                    /* try { // try from 0156f2c0 to 0166f2d3 has its CatchHandler @ 0156f334 */
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
                    /* catch() { ... } // from try @ 0156f0d4 with catch @ 0156f2d4
                       try { // try from 0156f2d4 to 0166f2eb has its CatchHandler @ 0156e9ec */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar3,uVar12,0);
          uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                             (lVar16,0);
                    /* try { // try from 0156f2ec to 0166f2ef has its CatchHandler @ 0156f310 */
                    /* try { // try from 0156f2f0 to 0166f317 has its CatchHandler @ 0156e9ec */
          iVar7 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetCompletedStageCount_375414c
                            (lVar16,0);
          iVar8 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetClaimedChestCount_3754164
                            (lVar16,0);
                    /* catch() { ... } // from try @ 0156f2ec with catch @ 0156f310 */
          uVar14 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                             (lVar16,0);
                    /* try { // try from 0156f318 to 0166f31f has its CatchHandler @ 0156f334 */
                    /* try { // try from 0156f320 to 0166f32b has its CatchHandler @ 0156e9ec */
          uVar15 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                             (lVar16,0);
          lVar16 = *plVar10;
                    /* try { // try from 0156f32c to 0166f333 has its CatchHandler @ 0156f334 */
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    /* catch() { ... } // from try @ 0156f2c0 with catch @ 0156f334
                       catch() { ... } // from try @ 0156f318 with catch @ 0156f334
                       catch() { ... } // from try @ 0156f32c with catch @ 0156f334 */
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0156f378;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_0156f378:
          iVar9 = (*(code *)*puVar13)(plVar10,puVar13[1]);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicLabFinished_2dad8a8
                             (uVar12,(long)iVar7,(long)iVar8,uVar14,uVar15,(long)iVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar11)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

