/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneSpinned
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneSpinned (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageIndex, int32_t spinResultIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneSpinned
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneSpinned
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stageIndex, int32_t
   spinResultIndex, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneSpinned_14830bc
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
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
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23841 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057b5998);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057ada20);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058066c0);
    FUN_012d0dc8(PTR_DAT_058089a0);
    FUN_012d0dc8(PTR_DAT_0578b748);
                    /* try { // try from 0158317c to 01683183 has its CatchHandler @ 015831dc */
    FUN_012d0dc8(PTR_DAT_057a0f20);
                    /* try { // try from 01583190 to 016831a7 has its CatchHandler @ 015831d8 */
    FUN_012d0dc8(PTR_DAT_057ea5d8);
    FUN_012d0dc8(PTR_DAT_058196c0);
                    /* try { // try from 015831a8 to 016831cb has its CatchHandler @ 015830a0 */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23841 = 1;
  }
                    /* try { // try from 015831cc to 016831cf has its CatchHandler @ 015831d4 */
                    /* try { // try from 015831d0 to 016831f3 has its CatchHandler @ 015830a0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015831cc with catch @ 015831d4
                        */
  lVar18 = **(long **)(*(long *)puVar2 + 0xb8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01583190 with catch @ 015831d8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158317c with catch @ 015831dc
                        */
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
    lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar18,*(undefined8 *)PTR_DAT_057b5998);
                    /* try { // try from 015831f4 to 016831f7 has its CatchHandler @ 01583220 */
                    /* try { // try from 015831f8 to 0168322f has its CatchHandler @ 015830a0 */
    lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
                    /* catch() { ... } // from try @ 015831f4 with catch @ 01583220 */
    if ((lVar19 != 0) &&
       ((lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0 &&
        (plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar19,*(undefined8 *)PTR_DAT_057a1e60),
        puVar2 = PTR_DAT_057c8a60, lVar18 != 0)))) {
                    /* try { // try from 01583230 to 01683237 has its CatchHandler @ 0158324c */
                    /* try { // try from 01583238 to 01683243 has its CatchHandler @ 015830a0 */
      iVar8 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetCurrentStageIndex_2da5930
                        (lVar18,0);
                    /* try { // try from 01583244 to 0168324b has its CatchHandler @ 0158324c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01583230 with catch @ 0158324c
                       catch(type#2 @ 00000000) { ... } // from try @ 01583244 with catch @ 0158324c
                        */
      uVar12 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetSegment_2da6128
                         (lVar18,0);
      lVar19 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetStageReward_2da9700
                         (lVar18,param_2,param_3,0);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar4 = PTR_DAT_058196c0;
      puVar5 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_057d3f68;
      if (lVar13 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar13,*(undefined8 *)PTR_DAT_057ea5d8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar2,uVar12,0);
        uStack_80 = CONCAT44(uStack_80._4_4_,iVar8 + 1);
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_80);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar4,uVar14,0);
        puVar7 = PTR_DAT_058089a0;
        puVar6 = PTR_DAT_057e66c0;
        puVar4 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_0578b748;
        if (plVar11 != (long *)0x0) {
          lVar20 = *plVar11;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_01583368;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01583368:
          puVar3 = PTR_DAT_057ada20;
          uStack_64 = (*(code *)*puVar15)(plVar11,puVar15[1]);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar4,uVar14,0);
          uStack_68 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                                (lVar18,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar7,uVar14,0);
          uVar14 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar18,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar6,uVar14,0);
          uVar14 = *(undefined8 *)puVar2;
          if (lVar19 == 0) {
            lVar20 = 0;
          }
          else {
            uStack_80 = *(undefined8 *)puVar3;
            uStack_70 = *(undefined4 *)(lVar19 + 0x10);
            uStack_78 = 0xffffffffffffffff;
            lVar20 = System_Enum__ToString_23a4eac(&uStack_80,0);
            if (lVar20 == 0) goto LAB_015835e4;
            lVar20 = System_String__ToLower_1ed4ee0(lVar20,0);
          }
          puVar4 = PTR_DAT_058066c0;
          puVar2 = PTR_DAT_057a0f20;
          lVar1 = *(long *)PTR_DAT_058066c0;
          if (lVar20 != 0) {
            lVar1 = lVar20;
          }
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar13,uVar14,lVar1,0);
          uVar14 = *(undefined8 *)puVar2;
          if (lVar19 == 0) {
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = *(undefined4 *)(lVar19 + 0x14);
          }
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar17);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar13,uVar14,uVar16,0)
          ;
          lVar20 = *plVar11;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_015834f0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_015834f0:
          iVar9 = (*(code *)*puVar15)(plVar11,puVar15[1]);
          iVar10 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetWheelOfFortuneCurrencyCount_2da59a0
                             (lVar18,0);
          uVar14 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar18,0);
          if (lVar19 == 0) {
            lVar19 = -1;
            lVar18 = *(long *)puVar4;
          }
          else {
            uStack_80 = *(undefined8 *)puVar3;
            uStack_70 = *(undefined4 *)(lVar19 + 0x10);
            uStack_78 = 0xffffffffffffffff;
            lVar18 = System_Enum__ToString_23a4eac(&uStack_80,0);
            if (lVar18 == 0) goto LAB_015835e4;
            lVar20 = System_String__ToLower_1ed4ee0(lVar18,0);
            lVar19 = (long)*(int *)(lVar19 + 0x14);
            lVar18 = *(long *)puVar4;
            if (lVar20 != 0) {
              lVar18 = lVar20;
            }
          }
          puVar2 = PTR_DAT_0575f9f0;
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WheelOfFortuneWheelSpinned_2db2fa8
                             (0,uVar12,(long)(iVar8 + 1),uVar14,lVar18,lVar19,(long)iVar10,
                              (long)iVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar13)
          ;
          return;
        }
      }
    }
  }
LAB_015835e4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

