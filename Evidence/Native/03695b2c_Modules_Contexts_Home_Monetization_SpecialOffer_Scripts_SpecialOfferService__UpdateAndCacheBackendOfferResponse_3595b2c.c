/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$UpdateAndCacheBackendOfferResponse
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__UpdateAndCacheBackendOfferResponse (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_SpecialOfferResponse__o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$UpdateAndCacheBackendOfferResponse
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__UpdateAndCacheBackendOfferResponse
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this,
   Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_SpecialOfferResponse__o*
   response, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__UpdateAndCacheBackendOfferResponse_3595b2c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c32e60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b7290);
    bRam0000000005c32e60 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar11 == 0)) goto LAB_03695c70;
  lVar11 = *(long *)(lVar11 + 0x18);
  if (lVar11 == 0) {
LAB_03695b98:
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClearSpecialOfferData_3595c74
              (param_1);
    if (((*(long *)(param_1 + 0x28) == 0) ||
        (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar11 == 0)) ||
       (lVar11 = *(long *)(lVar11 + 0xb8), lVar11 == 0)) goto LAB_03695c70;
    if (*(char *)(lVar11 + 0x10) == '\0') {
      uVar5 = UnityEngine_Random__Range_383a650(1,6,0);
      lVar11 = *(long *)(param_1 + 0x10);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) goto LAB_03695c70;
      *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x28) = uVar5;
      *(undefined1 *)(lVar11 + 0x20) = 1;
    }
    if (param_2 == 0) goto LAB_03695c70;
  }
  else {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_03695c70;
    uVar10 = System_String__Equals_1ecf17c
                       (*(undefined8 *)(lVar11 + 0x10),
                        *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10),4,0);
    if ((uVar10 & 1) == 0) goto LAB_03695b98;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__CacheBackendResponse_35941f8
              (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x20));
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ScheduleSpecialOfferFetch_3595ce8
              (param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetState_35974f4
                        ();
      if (iVar6 != 7) {
        return;
      }
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar1 = PTR_DAT_057c8a60;
      lVar11 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      if (lVar11 != 0) {
        if ((bRam0000000005c237b5 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575f9f0,0);
          FUN_012d0dc8(PTR_DAT_057c8a60);
          FUN_012d0dc8(PTR_DAT_057fb138);
          bRam0000000005c237b5 = 1;
        }
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0575f9f0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar8,*(undefined8 *)PTR_DAT_057fb138,0);
        uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WrongSpecialOfferData_2db8334(0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
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
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_48,lVar11,*(undefined8 *)PTR_DAT_0581bc50);
        do {
          uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar1);
          plVar4 = plStack_38;
          if ((uVar10 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_48,*(undefined8 *)puVar3);
            return;
          }
          if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar11 = *plStack_38;
          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_01548070;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plStack_38,*(long *)puVar2,1);
LAB_01548070:
          (*(code *)*puVar7)(plVar4,lVar8,puVar7[1]);
        } while( true );
      }
    }
  }
LAB_03695c70:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

