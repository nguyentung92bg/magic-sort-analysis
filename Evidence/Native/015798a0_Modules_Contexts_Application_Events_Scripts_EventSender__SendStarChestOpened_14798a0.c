/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStarChestOpened
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStarChestOpened (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t openedPackId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStarChestOpened
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStarChestOpened
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t openedPackId, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStarChestOpened_14798a0
               (undefined8 param_1,int param_2)

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
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23820 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 0157990c to 016799f3 has its CatchHandler @ 0157990c
                       catch() { ... } // from try @ 0157990c with catch @ 0157990c
                       catch() { ... } // from try @ 01579b88 with catch @ 0157990c
                       catch() { ... } // from try @ 01579c48 with catch @ 0157990c
                       catch() { ... } // from try @ 01579cac with catch @ 0157990c
                       catch() { ... } // from try @ 01579d14 with catch @ 0157990c */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057585a0);
    FUN_012d0dc8(PTR_DAT_05780248);
    FUN_012d0dc8(PTR_DAT_05805fd0);
    FUN_012d0dc8(PTR_DAT_057710c0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23820 = 1;
  }
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_05776540);
    puVar2 = PTR_DAT_057c8a60;
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
                    /* try { // try from 015799f4 to 016799f7 has its CatchHandler @ 01579a98 */
                    /* try { // try from 015799fc to 01679a07 has its CatchHandler @ 01579a94 */
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 01579a0c to 01679a17 has its CatchHandler @ 01579a90 */
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 01579a1c to 01679a27 has its CatchHandler @ 01579ab0 */
                    /* try { // try from 01579a34 to 01679a37 has its CatchHandler @ 01579a84 */
      if ((lVar18 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar18,*(undefined8 *)PTR_DAT_057710c0,0), puVar4 = PTR_DAT_057d8f18,
         puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057d3f68, puVar1 = PTR_DAT_057b8b10,
         lVar17 != 0)) {
                    /* try { // try from 01579a48 to 01679a4f has its CatchHandler @ 01579a88 */
                    /* try { // try from 01579a5c to 01679a73 has its CatchHandler @ 01579a8c */
        uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                           (lVar17,0);
                    /* try { // try from 01579a78 to 01679a7b has its CatchHandler @ 01579a80 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar4,uVar11,0);
                    /* try { // try from 01579a7c to 01679a7f has its CatchHandler @ 01579a98 */
                    /* catch() { ... } // from try @ 01579a78 with catch @ 01579a80 */
                    /* catch() { ... } // from try @ 01579a34 with catch @ 01579a84 */
        uStack_68 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                              (lVar17,0);
                    /* catch() { ... } // from try @ 01579a48 with catch @ 01579a88 */
                    /* catch() { ... } // from try @ 01579a5c with catch @ 01579a8c */
                    /* catch() { ... } // from try @ 01579a0c with catch @ 01579a90 */
                    /* catch() { ... } // from try @ 015799fc with catch @ 01579a94 */
                    /* catch() { ... } // from try @ 015799f4 with catch @ 01579a98
                       catch() { ... } // from try @ 01579a7c with catch @ 01579a98 */
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar11,0);
                    /* catch() { ... } // from try @ 01579a1c with catch @ 01579ab0
                       catch() { ... } // from try @ 01579b14 with catch @ 01579ab0
                       catch() { ... } // from try @ 01579b7c with catch @ 01579ab0 */
        uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                           (lVar17,0);
                    /* try { // try from 01579acc to 01679ad7 has its CatchHandler @ 01579c70 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar2,uVar11,0);
        puVar7 = PTR_DAT_05805fd0;
        puVar6 = PTR_DAT_057e4da8;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_05780248;
        puVar2 = PTR_DAT_057636d0;
        puVar1 = PTR_DAT_057585a0;
        if (plVar10 != (long *)0x0) {
          lVar19 = *plVar10;
                    /* try { // try from 01579aec to 01679aef has its CatchHandler @ 01579c7c */
                    /* try { // try from 01579af4 to 01679aff has its CatchHandler @ 01579c74 */
                    /* try { // try from 01579b04 to 01679b0f has its CatchHandler @ 01579c78 */
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    /* try { // try from 01579b14 to 01679b1f has its CatchHandler @ 01579ab0 */
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 01579b54 to 01679b57 has its CatchHandler @ 01579c68 */
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01579b5c;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
                    /* try { // try from 01579b38 to 01679b3b has its CatchHandler @ 01579c50 */
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01579b5c:
                    /* try { // try from 01579b5c to 01679b67 has its CatchHandler @ 01579c64 */
          uStack_6c = (*(code *)*puVar12)(plVar10,puVar12[1]);
                    /* try { // try from 01579b6c to 01679b77 has its CatchHandler @ 01579c60 */
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
                    /* try { // try from 01579b7c to 01679b87 has its CatchHandler @ 01579ab0 */
                    /* try { // try from 01579b88 to 01679bc3 has its CatchHandler @ 0157990c */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar11,0);
          uStack_78 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                                (lVar17,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_78);
                    /* try { // try from 01579bc4 to 01679bcb has its CatchHandler @ 01579c5c */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar6,uVar11,0);
          uStack_7c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                                (lVar17,0);
                    /* try { // try from 01579bd8 to 01679bef has its CatchHandler @ 01579c6c */
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar1,uVar11,0);
                    /* try { // try from 01579c08 to 01679c0f has its CatchHandler @ 01579c54 */
          iStack_80 = param_2;
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_80);
                    /* try { // try from 01579c1c to 01679c33 has its CatchHandler @ 01579c58 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar7,uVar11,0);
          uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar17,0);
                    /* try { // try from 01579c38 to 01679c3b has its CatchHandler @ 01579c7c */
                    /* try { // try from 01579c3c to 01679c3f has its CatchHandler @ 01579c4c */
                    /* try { // try from 01579c40 to 01679c43 has its CatchHandler @ 01579c48 */
                    /* try { // try from 01579c44 to 01679c47 has its CatchHandler @ 01579c68 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar11,0);
                    /* catch() { ... } // from try @ 01579c40 with catch @ 01579c48
                       try { // try from 01579c48 to 01679c93 has its CatchHandler @ 0157990c */
                    /* catch() { ... } // from try @ 01579c3c with catch @ 01579c4c */
                    /* catch() { ... } // from try @ 01579b38 with catch @ 01579c50 */
          uVar11 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                             (lVar17,0);
                    /* catch() { ... } // from try @ 01579c08 with catch @ 01579c54 */
                    /* catch() { ... } // from try @ 01579c1c with catch @ 01579c58 */
                    /* catch() { ... } // from try @ 01579bc4 with catch @ 01579c5c */
                    /* catch() { ... } // from try @ 01579b6c with catch @ 01579c60 */
          uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                             (lVar17,0);
                    /* catch() { ... } // from try @ 01579b5c with catch @ 01579c64 */
                    /* catch() { ... } // from try @ 01579b54 with catch @ 01579c68
                       catch() { ... } // from try @ 01579c44 with catch @ 01579c68 */
                    /* catch() { ... } // from try @ 01579bd8 with catch @ 01579c6c */
                    /* catch() { ... } // from try @ 01579acc with catch @ 01579c70 */
          uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                             (lVar17,0);
                    /* catch() { ... } // from try @ 01579af4 with catch @ 01579c74 */
          lVar19 = *plVar10;
                    /* catch() { ... } // from try @ 01579b04 with catch @ 01579c78 */
                    /* catch() { ... } // from try @ 01579aec with catch @ 01579c7c
                       catch() { ... } // from try @ 01579c38 with catch @ 01579c7c */
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
                    /* try { // try from 01579c94 to 01679cab has its CatchHandler @ 01579d0c */
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01579cc8;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
                    /* try { // try from 01579cac to 01679cfb has its CatchHandler @ 0157990c */
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar2,1);
LAB_01579cc8:
          iVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar15 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                             (lVar17,0);
          iVar9 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                            (lVar17,0);
                    /* try { // try from 01579cfc to 01679d0b has its CatchHandler @ 01579d0c */
          uVar16 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                             (lVar17,0);
                    /* catch() { ... } // from try @ 01579c94 with catch @ 01579d0c
                       catch() { ... } // from try @ 01579cfc with catch @ 01579d0c */
                    /* try { // try from 01579d10 to 01679d13 has its CatchHandler @ 01579d1c */
                    /* try { // try from 01579d14 to 01679d1f has its CatchHandler @ 0157990c */
                    /* catch() { ... } // from try @ 01579d10 with catch @ 01579d1c */
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StarChestOpened_2db0a44
                             (uVar11,uVar13,uVar14,(long)iVar8,uVar15,(long)iVar9,(long)param_2,
                              uVar16,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

