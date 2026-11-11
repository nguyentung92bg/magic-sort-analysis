/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameOfferPurchasedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameOfferPurchasedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameOfferPurchasedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameOfferPurchasedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameOfferPurchasedStat_148a3d0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0158a3e4 to 0168a3eb has its CatchHandler @ 0158a774 */
                    /* try { // try from 0158a3f4 to 0168a407 has its CatchHandler @ 0158a770 */
  if ((bRam0000000005c23857 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0158a414 to 0168a41b has its CatchHandler @ 0158a794 */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c3020);
                    /* try { // try from 0158a428 to 0168a433 has its CatchHandler @ 0158a758 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 0158a450 to 0168a457 has its CatchHandler @ 0158a778 */
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* try { // try from 0158a45c to 0168a46f has its CatchHandler @ 0158a790 */
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d6f00);
                    /* try { // try from 0158a478 to 0168a483 has its CatchHandler @ 0158a77c */
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05810170);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05782070);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
                    /* try { // try from 0158a4d0 to 0168a4db has its CatchHandler @ 0158a7b0 */
    bRam0000000005c23857 = 1;
  }
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0158a4e8 to 0168a4f3 has its CatchHandler @ 0158a744 */
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
    puVar2 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0158a510 to 0168a517 has its CatchHandler @ 0158a768 */
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
                    /* try { // try from 0158a520 to 0168a527 has its CatchHandler @ 0158a764 */
      lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar16,*(undefined8 *)PTR_DAT_057c3020);
                    /* try { // try from 0158a540 to 0168a557 has its CatchHandler @ 0158a760 */
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar10 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar10,*(undefined8 *)PTR_DAT_05810170,0), puVar5 = PTR_DAT_057e4da8,
         puVar4 = PTR_DAT_057d6138, puVar3 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_057b8b10,
         puVar1 = PTR_DAT_0575a580, lVar16 != 0)) {
                    /* try { // try from 0158a568 to 0168a56f has its CatchHandler @ 0158a74c */
                    /* try { // try from 0158a578 to 0168a583 has its CatchHandler @ 0158a748 */
        uVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                           (lVar16,0);
                    /* try { // try from 0158a59c to 0168a5a7 has its CatchHandler @ 0158a7b0 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar1,uVar11,0);
                    /* try { // try from 0158a5b0 to 0168a5b7 has its CatchHandler @ 0158a78c */
        uStack_68 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                              (lVar16,0);
                    /* try { // try from 0158a5bc to 0168a5cb has its CatchHandler @ 0158a75c */
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar11,0);
        uStack_70 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                              (lVar16,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar5,uVar11,0);
                    /* try { // try from 0158a618 to 0168a623 has its CatchHandler @ 0158a780 */
        uVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar3,uVar11,0);
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057d6f00;
        puVar2 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar9 != (long *)0x0) {
                    /* try { // try from 0158a638 to 0168a63f has its CatchHandler @ 0158a754 */
          lVar17 = *plVar9;
                    /* try { // try from 0158a648 to 0168a653 has its CatchHandler @ 0158a750 */
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
                    /* try { // try from 0158a66c to 0168a677 has its CatchHandler @ 0158a780 */
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0158a6a8;
              }
              uVar18 = uVar18 - 1;
                    /* try { // try from 0158a680 to 0168a687 has its CatchHandler @ 0158a76c */
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
                    /* try { // try from 0158a688 to 0168a6cb has its CatchHandler @ 0158a1ac */
          puVar12 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_0158a6a8:
          uStack_74 = (*(code *)*puVar12)(plVar9,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
                    /* try { // try from 0158a6cc to 0168a6cf has its CatchHandler @ 0158a740 */
                    /* try { // try from 0158a6d0 to 0168a6d3 has its CatchHandler @ 0158a73c */
                    /* try { // try from 0158a6d4 to 0168a6d7 has its CatchHandler @ 0158a738 */
                    /* try { // try from 0158a6d8 to 0168a6db has its CatchHandler @ 0158a734 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar2,uVar11,0);
                    /* try { // try from 0158a6dc to 0168a6df has its CatchHandler @ 0158a7a8 */
                    /* try { // try from 0158a6e0 to 0168a6e3 has its CatchHandler @ 0158a730 */
                    /* try { // try from 0158a6e4 to 0168a6e7 has its CatchHandler @ 0158a7a4 */
          iVar6 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetCurrentStage_20b6654
                            (lVar16,0);
                    /* try { // try from 0158a6e8 to 0168a6eb has its CatchHandler @ 0158a72c */
                    /* try { // try from 0158a6ec to 0168a6ef has its CatchHandler @ 0158a728 */
                    /* try { // try from 0158a6f0 to 0168a6f3 has its CatchHandler @ 0158a7b0 */
                    /* try { // try from 0158a6f4 to 0168a6f7 has its CatchHandler @ 0158a724 */
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 0158a6f8 to 0168a6fb has its CatchHandler @ 0158a720 */
                    /* try { // try from 0158a6fc to 0168a6ff has its CatchHandler @ 0158a778 */
            thunk_FUN_0130472c(*(long *)puVar3);
          }
                    /* try { // try from 0158a700 to 0168a703 has its CatchHandler @ 0158a71c */
          puVar3 = PTR_DAT_05782070;
          puVar2 = PTR_DAT_05774660;
                    /* try { // try from 0158a704 to 0168a707 has its CatchHandler @ 0158a718 */
                    /* try { // try from 0158a708 to 0168a70b has its CatchHandler @ 0158a780 */
                    /* try { // try from 0158a70c to 0168a70f has its CatchHandler @ 0158a768 */
                    /* try { // try from 0158a710 to 0168a713 has its CatchHandler @ 0158a714 */
                    /* catch() { ... } // from try @ 0158a710 with catch @ 0158a714
                       try { // try from 0158a714 to 0168a7cf has its CatchHandler @ 0158a1ac */
                    /* catch() { ... } // from try @ 0158a704 with catch @ 0158a718 */
          iVar6 = iVar6 + 1;
                    /* catch() { ... } // from try @ 0158a700 with catch @ 0158a71c */
          if (cRam0000000005c230ab == '\0') {
                    /* catch() { ... } // from try @ 0158a6f8 with catch @ 0158a720 */
                    /* catch() { ... } // from try @ 0158a6f4 with catch @ 0158a724 */
                    /* catch() { ... } // from try @ 0158a6ec with catch @ 0158a728 */
            FUN_012d0dc8(PTR_DAT_05800a28);
                    /* catch() { ... } // from try @ 0158a6e8 with catch @ 0158a72c */
                    /* catch() { ... } // from try @ 0158a6e0 with catch @ 0158a730 */
                    /* catch() { ... } // from try @ 0158a6d8 with catch @ 0158a734 */
            FUN_012d0dc8(PTR_DAT_057d6f00);
                    /* catch() { ... } // from try @ 0158a6d4 with catch @ 0158a738 */
                    /* catch() { ... } // from try @ 0158a6d0 with catch @ 0158a73c */
            cRam0000000005c230ab = '\x01';
          }
                    /* catch() { ... } // from try @ 0158a6cc with catch @ 0158a740 */
                    /* catch() { ... } // from try @ 0158a4e8 with catch @ 0158a744 */
                    /* catch() { ... } // from try @ 0158a578 with catch @ 0158a748 */
                    /* catch() { ... } // from try @ 0158a568 with catch @ 0158a74c */
          if (9 < iVar6) {
            iVar6 = 10;
          }
                    /* catch() { ... } // from try @ 0158a648 with catch @ 0158a750 */
                    /* catch() { ... } // from try @ 0158a638 with catch @ 0158a754 */
          if (iVar6 < 2) {
            iVar6 = 1;
          }
                    /* catch() { ... } // from try @ 0158a428 with catch @ 0158a758 */
          iStack_78 = iVar6;
                    /* catch() { ... } // from try @ 0158a5bc with catch @ 0158a75c */
                    /* catch() { ... } // from try @ 0158a540 with catch @ 0158a760 */
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_78);
                    /* catch() { ... } // from try @ 0158a520 with catch @ 0158a764 */
                    /* catch() { ... } // from try @ 0158a510 with catch @ 0158a768
                       catch() { ... } // from try @ 0158a70c with catch @ 0158a768 */
                    /* catch() { ... } // from try @ 0158a680 with catch @ 0158a76c */
                    /* catch() { ... } // from try @ 0158a3f4 with catch @ 0158a770 */
                    /* catch() { ... } // from try @ 0158a3e4 with catch @ 0158a774 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar2,uVar11,0);
                    /* catch() { ... } // from try @ 0158a450 with catch @ 0158a778
                       catch() { ... } // from try @ 0158a6fc with catch @ 0158a778 */
                    /* catch() { ... } // from try @ 0158a478 with catch @ 0158a77c */
                    /* catch() { ... } // from try @ 0158a618 with catch @ 0158a780
                       catch() { ... } // from try @ 0158a66c with catch @ 0158a780
                       catch() { ... } // from try @ 0158a708 with catch @ 0158a780 */
          uStack_7c = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                                (lVar16,0);
                    /* catch() { ... } // from try @ 0158a330 with catch @ 0158a784 */
                    /* catch() { ... } // from try @ 0158a318 with catch @ 0158a788 */
                    /* catch() { ... } // from try @ 0158a5b0 with catch @ 0158a78c */
                    /* catch() { ... } // from try @ 0158a45c with catch @ 0158a790 */
                    /* catch() { ... } // from try @ 0158a414 with catch @ 0158a794 */
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
                    /* catch() { ... } // from try @ 0158a3a8 with catch @ 0158a798 */
                    /* catch() { ... } // from try @ 0158a2fc with catch @ 0158a79c */
                    /* catch() { ... } // from try @ 0158a2e8 with catch @ 0158a7a0 */
                    /* catch() { ... } // from try @ 0158a2d4 with catch @ 0158a7a4
                       catch() { ... } // from try @ 0158a6e4 with catch @ 0158a7a4 */
                    /* catch() { ... } // from try @ 0158a2b8 with catch @ 0158a7a8
                       catch() { ... } // from try @ 0158a6dc with catch @ 0158a7a8 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar3,uVar11,0);
                    /* catch() { ... } // from try @ 0158a2a0 with catch @ 0158a7ac */
                    /* catch() { ... } // from try @ 0158a4d0 with catch @ 0158a7b0
                       catch() { ... } // from try @ 0158a59c with catch @ 0158a7b0
                       catch() { ... } // from try @ 0158a6f0 with catch @ 0158a7b0 */
                    /* catch() { ... } // from try @ 0158a37c with catch @ 0158a7b4 */
          uVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                             (lVar16,0);
                    /* catch() { ... } // from try @ 0158a364 with catch @ 0158a7b8 */
          uVar13 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                             (lVar16,0);
                    /* try { // try from 0158a7d0 to 0168a7e7 has its CatchHandler @ 0158a844 */
          uVar14 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                             (lVar16,0);
          uVar15 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                             (lVar16,0);
                    /* try { // try from 0158a7e8 to 0168a833 has its CatchHandler @ 0158a1ac */
          lVar17 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                    /* try { // try from 0158a834 to 0168a843 has its CatchHandler @ 0158a844 */
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0158a83c;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar1,1);
LAB_0158a83c:
          puVar1 = PTR_DAT_0575f9f0;
                    /* catch() { ... } // from try @ 0158a7d0 with catch @ 0158a844
                       catch() { ... } // from try @ 0158a834 with catch @ 0158a844 */
                    /* try { // try from 0158a848 to 0168a84b has its CatchHandler @ 0158a854 */
                    /* try { // try from 0158a84c to 0168a857 has its CatchHandler @ 0158a1ac */
          iVar7 = (*(code *)*puVar12)(plVar9,puVar12[1]);
                    /* catch() { ... } // from try @ 0158a848 with catch @ 0158a854 */
          iVar6 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetCurrentStage_20b6654
                            (lVar16,0);
          iVar6 = iVar6 + 1;
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          if (9 < iVar6) {
            iVar6 = 10;
          }
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          iVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                            (lVar16,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MiniGameOfferPurchased_2dbc998
                             (uVar11,uVar13,uVar14,uVar15,(long)iVar7,iVar6,(long)iVar8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

