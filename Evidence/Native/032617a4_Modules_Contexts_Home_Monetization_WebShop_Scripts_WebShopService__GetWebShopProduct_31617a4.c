/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$GetWebShopProduct
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$GetWebShopProduct
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o*
   productId, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct_31617a4
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c31573 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7410);
                    /* try { // try from 032617dc to 033617fb has its CatchHandler @ 03261838 */
    FUN_012d0dc8(PTR_DAT_057d56c0);
    FUN_012d0dc8(PTR_DAT_057726b8);
    FUN_012d0dc8(PTR_DAT_057cb618);
    bRam0000000005c31573 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
                    /* try { // try from 0326180c to 0336180f has its CatchHandler @ 03261834 */
  lVar3 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                    (param_1);
  puVar2 = PTR_DAT_057d56c0;
  puVar1 = PTR_DAT_057c7410;
                    /* try { // try from 03261810 to 0336184f has its CatchHandler @ 0326178c */
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = 0;
  if (*(long *)(lVar3 + 0x18) != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0326180c with catch @ 03261834
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 032617dc with catch @ 03261838
                        */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(lVar3 + 0x18),*(undefined8 *)PTR_DAT_057cb618);
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      lVar6 = lStack_38;
      if ((uVar4 & 1) == 0) {
        lVar6 = 0;
        iVar5 = 6;
        goto LAB_0326187c;
      }
                    /* try { // try from 03261850 to 03361867 has its CatchHandler @ 032618f0 */
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar4 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lStack_38 + 0x10),param_2,0);
                    /* try { // try from 03261868 to 033618df has its CatchHandler @ 0326178c */
    } while ((uVar4 & 1) == 0);
    iVar5 = 5;
LAB_0326187c:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar1);
    if (iVar5 != 5) {
      lVar6 = 0;
    }
  }
  return lVar6;
}

