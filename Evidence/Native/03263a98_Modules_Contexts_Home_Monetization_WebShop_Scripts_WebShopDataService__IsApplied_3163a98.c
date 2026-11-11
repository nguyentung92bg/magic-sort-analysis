/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$IsApplied
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsApplied (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, System_String_o* purchaseId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$IsApplied
   bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsApplied
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this,
   System_String_o* purchaseId, const MethodInfo* method); */

byte Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsApplied_3163a98
               (long param_1,undefined8 param_2)

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
  
  if ((bRam0000000005c31530 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05787e30);
    FUN_012d0dc8(PTR_DAT_0580f420);
    FUN_012d0dc8(PTR_DAT_057e7710);
    FUN_012d0dc8(PTR_DAT_057efd20);
    bRam0000000005c31530 = 1;
  }
  puVar2 = PTR_DAT_0580f420;
  puVar1 = PTR_DAT_05787e30;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar3 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    bVar3 = 0;
    if (lVar4 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_38,lVar4,*(undefined8 *)PTR_DAT_057efd20);
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_38,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) {
          bVar3 = 0;
          iVar6 = 7;
          goto LAB_03263b74;
        }
        if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar5 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lStack_28 + 0x10),param_2,0);
      } while ((uVar5 & 1) == 0);
      bVar3 = 1;
      iVar6 = 6;
LAB_03263b74:
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar1);
      bVar3 = iVar6 == 6 & bVar3;
    }
  }
  return bVar3;
}

