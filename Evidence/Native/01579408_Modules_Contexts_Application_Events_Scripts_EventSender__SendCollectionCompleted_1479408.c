/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCollectionCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCollectionCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionCompleted_1479408
               (undefined8 param_1)

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
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
                    /* try { // try from 01579408 to 0167940f has its CatchHandler @ 015797a4 */
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01579418 to 01679423 has its CatchHandler @ 015797a0 */
                    /* try { // try from 0157942c to 01679433 has its CatchHandler @ 015797bc */
  if ((bRam0000000005c2381f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01579448 to 0167944b has its CatchHandler @ 015797b8 */
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
                    /* try { // try from 01579460 to 01679487 has its CatchHandler @ 015797c8 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
                    /* try { // try from 015794a4 to 016794bb has its CatchHandler @ 015797c4 */
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05780248);
                    /* try { // try from 015794cc to 016794d3 has its CatchHandler @ 015797b4 */
    FUN_012d0dc8(PTR_DAT_057a2148);
                    /* try { // try from 015794d8 to 016794e3 has its CatchHandler @ 015797b0 */
    FUN_012d0dc8(PTR_DAT_057caaf0);
                    /* try { // try from 015794e8 to 016794f3 has its CatchHandler @ 015797ac */
    FUN_012d0dc8(PTR_DAT_057990f8);
                    /* try { // try from 015794f8 to 01679503 has its CatchHandler @ 015797c0 */
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2381f = 1;
  }
                    /* try { // try from 01579504 to 0167955f has its CatchHandler @ 01579254 */
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_05776540);
    puVar2 = PTR_DAT_057c8a60;
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 01579560 to 01679567 has its CatchHandler @ 0157978c */
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 01579574 to 01679593 has its CatchHandler @ 0157979c */
      if ((lVar18 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar18,*(undefined8 *)PTR_DAT_057a2148,0), puVar3 = PTR_DAT_057d8f18,
         puVar5 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057d3f68, puVar1 = PTR_DAT_057b8b10,
         lVar17 != 0)) {
                    /* try { // try from 015795ac to 016795b3 has its CatchHandler @ 01579788 */
        uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                           (lVar17,0);
                    /* try { // try from 015795c0 to 016795d7 has its CatchHandler @ 01579798 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar3,uVar11,0);
        uStack_68 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                              (lVar17,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar11,0);
                    /* try { // try from 01579604 to 01679607 has its CatchHandler @ 01579784 */
        uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                           (lVar17,0);
                    /* try { // try from 01579610 to 01679617 has its CatchHandler @ 01579780 */
                    /* try { // try from 01579620 to 0167962b has its CatchHandler @ 0157977c */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar2,uVar11,0);
        puVar7 = PTR_DAT_057e4da8;
        puVar6 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057990f8;
        puVar2 = PTR_DAT_05780248;
        puVar1 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar19 = *plVar10;
                    /* try { // try from 01579640 to 01679647 has its CatchHandler @ 01579774 */
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    /* try { // try from 01579654 to 0167966b has its CatchHandler @ 01579778 */
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
                    /* try { // try from 01579670 to 01679673 has its CatchHandler @ 01579764 */
                    /* try { // try from 01579678 to 0167968f has its CatchHandler @ 0157976c */
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 015796a4 to 016796a7 has its CatchHandler @ 01579748 */
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_015796a8;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
                    /* try { // try from 01579690 to 01679697 has its CatchHandler @ 01579760 */
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_015796a8:
                    /* try { // try from 015796a8 to 016796ab has its CatchHandler @ 015797c8 */
                    /* try { // try from 015796ac to 016796af has its CatchHandler @ 015797c4 */
                    /* try { // try from 015796b0 to 016796b3 has its CatchHandler @ 0157975c */
          uStack_6c = (*(code *)*puVar12)(plVar10,puVar12[1]);
                    /* try { // try from 015796b4 to 016796b7 has its CatchHandler @ 015797b4 */
                    /* try { // try from 015796b8 to 016796bb has its CatchHandler @ 01579750 */
                    /* try { // try from 015796bc to 016796bf has its CatchHandler @ 015797a8 */
                    /* try { // try from 015796c0 to 016796c3 has its CatchHandler @ 0157974c */
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_6c);
                    /* try { // try from 015796d0 to 016796d3 has its CatchHandler @ 01579744 */
                    /* try { // try from 015796d8 to 016796eb has its CatchHandler @ 01579758 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar11,0);
          uStack_78 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                                (lVar17,0);
                    /* try { // try from 015796f0 to 0167970f has its CatchHandler @ 01579754 */
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar7,uVar11,0);
                    /* try { // try from 01579710 to 01679737 has its CatchHandler @ 01579768 */
          uStack_7c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                                (lVar17,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
                    /* try { // try from 01579738 to 0167973b has its CatchHandler @ 01579740 */
                    /* try { // try from 0157973c to 0167973f has its CatchHandler @ 01579784 */
                    /* catch() { ... } // from try @ 01579738 with catch @ 01579740
                       try { // try from 01579740 to 016797df has its CatchHandler @ 01579254 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar11,0);
                    /* catch() { ... } // from try @ 015796d0 with catch @ 01579744 */
                    /* catch() { ... } // from try @ 015796a4 with catch @ 01579748 */
                    /* catch() { ... } // from try @ 015796c0 with catch @ 0157974c */
          uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar17,0);
                    /* catch() { ... } // from try @ 015796b8 with catch @ 01579750 */
                    /* catch() { ... } // from try @ 015796f0 with catch @ 01579754 */
                    /* catch() { ... } // from try @ 015796d8 with catch @ 01579758 */
                    /* catch() { ... } // from try @ 015796b0 with catch @ 0157975c */
                    /* catch() { ... } // from try @ 01579690 with catch @ 01579760 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar2,uVar11,0);
                    /* catch() { ... } // from try @ 01579670 with catch @ 01579764 */
                    /* catch() { ... } // from try @ 01579710 with catch @ 01579768 */
                    /* catch() { ... } // from try @ 01579678 with catch @ 0157976c */
          uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                             (lVar17,0);
                    /* catch() { ... } // from try @ 01579398 with catch @ 01579770 */
                    /* catch() { ... } // from try @ 01579640 with catch @ 01579774 */
                    /* catch() { ... } // from try @ 01579654 with catch @ 01579778 */
                    /* catch() { ... } // from try @ 01579620 with catch @ 0157977c */
          uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                             (lVar17,0);
                    /* catch() { ... } // from try @ 01579610 with catch @ 01579780 */
                    /* catch() { ... } // from try @ 01579604 with catch @ 01579784
                       catch() { ... } // from try @ 0157973c with catch @ 01579784 */
                    /* catch() { ... } // from try @ 015795ac with catch @ 01579788 */
                    /* catch() { ... } // from try @ 01579560 with catch @ 0157978c */
          uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                             (lVar17,0);
                    /* catch() { ... } // from try @ 015793e4 with catch @ 01579790 */
          lVar19 = *plVar10;
                    /* catch() { ... } // from try @ 01579388 with catch @ 01579794 */
                    /* catch() { ... } // from try @ 015795c0 with catch @ 01579798 */
                    /* catch() { ... } // from try @ 01579574 with catch @ 0157979c */
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    /* catch() { ... } // from try @ 01579418 with catch @ 015797a0 */
          if (uVar20 != 0) {
                    /* catch() { ... } // from try @ 01579408 with catch @ 015797a4 */
                    /* catch() { ... } // from try @ 015793f8 with catch @ 015797a8
                       catch() { ... } // from try @ 015796bc with catch @ 015797a8 */
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
                    /* catch() { ... } // from try @ 015794e8 with catch @ 015797ac */
                    /* catch() { ... } // from try @ 015794d8 with catch @ 015797b0 */
                    /* catch() { ... } // from try @ 015794cc with catch @ 015797b4
                       catch() { ... } // from try @ 015796b4 with catch @ 015797b4 */
              if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                    /* try { // try from 015797e0 to 016797f7 has its CatchHandler @ 01579878 */
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_015797e4;
              }
                    /* catch() { ... } // from try @ 01579448 with catch @ 015797b8 */
              uVar20 = uVar20 - 1;
                    /* catch() { ... } // from try @ 0157942c with catch @ 015797bc */
              piVar21 = piVar21 + 4;
                    /* catch() { ... } // from try @ 015794f8 with catch @ 015797c0 */
            } while (uVar20 != 0);
          }
                    /* catch() { ... } // from try @ 015794a4 with catch @ 015797c4
                       catch() { ... } // from try @ 015796ac with catch @ 015797c4 */
                    /* catch() { ... } // from try @ 01579460 with catch @ 015797c8
                       catch() { ... } // from try @ 015796a8 with catch @ 015797c8 */
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_015797e4:
          iVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                    /* try { // try from 015797f8 to 01679867 has its CatchHandler @ 01579254 */
          uVar15 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                             (lVar17,0);
          iVar9 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                            (lVar17,0);
          uVar16 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar17,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CollectionCompleted_2db0920
                             (uVar11,uVar13,uVar14,(long)iVar8,uVar15,(long)iVar9,uVar16,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
                    /* try { // try from 01579868 to 01679877 has its CatchHandler @ 01579878 */
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
                    /* catch() { ... } // from try @ 015797e0 with catch @ 01579878
                       catch() { ... } // from try @ 01579868 with catch @ 01579878 */
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
                    /* try { // try from 0157987c to 0167987f has its CatchHandler @ 01579888 */
                    /* try { // try from 01579880 to 0167988b has its CatchHandler @ 01579254 */
                    /* catch() { ... } // from try @ 0157987c with catch @ 01579888 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

