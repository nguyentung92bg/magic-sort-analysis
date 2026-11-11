/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWelcomeBackClaimStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWelcomeBackClaimStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* welcomeBackId, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWelcomeBackClaimStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWelcomeBackClaimStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   welcomeBackId, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWelcomeBackClaimStat_14663d4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237ba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
                    /* try { // try from 01566484 to 016665f7 has its CatchHandler @ 01566484
                       catch() { ... } // from try @ 01566484 with catch @ 01566484
                       catch() { ... } // from try @ 01566604 with catch @ 01566484
                       catch() { ... } // from try @ 015666ac with catch @ 01566484
                       catch() { ... } // from try @ 015666d0 with catch @ 01566484
                       catch() { ... } // from try @ 01566718 with catch @ 01566484
                       catch() { ... } // from try @ 015667e4 with catch @ 01566484
                       catch() { ... } // from try @ 015667f8 with catch @ 01566484 */
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_057f5f00);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    FUN_012d0dc8(PTR_DAT_057d3268);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237ba = 1;
  }
  puVar4 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar1 = PTR_DAT_057d3268;
    if (lVar9 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar9,*(undefined8 *)PTR_DAT_057f5f00,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar1,param_2,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                (param_3,lVar9);
      puVar5 = PTR_DAT_057db748;
      puVar4 = PTR_DAT_057caaf0;
      puVar1 = PTR_DAT_057636d0;
      if (plVar10 != (long *)0x0) {
        lVar13 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_015665cc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_015665cc:
        puVar7 = PTR_DAT_05802ff8;
        puVar3 = PTR_DAT_0579fa30;
        puVar2 = PTR_DAT_05786c98;
        uStack_64 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                    /* try { // try from 015665f8 to 01666603 has its CatchHandler @ 015666d8 */
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
                    /* try { // try from 01566604 to 01666633 has its CatchHandler @ 01566484 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar4,uVar12,0);
        lVar13 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
                    /* try { // try from 01566634 to 0166664f has its CatchHandler @ 015666e8 */
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_01566668;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
                    /* try { // try from 01566654 to 01666663 has its CatchHandler @ 015666e4 */
LAB_01566668:
                    /* try { // try from 01566668 to 01666687 has its CatchHandler @ 015666e0 */
        puVar6 = PTR_DAT_057e54d0;
        puVar4 = PTR_DAT_057e3b08;
        puVar1 = PTR_DAT_0575a8a0;
        iVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                    /* try { // try from 0156668c to 016666ab has its CatchHandler @ 015666dc */
        uVar16 = *(undefined8 *)(lVar9 + 0x18);
        uStack_68 = 0;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
                    /* try { // try from 015666ac to 016666cb has its CatchHandler @ 01566484 */
        uVar12 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar16,*(undefined8 *)puVar2,uVar12,*(undefined8 *)puVar7);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 015666cc to 016666cf has its CatchHandler @ 015666d4 */
                    /* try { // try from 015666d0 to 016666ff has its CatchHandler @ 01566484 */
          thunk_FUN_0130472c(*(long *)puVar3);
        }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015666cc with catch @ 015666d4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015665f8 with catch @ 015666d8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156668c with catch @ 015666dc
                        */
        uVar12 = System_Convert__ToInt64_2130754(uVar12,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01566668 with catch @ 015666e0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01566654 with catch @ 015666e4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01566634 with catch @ 015666e8
                        */
        uVar17 = *(undefined8 *)(lVar9 + 0x18);
        uStack_6c = 0;
        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
                    /* try { // try from 01566700 to 01666717 has its CatchHandler @ 015667f0 */
        uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar17,*(undefined8 *)puVar1,uVar16,*(undefined8 *)puVar7);
        uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
                    /* try { // try from 01566718 to 016667d3 has its CatchHandler @ 01566484 */
        uVar18 = *(undefined8 *)(lVar9 + 0x18);
        uStack_70 = 0;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
        uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar18,*(undefined8 *)puVar6,uVar17,*(undefined8 *)puVar7);
        uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
        uVar19 = *(undefined8 *)(lVar9 + 0x18);
        uStack_74 = 0;
        uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
        uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar19,*(undefined8 *)puVar4,uVar18,*(undefined8 *)puVar7);
        uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
        uVar20 = *(undefined8 *)(lVar9 + 0x18);
        uStack_78 = 0;
        uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
        uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar20,*(undefined8 *)PTR_DAT_057a3b60,uVar19,*(undefined8 *)puVar7);
        System_Convert__ToDouble_21312e0(uVar19,0);
                    /* try { // try from 015667d4 to 016667e3 has its CatchHandler @ 015667ec */
        uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WelcomeBackClaim_2dadc60
                           (param_2,uVar12,uVar16,uVar17,uVar18,(long)iVar8,0);
                    /* try { // try from 015667e4 to 016667f3 has its CatchHandler @ 01566484 */
                    /* catch() { ... } // from try @ 015667d4 with catch @ 015667ec */
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01566700 with catch @ 015667f0 */
                    /* try { // try from 015667f4 to 016667f7 has its CatchHandler @ 01566800 */
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
                    /* try { // try from 015667f8 to 01666803 has its CatchHandler @ 01566484 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 015667f4 with catch @ 01566800
                        */
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

