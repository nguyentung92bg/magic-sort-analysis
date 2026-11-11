/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCollectionThemeCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionThemeCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_Collection_Scripts_CollectionThemeData_o* themeData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCollectionThemeCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionThemeCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_Collection_Scripts_CollectionThemeData_o* themeData, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCollectionThemeCompleted_1478f38
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2381e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05807728);
    FUN_012d0dc8(PTR_DAT_057d8f18);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057fd968);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05780248);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057990f8);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2381e = 1;
  }
  lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_05776540);
    puVar1 = PTR_DAT_057c8a60;
    lVar17 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar17 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar17,*(undefined8 *)PTR_DAT_05807728,0), puVar4 = PTR_DAT_057d8f18,
         puVar3 = PTR_DAT_057d6138, puVar1 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_057b8b10,
         lVar16 != 0)) {
        uVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar4,uVar10,0);
        uStack_68 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                              (lVar16,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar2,uVar10,0);
        uVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar1,uVar10,0);
        puVar6 = PTR_DAT_057e4da8;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057990f8;
        puVar2 = PTR_DAT_057636d0;
        if (plVar9 != (long *)0x0) {
          lVar18 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_015791e0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_015791e0:
          uStack_6c = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar4,uVar10,0);
          uStack_78 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                                (lVar16,0);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar6,uVar10,0);
          uStack_7c = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                                (lVar16,0);
                    /* try { // try from 01579254 to 01679387 has its CatchHandler @ 01579254
                       catch() { ... } // from try @ 01579254 with catch @ 01579254
                       catch() { ... } // from try @ 01579504 with catch @ 01579254
                       catch() { ... } // from try @ 01579740 with catch @ 01579254
                       catch() { ... } // from try @ 015797f8 with catch @ 01579254
                       catch() { ... } // from try @ 01579880 with catch @ 01579254 */
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar1,uVar10,0);
          puVar3 = PTR_DAT_05780248;
          puVar1 = PTR_DAT_0575f9f0;
          if (param_2 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar17,*(undefined8 *)PTR_DAT_057fd968,*(undefined8 *)(param_2 + 0x10),0);
            uVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                               (lVar16,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar17,*(undefined8 *)puVar3,uVar10,0);
            uVar10 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableActiveCollectionName_3773de8
                               (lVar16,0);
            uVar12 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetStartTime_3773a98
                               (lVar16,0);
            uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetSegment_3773acc
                               (lVar16,0);
            lVar18 = *plVar9;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_0157934c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_0157934c:
            iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
            uVar14 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetRemainingSeconds_376c824
                               (lVar16,0);
            iVar8 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetExtraStarCount_376cf10
                              (lVar16,0);
            uVar21 = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 01579388 to 0167938f has its CatchHandler @ 01579794 */
            uVar15 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetReadableEventId_3773d2c
                               (lVar16,0);
                    /* try { // try from 01579398 to 016793cf has its CatchHandler @ 01579770 */
            uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CollectionThemeCompleted_2db07d4
                               (uVar10,uVar12,uVar13,(long)iVar7,uVar14,(long)iVar8,uVar21,uVar15,0)
            ;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar17);
                    /* try { // try from 015793e4 to 016793e7 has its CatchHandler @ 01579790 */
                    /* try { // try from 015793f8 to 016793ff has its CatchHandler @ 015797a8 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

