/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetPackageIdByProductId
int32_t Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetPackageIdByProductId (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetPackageIdByProductId
   int32_t
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetPackageIdByProductId
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, System_String_o* productId, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetPackageIdByProductId_20adda0
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2950a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ea4f0);
    FUN_012d0dc8(PTR_DAT_057f27e8);
    FUN_012d0dc8(PTR_DAT_057b48a0);
    FUN_012d0dc8(PTR_DAT_057f5d30);
    bRam0000000005c2950a = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (*(long *)(lVar4 + 0x38) != 0) {
      uVar3 = System_String__op_Equality_1ec12e0
                        (*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x20),param_2,0);
      puVar2 = PTR_DAT_057f27e8;
      puVar1 = PTR_DAT_057ea4f0;
      if ((uVar3 & 1) == 0) {
        if (*(long *)(lVar4 + 0x30) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_48,*(long *)(lVar4 + 0x30),*(undefined8 *)PTR_DAT_057f5d30);
          do {
            uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_48,*(undefined8 *)puVar2);
            lVar4 = lStack_38;
            if ((uVar3 & 1) == 0) {
              uVar5 = 0;
              iVar6 = 2;
              goto LAB_021adebc;
            }
            if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar3 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lStack_38 + 0x20),param_2,0);
          } while ((uVar3 & 1) == 0);
          uVar5 = *(undefined4 *)(lVar4 + 0x10);
          iVar6 = 6;
LAB_021adebc:
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar1);
          if (iVar6 == 6) {
            return uVar5;
          }
          return 0xffffffff;
        }
      }
      else if (*(long *)(lVar4 + 0x38) != 0) {
        return *(undefined4 *)(*(long *)(lVar4 + 0x38) + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

