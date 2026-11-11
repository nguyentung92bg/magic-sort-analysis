/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassStepRewardClaimed
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassStepRewardClaimed (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t step, bool isFree, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMagicPassStepRewardClaimed
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassStepRewardClaimed
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t step, bool isFree,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassStepRewardClaimed_147de5c
               (undefined8 param_1,int param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  undefined4 uVar29;
  long lVar30;
  long lVar31;
  double dVar32;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2382f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_0577d870);
    FUN_012d0dc8(PTR_DAT_05761888);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_05811fe8);
    FUN_012d0dc8(PTR_DAT_05772560);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057fdba0);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_05806fb0);
    FUN_012d0dc8(PTR_DAT_05800a10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057fa200);
    FUN_012d0dc8(PTR_DAT_05810958);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_058043c0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2382f = 1;
  }
  uStack_68 = 0;
  uStack_6c = 0;
  lVar24 = **(long **)(*(long *)puVar5 + 0xb8);
  if ((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x18), lVar24 != 0)) {
    lVar24 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar24,*(undefined8 *)PTR_DAT_057dc218);
    puVar6 = PTR_DAT_057c8a60;
    lVar25 = **(long **)(*(long *)puVar5 + 0xb8);
    if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x18), lVar25 != 0)) {
      plVar17 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar25,*(undefined8 *)PTR_DAT_057a1e60);
      lVar25 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
      if ((lVar25 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar25,*(undefined8 *)PTR_DAT_057fdba0,0), puVar5 = PTR_DAT_0575a580,
         lVar24 != 0)) {
        uVar18 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                           (lVar24,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar25,*(undefined8 *)puVar5,uVar18,0);
        puVar10 = PTR_DAT_057e4da8;
        puVar9 = PTR_DAT_057db748;
        puVar8 = PTR_DAT_057d6138;
        puVar7 = PTR_DAT_057d3f68;
        puVar6 = PTR_DAT_057caaf0;
        puVar5 = PTR_DAT_057b8b10;
        if (plVar17 != (long *)0x0) {
          lVar26 = *plVar17;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar19 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_0157e13c;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar19 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057636d0,1);
LAB_0157e13c:
          iStack_70 = (*(code *)*puVar19)(plVar17,puVar19[1]);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar9,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar6,uVar18,0);
          uStack_78 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                                (lVar24,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar5,uVar18,0);
          uStack_7c = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                                (lVar24,0);
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar9,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar10,uVar18,0);
          uVar18 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar24,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar7,uVar18,0);
          uVar11 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentStep_38dca40
                             (lVar24,0);
          uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetDefaultStepsCount_38dcb3c
                             (lVar24,0);
          if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_057d6f00);
          }
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          puVar9 = PTR_DAT_05810958;
          puVar8 = PTR_DAT_05806fb0;
          puVar7 = PTR_DAT_05800a10;
          puVar6 = PTR_DAT_05774660;
          puVar5 = PTR_DAT_05772560;
          if ((int)uVar12 < 0) {
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            System_Math__ThrowMinMaxException_int__29c3384(0,uVar12,*(undefined8 *)PTR_DAT_05800a28)
            ;
          }
          puVar10 = PTR_DAT_057db748;
          if ((int)uVar11 <= (int)uVar12) {
            uVar12 = uVar11;
          }
          uStack_80 = 0;
          if (-1 < (int)uVar11) {
            uStack_80 = uVar12;
          }
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar6,uVar18,0);
          uVar27 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar24,0);
          uVar18 = *(undefined8 *)puVar7;
          uVar29 = 1;
          if ((uVar27 & 1) == 0) {
            uVar29 = 2;
          }
          uStack_78._0_4_ = uVar29;
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar18,uVar20,0)
          ;
          uVar18 = *(undefined8 *)puVar8;
          uStack_78._0_4_ = 1;
          if ((param_3 & 1) == 0) {
            uStack_78._0_4_ = 2;
          }
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar18,uVar20,0)
          ;
          iStack_70 = param_2;
          uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar9,uVar18,0);
          puVar7 = PTR_DAT_057fa200;
          puVar6 = PTR_DAT_057db748;
          uVar18 = *(undefined8 *)puVar5;
          if (param_4 == 0) {
            uStack_78._0_4_ = 0;
          }
          else {
            uStack_78._0_4_ = *(undefined4 *)(param_4 + 0x10);
          }
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar18,uVar20,0)
          ;
          puVar8 = PTR_DAT_058043c0;
          puVar5 = PTR_DAT_0576c1b8;
          uVar18 = *(undefined8 *)PTR_DAT_05811fe8;
          if (param_4 == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined4 *)(param_4 + 0x14);
          }
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar29);
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar18,uVar20,0)
          ;
          uVar18 = *(undefined8 *)puVar7;
          if (param_4 == 0) {
            dVar32 = 0.0;
          }
          else {
            uStack_68 = *(undefined8 *)(param_4 + 0x18);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar32 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
          }
          puVar7 = PTR_DAT_057e66c0;
          puVar5 = PTR_DAT_05761888;
          iVar16 = -0x80000000;
          if (dVar32 != INFINITY) {
            iVar16 = (int)dVar32;
          }
          uStack_78 = CONCAT44(uStack_78._4_4_,iVar16);
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar18,uVar20,0)
          ;
          uVar18 = *(undefined8 *)puVar8;
          if (param_4 == 0) {
            uStack_78 = 0;
          }
          else {
            uStack_78 = 0;
            System_Nullable_int____ctor_203c398
                      (&uStack_78,*(undefined4 *)(param_4 + 0x28),*(undefined8 *)PTR_DAT_0577d870);
          }
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar25,uVar18,uVar20,0)
          ;
          uVar18 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar24,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar7,uVar18,0);
          uVar18 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetEventId_38dbd2c
                             (lVar24,0);
          lVar26 = *plVar17;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar19 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                goto LAB_0157e59c;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar19 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057636d0,1);
