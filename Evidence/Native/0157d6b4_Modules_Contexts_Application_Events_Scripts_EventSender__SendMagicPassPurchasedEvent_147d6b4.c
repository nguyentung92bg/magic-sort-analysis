/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassPurchasedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassPurchasedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedEvent_147d6b4
               (undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_0576aae0;
                    /* try { // try from 0157d6e8 to 0167d713 has its CatchHandler @ 0157d950 */
  if ((bRam0000000005c2382e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 0157d734 to 0167d77b has its CatchHandler @ 0157d95c */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05810bb0);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057f73d8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
                    /* try { // try from 0157d794 to 0167d7e7 has its CatchHandler @ 0157d958 */
    FUN_012d0dc8(PTR_DAT_05817c40);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_05800a10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057da8a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2382e = 1;
  }
                    /* try { // try from 0157d804 to 0167d817 has its CatchHandler @ 0157d944 */
  lVar24 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x18), lVar24 != 0)) {
    lVar24 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar24,*(undefined8 *)PTR_DAT_057dc218);
    puVar4 = PTR_DAT_057c8a60;
                    /* try { // try from 0157d828 to 0167d83b has its CatchHandler @ 0157d94c */
    lVar25 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x18), lVar25 != 0)) {
                    /* try { // try from 0157d844 to 0167d84f has its CatchHandler @ 0157d948 */
                    /* try { // try from 0157d850 to 0167d8db has its CatchHandler @ 0157d564 */
      plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar25,*(undefined8 *)PTR_DAT_057a1e60);
      lVar25 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar25 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar25,*(undefined8 *)PTR_DAT_057f73d8,0), puVar3 = PTR_DAT_0575a580,
         lVar24 != 0)) {
        uVar17 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                           (lVar24,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar25,*(undefined8 *)puVar3,uVar17,0);
        puVar9 = PTR_DAT_057e4da8;
        puVar8 = PTR_DAT_057e3618;
        puVar7 = PTR_DAT_057db748;
        puVar6 = PTR_DAT_057d6138;
        puVar5 = PTR_DAT_057d3f68;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057b8b10;
        if (plVar16 != (long *)0x0) {
          lVar26 = *plVar16;
                    /* try { // try from 0157d8dc to 0167d8e3 has its CatchHandler @ 0157d940 */
                    /* try { // try from 0157d8e4 to 0167d8eb has its CatchHandler @ 0157d93c */
                    /* try { // try from 0157d8ec to 0167d8ef has its CatchHandler @ 0157d940 */
                    /* try { // try from 0157d8f0 to 0167d8f3 has its CatchHandler @ 0157d938 */
                    /* try { // try from 0157d8f4 to 0167d8fb has its CatchHandler @ 0157d93c */
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    /* try { // try from 0157d8fc to 0167d903 has its CatchHandler @ 0157d940 */
          if (uVar27 != 0) {
                    /* try { // try from 0157d904 to 0167d90b has its CatchHandler @ 0157d93c */
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
                    /* try { // try from 0157d90c to 0167d913 has its CatchHandler @ 0157d934 */
                    /* try { // try from 0157d914 to 0167d91b has its CatchHandler @ 0157d930 */
              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* catch() { ... } // from try @ 0157d90c with catch @ 0157d934 */
                    /* catch() { ... } // from try @ 0157d8f0 with catch @ 0157d938 */
                    /* catch() { ... } // from try @ 0157d8e4 with catch @ 0157d93c
                       catch() { ... } // from try @ 0157d8f4 with catch @ 0157d93c
                       catch() { ... } // from try @ 0157d904 with catch @ 0157d93c */
                    /* catch() { ... } // from try @ 0157d8dc with catch @ 0157d940
                       catch() { ... } // from try @ 0157d8ec with catch @ 0157d940
                       catch() { ... } // from try @ 0157d8fc with catch @ 0157d940 */
                puVar18 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_0157d944;
              }
              uVar27 = uVar27 - 1;
                    /* try { // try from 0157d91c to 0167d91f has its CatchHandler @ 0157d564 */
              piVar28 = piVar28 + 4;
                    /* try { // try from 0157d920 to 0167d923 has its CatchHandler @ 0157d92c */
            } while (uVar27 != 0);
          }
                    /* try { // try from 0157d924 to 0167d96b has its CatchHandler @ 0157d564 */
                    /* catch() { ... } // from try @ 0157d920 with catch @ 0157d92c */
          puVar18 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,1);
                    /* catch() { ... } // from try @ 0157d914 with catch @ 0157d930 */
