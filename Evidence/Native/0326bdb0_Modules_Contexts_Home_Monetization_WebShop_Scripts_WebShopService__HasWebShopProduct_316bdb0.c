/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$HasWebShopProduct
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__HasWebShopProduct (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$HasWebShopProduct
   bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__HasWebShopProduct
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o*
   productId, const MethodInfo* method); */

byte Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__HasWebShopProduct_316bdb0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c31572 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7410);
    FUN_012d0dc8(PTR_DAT_057d56c0);
    FUN_012d0dc8(PTR_DAT_057726b8);
    FUN_012d0dc8(PTR_DAT_057cb618);
    bRam0000000005c31572 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
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
              (&uStack_38,*(long *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_057cb618);
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        bVar3 = 0;
        iVar6 = 6;
        goto LAB_0326be88;
      }
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar5 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lStack_28 + 0x10),param_2,0);
    } while ((uVar5 & 1) == 0);
    bVar3 = 1;
    iVar6 = 5;
LAB_0326be88:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar1);
    bVar3 = iVar6 == 5 & bVar3;
  }
  return bVar3;
}

