/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$Initialize
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__Initialize (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$Initialize
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__Initialize
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__Initialize_31631fc
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c31527 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f0100);
    FUN_012d0dc8(PTR_DAT_05768ca8);
    bRam0000000005c31527 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057f0100) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_03263294;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057f0100,1);
LAB_03263294:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05768ca8);
      if (lVar2 == 0) goto LAB_032632e8;
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataModel___ctor_3162ffc();
    }
    if (param_1 != 0) {
      *(long *)(param_1 + 0x18) = lVar2;
      FUN_012d0d74((long *)(param_1 + 0x18),lVar2);
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
  }
LAB_032632e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

