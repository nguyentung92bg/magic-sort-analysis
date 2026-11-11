/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyRewardClaimedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardClaimedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* claimedReward, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyRewardClaimedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardClaimedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* claimedReward, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardClaimedEvent_1471a6c
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  double dVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0575c778);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057aa668);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 01571afc to 01671b23 has its CatchHandler @ 01571d6c */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057b2ca0);
    FUN_012d0dc8(PTR_DAT_057e6468);
    FUN_012d0dc8(PTR_DAT_05762e78);
    FUN_012d0dc8(PTR_DAT_0575a580);
                    /* try { // try from 01571b58 to 01671b7f has its CatchHandler @ 01571d68 */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237f0 = 1;
  }
  uStack_68 = 0;
  lVar14 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
                    /* try { // try from 01571b90 to 01671bff has its CatchHandler @ 01571d70 */
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_0575c778);
    puVar4 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar15 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar15,*(undefined8 *)PTR_DAT_05762e78,0), puVar4 = PTR_DAT_057d3f68,
         puVar2 = PTR_DAT_0575a580, lVar14 != 0)) {
                    /* try { // try from 01571c00 to 01671c83 has its CatchHandler @ 0157195c */
        uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetSegment_38d4288
                          (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar4,uVar9,0);
        uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0
                          (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar2,uVar9,0);
        puVar5 = PTR_DAT_057e6468;
        puVar3 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057b2ca0;
        puVar2 = PTR_DAT_0576c1b8;
        if (param_2 != 0) {
          uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_2 + 0x10));
                    /* try { // try from 01571c84 to 01671c87 has its CatchHandler @ 01571d64 */
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_88);
                    /* try { // try from 01571c88 to 01671c8b has its CatchHandler @ 01571d60 */
                    /* try { // try from 01571c8c to 01671c8f has its CatchHandler @ 01571d5c */
                    /* try { // try from 01571c90 to 01671d4b has its CatchHandler @ 0157195c */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar4,uVar9,0);
          uVar10 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                             (param_2,0);
          uVar9 = *(undefined8 *)puVar5;
          if ((uVar10 & 1) == 0) {
            iStack_6c = *(int *)(param_2 + 0x14);
          }
          else {
            uStack_68 = *(undefined8 *)(param_2 + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar19 = (double)System_TimeSpan__get_TotalMinutes_2699994(&uStack_68,0);
            iStack_6c = -0x80000000;
            if (dVar19 != INFINITY) {
              iStack_6c = (int)dVar19;
            }
          }
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar15,uVar9,uVar11,0);
          puVar6 = PTR_DAT_057e3618;
          puVar5 = PTR_DAT_057caaf0;
          puVar4 = PTR_DAT_057aa668;
          puVar2 = PTR_DAT_057636d0;
          if (plVar8 != (long *)0x0) {
            lVar16 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar10 != 0) {
                    /* try { // try from 01571d4c to 01671d4f has its CatchHandler @ 01571d58 */
                    /* try { // try from 01571d50 to 01671d7f has its CatchHandler @ 0157195c */
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571d4c with catch @ 01571d58
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571c8c with catch @ 01571d5c
                        */
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 01571d80 to 01671d83 has its CatchHandler @ 01571e00 */
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_01571d8c;
                }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571c88 with catch @ 01571d60
                        */
                uVar10 = uVar10 - 1;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571c84 with catch @ 01571d64
                        */
                piVar17 = piVar17 + 4;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571b58 with catch @ 01571d68
                        */
              } while (uVar10 != 0);
            }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571afc with catch @ 01571d6c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571b90 with catch @ 01571d70
                        */
            puVar12 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01571d8c:
            uStack_70 = (*(code *)*puVar12)(plVar8,puVar12[1]);
            uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar5,uVar9,0);
            uStack_88 = *(undefined8 *)puVar4;
                    /* try { // try from 01571dc4 to 01671deb has its CatchHandler @ 01571e0c */
            uStack_80 = 0xffffffffffffffff;
            uStack_78 = param_3;
            uVar9 = System_Enum__ToString_23a4eac(&uStack_88,0);
                    /* try { // try from 01571dec to 01671df7 has its CatchHandler @ 0157195c */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar6,uVar9,0);
                    /* try { // try from 01571df8 to 01671dff has its CatchHandler @ 01571e0c */
            uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetSegment_38d4288
                              (lVar14,0);
                    /* catch() { ... } // from try @ 01571d80 with catch @ 01571e00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01571dc4 with catch @ 01571e0c
                       catch(type#2 @ 00000000) { ... } // from try @ 01571df8 with catch @ 01571e0c
                        */
            uVar11 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0
                               (lVar14,0);
                    /* try { // try from 01571e10 to 01671f93 has its CatchHandler @ 01571e10
                       catch() { ... } // from try @ 01571e10 with catch @ 01571e10
                       catch() { ... } // from try @ 01572088 with catch @ 01571e10
                       catch() { ... } // from try @ 0157221c with catch @ 01571e10
                       catch() { ... } // from try @ 015722b8 with catch @ 01571e10 */
            iVar1 = *(int *)(param_2 + 0x10);
            uVar10 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                               (param_2,0);
            if ((uVar10 & 1) == 0) {
              iVar18 = *(int *)(param_2 + 0x14);
            }
            else {
              uStack_68 = *(undefined8 *)(param_2 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_0576c1b8 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              dVar19 = (double)System_TimeSpan__get_TotalMinutes_2699994(&uStack_68,0);
              iVar18 = -0x80000000;
              if (dVar19 != INFINITY) {
                iVar18 = (int)dVar19;
              }
            }
            puVar3 = PTR_DAT_0575f9f0;
            lVar14 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_01571ecc;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_01571ecc:
            iVar7 = (*(code *)*puVar12)(plVar8,puVar12[1]);
            uStack_88 = *(undefined8 *)puVar4;
            uStack_80 = 0xffffffffffffffff;
            uStack_78 = param_3;
            uVar13 = System_Enum__ToString_23a4eac(&uStack_88,0);
            uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyBonusClaimed_2daed54
                              (uVar9,uVar11,(long)iVar1,(long)iVar18,(long)iVar7,uVar13,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar3);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar15);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

