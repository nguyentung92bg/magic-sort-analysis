/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ClaimPurchasedChooseOneSpecialOfferRewards
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClaimPurchasedChooseOneSpecialOfferRewards (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, System_String_o* productId, bool giveRewardsWithoutAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ClaimPurchasedChooseOneSpecialOfferRewards
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClaimPurchasedChooseOneSpecialOfferRewards
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, System_String_o* productId, bool giveRewardsWithoutAnimation, const MethodInfo* method);
    */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClaimPurchasedChooseOneSpecialOfferRewards_20ad2d8
               (long param_1,undefined8 param_2,ulong param_3)

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
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  double dVar28;
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
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__SetIsPurchased_20ab8c8
              (*(long *)(param_1 + 0x10),1);
    lVar18 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRewardsForProductId_20ad340
                       (param_1,param_2);
    lVar21 = *(long *)(param_1 + 0x30);
    if (lVar21 != 0) {
      if ((param_3 & 1) != 0) {
        if ((bRam0000000005c370cf & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05811f10);
          FUN_012d0dc8(PTR_DAT_057b3a70);
          FUN_012d0dc8(PTR_DAT_05803990);
          FUN_012d0dc8(PTR_DAT_057a6288);
          FUN_012d0dc8(PTR_DAT_0579bac0);
          bRam0000000005c370cf = 1;
        }
        puVar12 = PTR_DAT_05811f10;
        puVar11 = PTR_DAT_057b3a70;
        uStack_68 = 0;
        lStack_70 = 0;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&lStack_88,lVar18,*(undefined8 *)PTR_DAT_057a6288);
        puVar13 = PTR_DAT_057ece38;
        uStack_68 = uStack_80;
        lStack_70 = lStack_88;
        while( true ) {
          while( true ) {
            uVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&lStack_70,*(undefined8 *)puVar11);
            if ((uVar19 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&lStack_70,*(undefined8 *)puVar12);
              return;
            }
            if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if ((*(long *)(lStack_78 + 0x20) == 0) ||
               (*(int *)(*(long *)(lStack_78 + 0x20) + 0x18) < 1)) break;
            Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
                      (lVar21,0x1d);
          }
          uVar19 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                             (lStack_78);
          lVar20 = *(long *)(lVar21 + 0x10);
          uVar10 = *(undefined4 *)(lStack_78 + 0x10);
          if ((uVar19 & 1) == 0) {
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0(0,uVar10);
            }
            Modules_Contexts_Application_Inventory_Scripts_InventoryService__Earn_137da88
                      (lVar20,uVar10,*(undefined4 *)(lStack_78 + 0x14),0);
          }
          else {
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0(0,uVar10);
            }
            Modules_Contexts_Application_Inventory_Scripts_InventoryService__Earn_137f3e8
                      (lVar20,uVar10,*(undefined8 *)(lStack_78 + 0x18),0);
          }
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(puVar13);
            cRam0000000005c230a8 = '\x01';
          }
          lVar20 = **(long **)(*(long *)puVar13 + 0xb8);
          if (lVar20 == 0) break;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEarnedEvent_144a9b0
                    (lVar20,0x1d,lVar18,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Application_Reward_Scripts_RewardService__PendRewards_3ce8810
                (lVar21,lVar18,lVar18,0);
      if (*(long *)(lVar21 + 0x30) != 0) {
        Modules_Contexts_Application_Reward_Scripts_BulkRewardQueue__AddRewards_3ce1624
                  (*(long *)(lVar21 + 0x30),0x1d,lVar18);
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        puVar11 = PTR_DAT_0576aae0;
        lVar21 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
        if (lVar21 != 0) {
          if ((bRam0000000005c23758 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0575f9f0,0x1d,lVar18,0);
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
          lStack_78 = 0;
          lStack_70 = 0;
          lStack_88 = 0;
          uStack_80 = 0;
          if (((**(long **)(*(long *)puVar11 + 0xb8) != 0) &&
              (lVar20 = *(long *)(**(long **)(*(long *)puVar11 + 0xb8) + 0x18), lVar20 != 0)) &&
             (plVar15 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar20,*(undefined8 *)PTR_DAT_057a1e60),
             puVar13 = PTR_DAT_057db748, puVar12 = PTR_DAT_057bfac8, puVar11 = PTR_DAT_057b3a70,
             lVar18 != 0)) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_a0,lVar18,*(undefined8 *)PTR_DAT_057a6288);
            lStack_70 = CONCAT44(uStack_8c,uStack_90);
            iVar26 = 0;
            iVar9 = 0;
            iVar8 = 0;
            iVar27 = 0;
            iVar24 = 0;
            iVar6 = 0;
            iVar5 = 0;
            iVar7 = 0;
            iVar25 = 0;
            iVar4 = 0;
            iVar2 = 0;
            iVar1 = 0;
            iVar3 = 0;
            lStack_78 = uStack_98;
            uStack_80 = uStack_a0;
            while (uVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_80,*(undefined8 *)puVar11), lVar18 = lStack_70,
                  (uVar19 & 1) != 0) {
              if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              iVar14 = *(int *)(lStack_70 + 0x10);
              if (iVar14 < 0xf) {
                switch(iVar14) {
                case 1:
                  iVar1 = *(int *)(lStack_70 + 0x14) + iVar1;
                  break;
                case 2:
                  uVar19 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                                     (lStack_70,0);
                  if ((uVar19 & 1) == 0) {
                    iVar7 = *(int *)(lVar18 + 0x14) + iVar7;
                  }
                  else {
                    lStack_88 = *(long *)(lVar18 + 0x18);
                    if (*(int *)(*(long *)PTR_DAT_0576c1b8 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    dVar28 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&lStack_88,0);
                    iVar14 = -0x80000000;
                    if (dVar28 != INFINITY) {
                      iVar14 = (int)dVar28;
                    }
                    iVar5 = iVar14 + iVar5;
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
                    iVar24 = *(int *)(lStack_70 + 0x14) + iVar24;
                    break;
                  case 3:
                    iVar27 = *(int *)(lStack_70 + 0x14) + iVar27;
                    break;
                  case 4:
                    iVar9 = *(int *)(lStack_70 + 0x14) + iVar9;
                    break;
                  case 5:
                    iVar8 = *(int *)(lStack_70 + 0x14) + iVar8;
                  }
                }
              }
              else if (iVar14 == 0x10) {
                lStack_88 = *(long *)(lStack_70 + 0x18);
                if (*(int *)(*(long *)PTR_DAT_0576c1b8 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                dVar28 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&lStack_88,0);
                iVar14 = -0x80000000;
                if (dVar28 != INFINITY) {
                  iVar14 = (int)dVar28;
                }
                iVar25 = iVar14 + iVar25;
              }
              else if (iVar14 == 0x15) {
                iVar26 = *(int *)(lStack_70 + 0x14) + iVar26;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)PTR_DAT_05811f10);
            lVar18 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
            if (lVar18 != 0) {
              Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                        (lVar18,*(undefined8 *)PTR_DAT_057e2408,0);
              uStack_a0 = *(undefined8 *)puVar12;
              uStack_98 = 0xffffffffffffffff;
              uStack_90 = 0x1d;
              uVar16 = System_Enum__ToString_23a4eac(&uStack_a0,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_057e3618,uVar16,0);
              iStack_a4 = iVar1;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_a4);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_05786c98,uVar16,0);
              iStack_a8 = iVar3;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_a8);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_057e54d0,uVar16,0);
              iStack_ac = iVar4;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_ac);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_0575a8a0,uVar16,0);
              iStack_b0 = iVar2;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_b0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_057ddb78,uVar16,0);
              iStack_b4 = iVar5;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_b4);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_0581b780,uVar16,0);
              iStack_b8 = iVar7;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_b8);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_057c7110,uVar16,0);
              iStack_bc = iVar25;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&iStack_bc);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_0580d9e0,uVar16,0);
              if (plVar15 == (long *)0x0) {
                iVar14 = 0;
              }
              else {
                lVar20 = *plVar15;
                uVar19 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar19 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                      goto LAB_0154b028;
                    }
                    uVar19 = uVar19 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar19 != 0);
                }
                puVar17 = (undefined8 *)FUN_0131971c(plVar15,*(long *)PTR_DAT_057636d0,1);
