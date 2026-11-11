/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyRewardPopupImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardPopupImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyRewardPopupImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardPopupImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyRewardPopupImpressionEvent_14716c4
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0575c778);
                    /* try { // try from 01571718 to 0167171b has its CatchHandler @ 01571724 */
                    /* try { // try from 0157171c to 0167174f has its CatchHandler @ 0157127c */
    FUN_012d0dc8(PTR_DAT_057a1e60);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571718 with catch @ 01571724
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571658 with catch @ 01571728
                        */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571654 with catch @ 0157172c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571520 with catch @ 01571730
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015714c4 with catch @ 01571734
                        */
    FUN_012d0dc8(PTR_DAT_057aa668);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571558 with catch @ 01571738
                        */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 01571750 to 01671753 has its CatchHandler @ 015717d4 */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057aacb0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
                    /* try { // try from 01571798 to 016717bf has its CatchHandler @ 015717e0 */
    bRam0000000005c237ef = 1;
  }
  lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
                    /* try { // try from 015717c0 to 016717cb has its CatchHandler @ 0157127c */
    lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar13,*(undefined8 *)PTR_DAT_0575c778);
    puVar3 = PTR_DAT_057c8a60;
                    /* try { // try from 015717cc to 016717d3 has its CatchHandler @ 015717e0 */
    lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* catch() { ... } // from try @ 01571750 with catch @ 015717d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01571798 with catch @ 015717e0
                       catch(type#2 @ 00000000) { ... } // from try @ 015717cc with catch @ 015717e0
                        */
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar14 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar14,*(undefined8 *)PTR_DAT_057aacb0,0), puVar3 = PTR_DAT_057d3f68,
         puVar1 = PTR_DAT_0575a580, lVar13 != 0)) {
        uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetSegment_38d4288
                          (lVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar3,uVar9,0);
        uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0
                          (lVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar1,uVar9,0);
        puVar6 = PTR_DAT_057e3618;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057aa668;
        puVar1 = PTR_DAT_057636d0;
        if (plVar8 != (long *)0x0) {
          lVar15 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_015718f8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_015718f8:
          puVar2 = PTR_DAT_0575f9f0;
          uStack_64 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar4,uVar9,0);
          uStack_80 = *(undefined8 *)puVar3;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = param_2;
          uVar9 = System_Enum__ToString_23a4eac(&uStack_80,0);
                    /* try { // try from 0157195c to 01671afb has its CatchHandler @ 0157195c
                       catch() { ... } // from try @ 0157195c with catch @ 0157195c
                       catch() { ... } // from try @ 01571c00 with catch @ 0157195c
                       catch() { ... } // from try @ 01571c90 with catch @ 0157195c
                       catch() { ... } // from try @ 01571d50 with catch @ 0157195c
                       catch() { ... } // from try @ 01571dec with catch @ 0157195c */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar6,uVar9,0);
          uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetSegment_38d4288
                            (lVar13,0);
          uVar11 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEventId_38d42a0
                             (lVar13,0);
          lVar13 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_015719d4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,1);
LAB_015719d4:
          iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uStack_98 = *(undefined8 *)puVar3;
          uStack_90 = 0xffffffffffffffff;
          uStack_88 = param_2;
          uVar12 = System_Enum__ToString_23a4eac(&uStack_98,0);
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyBonusPopupImpression_2daec74
                            (uVar9,uVar11,(long)iVar7,uVar12,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

