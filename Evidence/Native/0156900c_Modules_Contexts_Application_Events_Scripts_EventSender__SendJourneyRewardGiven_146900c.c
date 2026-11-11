/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyRewardGiven
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyRewardGiven (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t level, System_String_o* currentPosterId, System_Collections_Generic_List_RewardModel__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyRewardGiven
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyRewardGiven
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t level,
   System_String_o* currentPosterId, System_Collections_Generic_List_RewardModel__o* rewards, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyRewardGiven_146900c
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_68;
  undefined4 uStack_64;
  
                    /* catch() { ... } // from try @ 01568e9c with catch @ 0156900c */
  puVar1 = PTR_DAT_0576aae0;
                    /* catch() { ... } // from try @ 01568eb8 with catch @ 01569010
                       catch() { ... } // from try @ 01568fec with catch @ 01569010 */
                    /* catch() { ... } // from try @ 01568f48 with catch @ 0156901c */
                    /* catch() { ... } // from try @ 01568f28 with catch @ 01569020 */
                    /* catch() { ... } // from try @ 01568f54 with catch @ 01569024 */
                    /* catch() { ... } // from try @ 01568f34 with catch @ 01569028 */
                    /* catch() { ... } // from try @ 01568f18 with catch @ 0156902c */
                    /* try { // try from 0156903c to 0166903f has its CatchHandler @ 01569090 */
  if ((bRam0000000005c237c5 & 1) == 0) {
                    /* try { // try from 01569058 to 0166905f has its CatchHandler @ 015690c8 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01569060 to 01669077 has its CatchHandler @ 01568e24 */
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057a1e60);
                    /* try { // try from 01569078 to 0166907b has its CatchHandler @ 0156909c */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 01569088 to 016690b3 has its CatchHandler @ 015690c8 */
    FUN_012d0dc8(PTR_DAT_0579fa30);
                    /* catch() { ... } // from try @ 0156903c with catch @ 01569090 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* catch() { ... } // from try @ 01569078 with catch @ 0156909c */
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* try { // try from 015690b4 to 016690bf has its CatchHandler @ 01568e24 */
    FUN_012d0dc8(PTR_DAT_0575a8a0);
                    /* try { // try from 015690c0 to 016690c7 has its CatchHandler @ 015690c8 */
    FUN_012d0dc8(PTR_DAT_057e54d0);
                    /* catch() { ... } // from try @ 01569058 with catch @ 015690c8
                       catch() { ... } // from try @ 01569088 with catch @ 015690c8
                       catch() { ... } // from try @ 015690c0 with catch @ 015690c8 */
    FUN_012d0dc8(PTR_DAT_057e4d98);
    FUN_012d0dc8(PTR_DAT_057e2098);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_057e42f8);
    bRam0000000005c237c5 = 1;
  }
  puVar4 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if ((lVar9 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar9,*(undefined8 *)PTR_DAT_057e4d98,0), puVar6 = PTR_DAT_057f16f8,
       puVar5 = PTR_DAT_057e42f8, puVar2 = PTR_DAT_057e2098, puVar4 = PTR_DAT_057db748,
       puVar1 = PTR_DAT_057636d0, plVar10 != (long *)0x0)) {
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x19) * 0x10 + 0x138);
            goto LAB_01569200;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,0x19);
LAB_01569200:
      puVar7 = PTR_DAT_05802ff8;
      puVar3 = PTR_DAT_057a3b60;
      uStack_64 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar6,uVar12,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar2,param_3,0);
      iStack_68 = param_2;
      uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar5,uVar12,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                (param_4,lVar9);
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x19) * 0x10 + 0x138);
            goto LAB_015692d8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,0x19);
LAB_015692d8:
      puVar6 = PTR_DAT_057e54d0;
      puVar5 = PTR_DAT_057e3b08;
      puVar2 = PTR_DAT_05786c98;
      puVar1 = PTR_DAT_0575a8a0;
      iVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      uVar16 = *(undefined8 *)(lVar9 + 0x18);
      uStack_74 = 0;
      uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
      uVar12 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                         (uVar16,*(undefined8 *)puVar3,uVar12,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)PTR_DAT_0579fa30 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0579fa30);
      }
      uVar20 = System_Convert__ToDouble_21312e0(uVar12,0);
      uVar16 = *(undefined8 *)(lVar9 + 0x18);
      uStack_78 = 0;
      uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_78);
      uVar12 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                         (uVar16,*(undefined8 *)puVar2,uVar12,*(undefined8 *)puVar7);
      uVar12 = System_Convert__ToInt64_2130754(uVar12,0);
      uVar17 = *(undefined8 *)(lVar9 + 0x18);
      uStack_7c = 0;
      uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
      uVar16 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                         (uVar17,*(undefined8 *)puVar5,uVar16,*(undefined8 *)puVar7);
      uVar16 = System_Convert__ToInt64_2130754(uVar16,0);
      uVar18 = *(undefined8 *)(lVar9 + 0x18);
      uStack_80 = 0;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
      uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                         (uVar18,*(undefined8 *)puVar6,uVar17,*(undefined8 *)puVar7);
      uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
      uVar19 = *(undefined8 *)(lVar9 + 0x18);
      uStack_84 = 0;
      uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_84);
      uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                         (uVar19,*(undefined8 *)puVar1,uVar18,*(undefined8 *)puVar7);
      uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
      uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JourneyRewardGiven_2db9180
                         (uVar20,(long)iVar8,param_3,(long)param_2,uVar12,uVar16,uVar17,uVar18,0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