LAB_0154b028:
                iVar14 = (*(code *)*puVar17)(plVar15,puVar17[1]);
              }
              uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar14);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar13,&uStack_a0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar18,*(undefined8 *)PTR_DAT_057caaf0,uVar16,0);
              lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 8);
              if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) &&
                 (lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar20,*(undefined8 *)PTR_DAT_057c94c0), lVar20 != 0)) {
                lVar20 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetFreeLives_35b3598
                                   (lVar20,0);
                puVar11 = PTR_DAT_057db748;
                if (lVar20 == 0) {
                  iVar23 = 0;
                }
                else {
                  iVar23 = *(int *)(lVar20 + 0x18);
                }
                iStack_a4 = iVar23;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&iStack_a4);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_057b6ad8,uVar16,0);
                iStack_a8 = iVar6;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar11,&iStack_a8);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_057f4178,uVar16,0);
                iStack_ac = iVar24;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar11,&iStack_ac);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_057abae8,uVar16,0);
                iStack_b0 = iVar27;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar11,&iStack_b0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_0578bb10,uVar16,0);
                iStack_b4 = iVar9;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar11,&iStack_b4);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_057bcc10,uVar16,0);
                iStack_b8 = iVar8;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar11,&iStack_b8);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_057731b8,uVar16,0);
                iStack_bc = iVar26;
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar11,&iStack_bc);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar18,*(undefined8 *)PTR_DAT_0578f838,uVar16,0);
                uStack_a0 = *(undefined8 *)PTR_DAT_057bfac8;
                uStack_90 = 0x1d;
                uStack_98 = 0xffffffffffffffff;
                uVar16 = System_Enum__ToString_23a4eac(&uStack_a0,0);
                uVar16 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__Earned_2db7238
                                   (uVar16,(long)iVar1,(long)iVar3,(long)iVar4,(long)iVar2,
                                    (long)iVar5,(long)iVar7,(long)iVar25,(long)iVar14,(long)iVar23,
                                    (long)iVar6,(long)iVar24,(long)iVar27,(long)iVar9,(long)iVar8,
                                    (long)iVar26,0);
                if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar16,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (lVar21,lVar18);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