LAB_0157e59c:
          iVar13 = (*(code *)*puVar19)(plVar17,puVar19[1]);
          uVar20 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetStartTimeAsUnix_38dbdac
                             (lVar24,0);
          iVar14 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetRemainingSeconds_38dbb08
                             (lVar24,0);
          uVar21 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetSegment_38dbdec
                             (lVar24,0);
          iVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetCurrentStep_38dca40
                             (lVar24,0);
          iVar16 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetDefaultStepsCount_38dcb3c
                             (lVar24,0);
          if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_057d6f00);
          }
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          if (iVar16 < 0) {
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            System_Math__ThrowMinMaxException_int__29c3384(0,iVar16,*(undefined8 *)PTR_DAT_05800a28)
            ;
          }
          if (iVar15 <= iVar16) {
            iVar16 = iVar15;
          }
          iVar3 = 0;
          if (-1 < iVar15) {
            iVar3 = iVar16;
          }
          uVar27 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsPassActivated_38dc6c4
                             (lVar24,0);
          uVar1 = 1;
          if ((uVar27 & 1) == 0) {
            uVar1 = 2;
          }
          uVar2 = 1;
          if ((param_3 & 1) == 0) {
            uVar2 = 2;
          }
          if (param_4 == 0) {
            lVar31 = 0;
            lVar30 = 0;
            lVar22 = 0;
            lVar26 = 0;
          }
          else {
            uStack_68 = *(undefined8 *)(param_4 + 0x18);
            lVar30 = (long)*(int *)(param_4 + 0x10);
            lVar31 = (long)*(int *)(param_4 + 0x14);
            if (*(int *)(*(long *)PTR_DAT_0576c1b8 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar32 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
            uStack_6c = *(undefined4 *)(param_4 + 0x28);
            lVar26 = -0x80000000;
            if (dVar32 != INFINITY) {
              lVar26 = (long)(int)dVar32;
            }
            lVar22 = System_Int32__ToString_26c9768(&uStack_6c,0);
          }
          lVar4 = *(long *)PTR_DAT_05774390;
          if (lVar22 != 0) {
            lVar4 = lVar22;
          }
          uVar23 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetReadableEventId_38df4e0
                             (lVar24,0);
          uVar18 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MagicPassRewardClaimed_2db1ae4
                             (uVar18,(long)iVar13,uVar20,(long)iVar14,uVar21,(long)iVar3,uVar1,uVar2
                              ,(long)param_2,lVar30,lVar31,lVar26,lVar4,uVar23,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar18,0);
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

