/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabTaskCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabTaskCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currentStageId, int32_t stageIdOfCompletedTask, int32_t taskType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicLabTaskCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabTaskCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currentStageId,
   int32_t stageIdOfCompletedTask, int32_t taskType, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicLabTaskCompleted_146ddcc
               (undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237dc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576f1a0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057b14b0);
    FUN_012d0dc8(PTR_DAT_05783a80);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057eb3e0);
    FUN_012d0dc8(PTR_DAT_057eea68);
    FUN_012d0dc8(PTR_DAT_057e7570);
    FUN_012d0dc8(PTR_DAT_057d12e8);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c237dc = 1;
  }
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0156df14 to 0166df3b has its CatchHandler @ 0156e0a8 */
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_0576f1a0);
    puVar3 = PTR_DAT_057c8a60;
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar5 = PTR_DAT_057db748;
      puVar4 = PTR_DAT_057d6138;
      puVar2 = PTR_DAT_057b14b0;
      puVar3 = PTR_DAT_0579fa30;
      puVar1 = PTR_DAT_05783a80;
                    /* try { // try from 0156df70 to 0166df9b has its CatchHandler @ 0156e0a4 */
      if (lVar18 != 0) {
                    /* try { // try from 0156df9c to 0166dfa3 has its CatchHandler @ 0156e0a0 */
                    /* try { // try from 0156dfa4 to 0166e073 has its CatchHandler @ 0156d1f0 */
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar18,*(undefined8 *)PTR_DAT_057d12e8,0);
        iStack_64 = param_2;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar12,0);
        uStack_68 = param_4;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar3);
        }
        uStack_70 = System_Convert__ToInt64_2130754(uVar12,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057eea68,uVar12,0);
        puVar7 = PTR_DAT_057eb3e0;
        puVar5 = PTR_DAT_057e7570;
        puVar4 = PTR_DAT_057e66c0;
        puVar2 = PTR_DAT_057e4da8;
        puVar3 = PTR_DAT_057d3f68;
        puVar1 = PTR_DAT_0575a580;
        if (lVar17 != 0) {
                    /* try { // try from 0156e074 to 0166e077 has its CatchHandler @ 0156e09c */
                    /* try { // try from 0156e078 to 0166e07b has its CatchHandler @ 0156d1f0 */
                    /* try { // try from 0156e07c to 0166e07f has its CatchHandler @ 0156e098 */
                    /* try { // try from 0156e080 to 0166e087 has its CatchHandler @ 0156d1f0 */
          uStack_74 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetRemainingSecondsOfEvent_3753c9c
                                (lVar17,0);
          puVar6 = PTR_DAT_057db748;
                    /* try { // try from 0156e088 to 0166e08b has its CatchHandler @ 0156e094 */
                    /* try { // try from 0156e08c to 0166e0bf has its CatchHandler @ 0156d1f0 */
                    /* catch() { ... } // from try @ 0156e088 with catch @ 0156e094 */
                    /* catch() { ... } // from try @ 0156e07c with catch @ 0156e098 */
                    /* catch() { ... } // from try @ 0156e074 with catch @ 0156e09c */
                    /* catch() { ... } // from try @ 0156df9c with catch @ 0156e0a0 */
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_74);
                    /* catch() { ... } // from try @ 0156df70 with catch @ 0156e0a4 */
                    /* catch() { ... } // from try @ 0156df14 with catch @ 0156e0a8 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar2,uVar12,0);
                    /* try { // try from 0156e0c0 to 0166e0c3 has its CatchHandler @ 0156e144 */
          uStack_78 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetRemainingTaskInStage_375411c
                                (lVar17,param_2,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar7,uVar12,0);
          uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar12,0);
                    /* try { // try from 0156e110 to 0166e143 has its CatchHandler @ 0156e208 */
          iStack_7c = param_3;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar5,uVar12,0);
          uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                             (lVar17,0);
                    /* catch() { ... } // from try @ 0156e0c0 with catch @ 0156e144
                       try { // try from 0156e144 to 0166e16f has its CatchHandler @ 0156d1f0 */
                    /* catch() { ... } // from try @ 0156dafc with catch @ 0156e150 */
                    /* catch() { ... } // from try @ 0156daa0 with catch @ 0156e154 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar1,uVar12,0);
                    /* catch() { ... } // from try @ 0156db40 with catch @ 0156e158 */
          uVar12 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                             (lVar17,0);
                    /* try { // try from 0156e170 to 0166e173 has its CatchHandler @ 0156e1fc */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar12,0);
          puVar3 = PTR_DAT_057caaf0;
          puVar1 = PTR_DAT_057636d0;
          if (plVar11 != (long *)0x0) {
            lVar19 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar13 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_0156e1dc;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
                    /* try { // try from 0156e1c0 to 0166e1e7 has its CatchHandler @ 0156e208 */
            puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0156e1dc:
            puVar2 = PTR_DAT_0575f9f0;
                    /* try { // try from 0156e1e8 to 0166e1f3 has its CatchHandler @ 0156d1f0 */
            uStack_80 = (*(code *)*puVar13)(plVar11,puVar13[1]);
                    /* try { // try from 0156e1f4 to 0166e1fb has its CatchHandler @ 0156e208 */
                    /* catch() { ... } // from try @ 0156e170 with catch @ 0156e1fc */
            uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
                    /* catch() { ... } // from try @ 0156e110 with catch @ 0156e208
                       catch() { ... } // from try @ 0156e1c0 with catch @ 0156e208
                       catch() { ... } // from try @ 0156e1f4 with catch @ 0156e208 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar18,*(undefined8 *)puVar3,uVar12,0);
            uStack_84 = param_4;
            uVar12 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057b14b0,&uStack_84);
            uVar12 = System_Convert__ToInt64_2130754(uVar12,0);
            iVar8 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetRemainingSecondsOfEvent_3753c9c
                              (lVar17,0);
            iVar9 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetRemainingTaskInStage_375411c
                              (lVar17,param_2,0);
            uVar14 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetSegment_375417c
                               (lVar17,0);
            uVar15 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetEventId_3753ea4
                               (lVar17,0);
            uVar16 = Modules_Contexts_Home_MagicLab_Scripts_MagicLabService__GetReadableEventId_37541ac
                               (lVar17,0);
            lVar17 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                  puVar13 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_0156e2e4;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_0156e2e4:
            iVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicLabTaskCompleted_2dad42c
                               ((long)param_2,uVar12,(long)iVar8,(long)iVar9,uVar14,(long)param_3,
                                uVar15,uVar16,(long)iVar10,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar18);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

