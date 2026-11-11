/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEarnedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendEarnedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencyEarnReason, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEarnedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendEarnedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencyEarnReason,
   System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendEarnedEvent_144a9b0
               (undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  double dVar26;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar10 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23758 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c94c0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bfac8);
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_057fc3d8);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057731b8);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_057e2408);
    FUN_012d0dc8(PTR_DAT_057ddb78);
    FUN_012d0dc8(PTR_DAT_057f4178);
    FUN_012d0dc8(PTR_DAT_0578bb10);
    FUN_012d0dc8(PTR_DAT_057abae8);
    FUN_012d0dc8(PTR_DAT_0580d9e0);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057b6ad8);
    FUN_012d0dc8(PTR_DAT_0578f838);
    FUN_012d0dc8(PTR_DAT_0581b780);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057bcc10);
    FUN_012d0dc8(PTR_DAT_057c7110);
    bRam0000000005c23758 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (((**(long **)(*(long *)puVar10 + 0xb8) != 0) &&
      (lVar14 = *(long *)(**(long **)(*(long *)puVar10 + 0xb8) + 0x18), lVar14 != 0)) &&
     (plVar15 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar14,*(undefined8 *)PTR_DAT_057a1e60),
     puVar12 = PTR_DAT_057db748, puVar11 = PTR_DAT_057bfac8, puVar10 = PTR_DAT_057b3a70,
     param_3 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a0,param_3,*(undefined8 *)PTR_DAT_057a6288);
    lStack_70 = CONCAT44(uStack_8c,uStack_90);
    iVar24 = 0;
    iVar9 = 0;
    iVar8 = 0;
    iVar25 = 0;
    iVar22 = 0;
    iVar6 = 0;
    iVar5 = 0;
    iVar7 = 0;
    iVar23 = 0;
    iVar4 = 0;
    iVar2 = 0;
    iVar1 = 0;
    iVar3 = 0;
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    while (uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar10), lVar14 = lStack_70,
          (uVar16 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar13 = *(int *)(lStack_70 + 0x10);
      if (iVar13 < 0xf) {
        switch(iVar13) {
        case 1:
          iVar1 = *(int *)(lStack_70 + 0x14) + iVar1;
          break;
        case 2:
          uVar16 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                             (lStack_70,0);
          if ((uVar16 & 1) == 0) {
            iVar7 = *(int *)(lVar14 + 0x14) + iVar7;
          }
          else {
            uStack_88 = *(undefined8 *)(lVar14 + 0x18);
            if (*(int *)(*(long *)PTR_DAT_0576c1b8 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar26 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_88,0);
            iVar13 = -0x80000000;
            if (dVar26 != INFINITY) {
              iVar13 = (int)dVar26;
            }
            iVar5 = iVar13 + iVar5;
          }
          break;
        case 4:
          iVar3 = *(int *)(lStack_70 + 0x14) + iVar3;
          break;
        case 5:
          iVar4 = *(int *)(lStack_70 + 0x14) + iVar4;
          break;
        case 6:
          iVar2 = *(int *)(lStack_70 + 0x14) + iVar2;
          break;
        case 0xe:
          switch(*(undefined4 *)(lStack_70 + 0x2c)) {
          case 1:
            iVar6 = *(int *)(lStack_70 + 0x14) + iVar6;
            break;
          case 2:
            iVar22 = *(int *)(lStack_70 + 0x14) + iVar22;
            break;
          case 3:
            iVar25 = *(int *)(lStack_70 + 0x14) + iVar25;
            break;
          case 4:
            iVar9 = *(int *)(lStack_70 + 0x14) + iVar9;
            break;
          case 5:
            iVar8 = *(int *)(lStack_70 + 0x14) + iVar8;
          }
        }
      }
      else if (iVar13 == 0x10) {
        uStack_88 = *(undefined8 *)(lStack_70 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_0576c1b8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        dVar26 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_88,0);
        iVar13 = -0x80000000;
        if (dVar26 != INFINITY) {
          iVar13 = (int)dVar26;
        }
        iVar23 = iVar13 + iVar23;
      }
      else if (iVar13 == 0x15) {
        iVar24 = *(int *)(lStack_70 + 0x14) + iVar24;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_05811f10);
    lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
    if (lVar14 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar14,*(undefined8 *)PTR_DAT_057e2408,0);
      uStack_a0 = *(undefined8 *)puVar11;
      uStack_98 = 0xffffffffffffffff;
      uStack_90 = param_2;
      uVar17 = System_Enum__ToString_23a4eac(&uStack_a0,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_057e3618,uVar17,0);
      iStack_a4 = iVar1;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_a4);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_05786c98,uVar17,0);
      iStack_a8 = iVar3;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_a8);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_057e54d0,uVar17,0);
      iStack_ac = iVar4;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_ac);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_0575a8a0,uVar17,0);
      iStack_b0 = iVar2;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_b0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_057ddb78,uVar17,0);
      iStack_b4 = iVar5;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_b4);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_0581b780,uVar17,0);
      iStack_b8 = iVar7;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_b8);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_057c7110,uVar17,0);
      iStack_bc = iVar23;
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_bc);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_0580d9e0,uVar17,0);
      if (plVar15 == (long *)0x0) {
        iVar13 = 0;
      }
      else {
        lVar19 = *plVar15;
        uVar16 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar16 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar18 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_0154b028;
            }
            uVar16 = uVar16 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar16 != 0);
        }
        puVar18 = (undefined8 *)FUN_0131971c(plVar15,*(long *)PTR_DAT_057636d0,1);
LAB_0154b028:
        iVar13 = (*(code *)*puVar18)(plVar15,puVar18[1]);
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar13);
      uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&uStack_a0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar14,*(undefined8 *)PTR_DAT_057caaf0,uVar17,0);
      lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 8);
      if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) &&
         (lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar19,*(undefined8 *)PTR_DAT_057c94c0), lVar19 != 0)) {
        lVar19 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetFreeLives_35b3598(lVar19,0)
        ;
        puVar10 = PTR_DAT_057db748;
        if (lVar19 == 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = *(int *)(lVar19 + 0x18);
        }
        iStack_a4 = iVar21;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&iStack_a4);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057b6ad8,uVar17,0);
        iStack_a8 = iVar6;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_a8);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057f4178,uVar17,0);
        iStack_ac = iVar22;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_ac);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057abae8,uVar17,0);
        iStack_b0 = iVar25;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_b0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_0578bb10,uVar17,0);
        iStack_b4 = iVar9;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_b4);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057bcc10,uVar17,0);
        iStack_b8 = iVar8;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_b8);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_057731b8,uVar17,0);
        iStack_bc = iVar24;
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar10,&iStack_bc);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)PTR_DAT_0578f838,uVar17,0);
        uStack_a0 = *(undefined8 *)PTR_DAT_057bfac8;
        uStack_98 = 0xffffffffffffffff;
        uStack_90 = param_2;
        uVar17 = System_Enum__ToString_23a4eac(&uStack_a0,0);
        uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__Earned_2db7238
                           (uVar17,(long)iVar1,(long)iVar3,(long)iVar4,(long)iVar2,(long)iVar5,
                            (long)iVar7,(long)iVar23,(long)iVar13,(long)iVar21,(long)iVar6,
                            (long)iVar22,(long)iVar25,(long)iVar9,(long)iVar8,(long)iVar24,0);
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

