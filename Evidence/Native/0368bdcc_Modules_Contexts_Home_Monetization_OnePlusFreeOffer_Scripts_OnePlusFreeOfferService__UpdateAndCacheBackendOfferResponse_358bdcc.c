/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$UpdateAndCacheBackendOfferResponse
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__UpdateAndCacheBackendOfferResponse (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_OnePlusOneOfferResponse__o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$UpdateAndCacheBackendOfferResponse
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__UpdateAndCacheBackendOfferResponse
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_OnePlusOneOfferResponse__o*
   response, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__UpdateAndCacheBackendOfferResponse_358bdcc
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c32df8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793ca0);
    FUN_012d0dc8(PTR_DAT_0579d708);
    bRam0000000005c32df8 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar9 != 0)) {
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 == 0) {
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClearOnePlusFreeOfferData_358bf08
                (param_1);
      if (param_2 == 0) goto LAB_0368bf04;
    }
    else {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_0368bf04;
      uVar8 = System_String__Equals_1ecf17c
                        (*(undefined8 *)(lVar9 + 0x10),
                         *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),4,0);
      if ((uVar8 & 1) == 0) {
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClearOnePlusFreeOfferData_358bf08
                  (param_1);
      }
    }
    lVar9 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0579d708 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ToEventCache_358bf60
                       (uVar11);
    if (lVar9 != 0) {
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__UpdateEventCache_358a728
                (lVar9,uVar11);
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ScheduleOnePlusFreeOfferFetch_358c044
                (param_1);
      if (*(long *)(param_1 + 0x18) != 0) {
        iVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                          ();
        if (iVar5 != 8) {
          return;
        }
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        puVar1 = PTR_DAT_057c8a60;
        lVar9 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
        if (lVar9 != 0) {
          if ((bRam0000000005c237ed & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0575f9f0,0);
            FUN_012d0dc8(PTR_DAT_057c8a60);
            FUN_012d0dc8(PTR_DAT_057908b0);
            bRam0000000005c237ed = 1;
          }
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0575f9f0;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar7,*(undefined8 *)PTR_DAT_057908b0,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WrongOnePlusFreeOfferData_2dbed30
                             (0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          if ((bRam0000000005c2373c & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057f8670);
            FUN_012d0dc8(PTR_DAT_0576fba0);
            FUN_012d0dc8(PTR_DAT_057fde78);
            FUN_012d0dc8(PTR_DAT_0577a090);
            FUN_012d0dc8(PTR_DAT_0581bc50);
            bRam0000000005c2373c = 1;
          }
          puVar3 = PTR_DAT_057f8670;
          puVar2 = PTR_DAT_0577a090;
          puVar1 = PTR_DAT_0576fba0;
          uStack_40 = 0;
          plStack_38 = (long *)0x0;
          uStack_48 = 0;
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_48,lVar9,*(undefined8 *)PTR_DAT_0581bc50);
          do {
            uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_48,*(undefined8 *)puVar1);
            plVar4 = plStack_38;
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_48,*(undefined8 *)puVar3);
              return;
            }
            if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar9 = *plStack_38;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_01548070;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0131971c(plStack_38,*(long *)puVar2,1);
LAB_01548070:
            (*(code *)*puVar6)(plVar4,lVar7,puVar6[1]);
          } while( true );
        }
      }
    }
  }
LAB_0368bf04:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

