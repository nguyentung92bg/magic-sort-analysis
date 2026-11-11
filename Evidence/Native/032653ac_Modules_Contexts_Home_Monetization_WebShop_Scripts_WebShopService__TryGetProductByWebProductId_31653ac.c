/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$TryGetProductByWebProductId
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__TryGetProductByWebProductId (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o* webProductId, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o** webProduct, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$TryGetProductByWebProductId
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__TryGetProductByWebProductId
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o*
   webProductId, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o** webProduct,
   const MethodInfo* method); */

byte Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__TryGetProductByWebProductId_31653ac
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c31574 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7410);
    FUN_012d0dc8(PTR_DAT_057d56c0);
    FUN_012d0dc8(PTR_DAT_057726b8);
    FUN_012d0dc8(PTR_DAT_057cb618);
    bRam0000000005c31574 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  *param_3 = 0;
  FUN_012d0d74(param_3,0);
  lVar4 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                    (param_1);
  puVar2 = PTR_DAT_057d56c0;
  puVar1 = PTR_DAT_057c7410;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar3 = 0;
  if (*(long *)(lVar4 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_057cb618);
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      lVar4 = lStack_38;
      if ((uVar5 & 1) == 0) {
        bVar3 = 0;
        iVar6 = 6;
        goto LAB_032654ac;
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar5 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lStack_38 + 0x18),param_2,0);
    } while ((uVar5 & 1) == 0);
    *param_3 = lVar4;
    FUN_012d0d74(param_3,lVar4);
    bVar3 = 1;
    iVar6 = 5;
LAB_032654ac:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar1);
    bVar3 = iVar6 == 5 & bVar3;
  }
  return bVar3;
}