LAB_0157d944:
                    /* catch() { ... } // from try @ 0157d804 with catch @ 0157d944 */
                    /* catch() { ... } // from try @ 0157d844 with catch @ 0157d948 */
                    /* catch() { ... } // from try @ 0157d828 with catch @ 0157d94c */
          uStack_64 = (*(code *)*puVar18)(plVar16,puVar18[1]);
                    /* catch() { ... } // from try @ 0157d6e8 with catch @ 0157d950 */
                    /* catch() { ... } // from try @ 0157d68c with catch @ 0157d954 */
                    /* catch() { ... } // from try @ 0157d794 with catch @ 0157d958 */
                    /* catch() { ... } // from try @ 0157d734 with catch @ 0157d95c */
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
                    /* try { // try from 0157d96c to 0167d96f has its CatchHandler @ 0157d9fc */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar4,uVar17,0);
                    /* try { // try from 0157d980 to 0167d9e7 has its CatchHandler @ 0157da04 */
          uStack_70 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                                (lVar24,0);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar3,uVar17,0);
          uStack_74 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                                (lVar24,0);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar9,uVar17,0);
                    /* try { // try from 0157d9e8 to 0167d9f3 has its CatchHandler @ 0157d564 */
          uVar17 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar24,0);
                    /* try { // try from 0157d9f4 to 0167d9fb has its CatchHandler @ 0157da04 */
                    /* catch() { ... } // from try @ 0157d96c with catch @ 0157d9fc */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar5,uVar17,0);
                    /* catch() { ... } // from try @ 0157d980 with catch @ 0157da04
                       catch() { ... } // from try @ 0157d9f4 with catch @ 0157da04 */
          uStack_90 = *(undefined8 *)PTR_DAT_05810bb0;
          uStack_88 = 0xffffffffffffffff;
          uStack_80 = param_2;
          uVar17 = System_Enum__ToString_23a4eac(&uStack_90,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar8,uVar17,0);
          uVar10 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentStep_38dca40
                             (lVar24,0);
          uVar11 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetDefaultStepsCount_38dcb3c
                             (lVar24,0);
          if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_057d6f00);
          }
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          puVar8 = PTR_DAT_05817c40;
          puVar6 = PTR_DAT_05800a10;
          puVar5 = PTR_DAT_057e66c0;
          puVar4 = PTR_DAT_057da8a0;
          puVar3 = PTR_DAT_05774660;
          if ((int)uVar11 < 0) {
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            System_Math__ThrowMinMaxException_int__29c3384(0,uVar11,*(undefined8 *)PTR_DAT_05800a28)
            ;
          }
          if ((int)uVar10 <= (int)uVar11) {
            uVar11 = uVar10;
          }
          uStack_94 = 0;
          if (-1 < (int)uVar10) {
            uStack_94 = uVar11;
          }
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar3,uVar17,0);
          uVar27 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar24,0);
          uVar17 = *(undefined8 *)puVar6;
          uVar23 = 1;
          if ((uVar27 & 1) == 0) {
            uVar23 = 2;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar23);
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar17,uVar19,0)
          ;
          uStack_64 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUnclaimedRewardCount_38de0e0
                                (lVar24,0);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar4,uVar17,0);
          uStack_74 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentVaultCoinAmount_38dd04c
                                (lVar24,0);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar8,uVar17,0);
          uVar17 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar24,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar5,uVar17,0);
          uVar17 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                             (lVar24,0);
          lVar26 = *plVar16;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar18 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_0157dc6c;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar18 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,1);
LAB_0157dc6c:
          iVar12 = (*(code *)*puVar18)(plVar16,puVar18[1]);
          uVar19 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                             (lVar24,0);
          iVar13 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                             (lVar24,0);
          uVar20 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar24,0);
          uStack_90 = *(undefined8 *)PTR_DAT_05810bb0;
          uStack_88 = 0xffffffffffffffff;
          uStack_80 = param_2;
          uVar21 = System_Enum__ToString_23a4eac(&uStack_90,0);
          iVar14 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentStep_38dca40
                             (lVar24,0);
          iVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetDefaultStepsCount_38dcb3c
                             (lVar24,0);
          if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_057d6f00);
          }
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          puVar3 = PTR_DAT_0575f9f0;
          if (iVar15 < 0) {
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            System_Math__ThrowMinMaxException_int__29c3384(0,iVar15,*(undefined8 *)PTR_DAT_05800a28)
            ;
          }
          if (iVar14 <= iVar15) {
            iVar15 = iVar14;
          }
          iVar2 = 0;
          if (-1 < iVar14) {
            iVar2 = iVar15;
          }
          uVar27 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar24,0);
          uVar1 = 1;
          if ((uVar27 & 1) == 0) {
            uVar1 = 2;
          }
          iVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUnclaimedRewardCount_38de0e0
                             (lVar24,0);
          iVar14 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentVaultCoinAmount_38dd04c
                             (lVar24,0);
          uVar22 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar24,0);
          uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicPassPurchased_2db1958
                             (uVar17,(long)iVar12,uVar19,(long)iVar13,uVar20,uVar21,(long)iVar2,
                              uVar1,(long)iVar15,(long)iVar14,uVar22,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar3);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar25)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

