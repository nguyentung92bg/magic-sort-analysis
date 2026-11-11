/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$CheckWrongData
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CheckWrongData (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$CheckWrongData
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CheckWrongData
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

byte Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CheckWrongData_20adb54
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c29509 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ea4f0);
    FUN_012d0dc8(PTR_DAT_057f27e8);
    FUN_012d0dc8(PTR_DAT_057b48a0);
    FUN_012d0dc8(PTR_DAT_057f5d30);
    bRam0000000005c29509 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 != 0)) {
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x38);
      if (lVar6 == 0) goto LAB_021adca0;
      uVar5 = *(undefined8 *)(lVar6 + 0x20);
    }
    lVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel_20ad79c
                      (param_1,uVar5);
    puVar2 = PTR_DAT_057f27e8;
    puVar1 = PTR_DAT_057ea4f0;
    if (lVar6 == 0) {
      bVar3 = 1;
    }
    else {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 == 0)) goto LAB_021adca0;
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
        bVar3 = 0;
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x30);
        bVar3 = 0;
        if (lVar6 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_38,lVar6,*(undefined8 *)PTR_DAT_057f5d30);
          do {
            uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_38,*(undefined8 *)puVar2);
            if ((uVar4 & 1) == 0) {
              bVar3 = 0;
              iVar7 = 7;
              goto LAB_021adc78;
            }
            if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel_20ad79c
                              (param_1,*(undefined8 *)(lStack_28 + 0x20));
          } while (lVar6 != 0);
          bVar3 = 1;
          iVar7 = 10;
LAB_021adc78:
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_38,*(undefined8 *)puVar1);
          bVar3 = iVar7 == 10 & bVar3;
        }
      }
    }
    return bVar3;
  }
LAB_021adca0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

