/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCompensationClaimStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCompensationClaimStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* compensationId, System_Collections_Generic_List_RewardModel__o* rewardModels, bool isSuperChargerCompensation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCompensationClaimStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCompensationClaimStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   compensationId, System_Collections_Generic_List_RewardModel__o* rewardModels, bool
   isSuperChargerCompensation, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCompensationClaimStat_1468294
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte abStack_68 [4];
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237bf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057ab440);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_0579df10);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    FUN_012d0dc8(PTR_DAT_05773a20);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237bf = 1;
  }
  puVar4 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
    plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar1 = PTR_DAT_0579df10;
    if (lVar10 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar10,*(undefined8 *)PTR_DAT_05773a20,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar1,param_2,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                (param_3,lVar10);
      puVar7 = PTR_DAT_057db748;
      puVar6 = PTR_DAT_057caaf0;
      puVar5 = PTR_DAT_057b4910;
      puVar4 = PTR_DAT_057ab440;
      puVar1 = PTR_DAT_057636d0;
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_015684c4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_015684c4:
        puVar8 = PTR_DAT_05802ff8;
        puVar3 = PTR_DAT_0579fa30;
        puVar2 = PTR_DAT_05786c98;
        uStack_64 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar6,uVar13,0);
        abStack_68[0] = param_4 & 1;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,abStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar13,0);
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01568584;
            }
                    /* try { // try from 01568558 to 016685eb has its CatchHandler @ 01568558
                       catch() { ... } // from try @ 01568558 with catch @ 01568558
                       catch() { ... } // from try @ 01568874 with catch @ 01568558
                       catch() { ... } // from try @ 015688f8 with catch @ 01568558
                       catch() { ... } // from try @ 015689b0 with catch @ 01568558 */
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_01568584:
        puVar6 = PTR_DAT_057e54d0;
        puVar5 = PTR_DAT_057e3b08;
        puVar4 = PTR_DAT_057a3b60;
        puVar1 = PTR_DAT_0575a8a0;
        iVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar17 = *(undefined8 *)(lVar10 + 0x18);
        uStack_6c = 0;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_6c);
        uVar13 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar17,*(undefined8 *)puVar2,uVar13,*(undefined8 *)puVar8);
                    /* try { // try from 015685ec to 016685f3 has its CatchHandler @ 015688a0 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar3);
        }
        uVar13 = System_Convert__ToInt64_2130754(uVar13,0);
                    /* try { // try from 0156860c to 01668613 has its CatchHandler @ 015688a4 */
        uVar18 = *(undefined8 *)(lVar10 + 0x18);
        uStack_70 = 0;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_70);
                    /* try { // try from 0156862c to 01668653 has its CatchHandler @ 015688ac */
        uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar18,*(undefined8 *)puVar1,uVar17,*(undefined8 *)puVar8);
        uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
        uVar19 = *(undefined8 *)(lVar10 + 0x18);
        uStack_74 = 0;
        uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_74);
                    /* try { // try from 01568660 to 01668667 has its CatchHandler @ 0156889c */
        uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar19,*(undefined8 *)puVar6,uVar18,*(undefined8 *)puVar8);
        uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
                    /* try { // try from 01568674 to 0166867f has its CatchHandler @ 015688c8 */
        uVar20 = *(undefined8 *)(lVar10 + 0x18);
        uStack_78 = 0;
        uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_78);
                    /* try { // try from 0156868c to 01668693 has its CatchHandler @ 015688c4 */
        uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar20,*(undefined8 *)puVar5,uVar19,*(undefined8 *)puVar8);
                    /* try { // try from 0156869c to 016686a3 has its CatchHandler @ 015688c0 */
        uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
        uVar21 = *(undefined8 *)(lVar10 + 0x18);
        uStack_7c = 0;
        uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_7c);
                    /* try { // try from 015686bc to 016686bf has its CatchHandler @ 01568898 */
                    /* try { // try from 015686c0 to 016686cf has its CatchHandler @ 015688bc */
        uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                           (uVar21,*(undefined8 *)puVar4,uVar20,*(undefined8 *)puVar8);
        System_Convert__ToDouble_21312e0(uVar20,0);
                    /* try { // try from 015686e8 to 016686eb has its CatchHandler @ 015688a4 */
                    /* try { // try from 015686ec to 016686ef has its CatchHandler @ 015688b8 */
        uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CompensationClaim_2dadd74
                           (param_2,uVar13,uVar17,uVar18,uVar19,(long)iVar9,param_4 & 1,0);
                    /* try { // try from 015686fc to 01668703 has its CatchHandler @ 015688b4 */
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                    /* try { // try from 01568714 to 0166871f has its CatchHandler @ 015688b0 */
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10);
                    /* try { // try from 01568738 to 0166873b has its CatchHandler @ 015688a8 */
                    /* try { // try from 0156874c to 0166874f has its CatchHandler @ 01568884 */
                    /* try { // try from 01568750 to 01668767 has its CatchHandler @ 015688a4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

