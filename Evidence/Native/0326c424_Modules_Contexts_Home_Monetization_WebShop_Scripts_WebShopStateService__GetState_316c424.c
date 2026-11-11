/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopStateService$$GetState
int32_t Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__GetState (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopStateService$$GetState
   int32_t Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__GetState
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__GetState_316c424
          (long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam0000000005c31588 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c31588 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8();
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x18);
      Modules_Infrastructure_Utils_TimeProvider__get_UtcNow_3de72e4(0);
      if (lVar2 != 0) {
        if ((*(char *)(lVar2 + 0x10) == '\0') || (*(long *)(lVar2 + 0x18) == 0)) {
          uVar4 = 0;
        }
        else {
          plVar9 = *(long **)(param_1 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_0326c578;
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0326c4fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_0326c4fc:
          iVar1 = (*(code *)*puVar3)(plVar9,puVar3[1]);
          if (iVar1 < *(int *)(lVar2 + 0x14)) {
            uVar4 = 1;
          }
          else if (*(char *)(lVar2 + 0x28) == '\0') {
            uVar4 = 4;
          }
          else {
            if (0 < *(int *)(lVar2 + 0x3c)) {
              if (lVar5 == 0) goto LAB_0326c578;
              if (*(int *)(lVar2 + 0x3c) <= *(int *)(lVar5 + 0x10)) {
                return 2;
              }
            }
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_0326c578;
            uVar7 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsTemporarilyDisabled_3163cc8
                              ();
            uVar4 = 3;
            if ((uVar7 & 1) == 0) {
              uVar4 = 4;
            }
          }
        }
        return uVar4;
      }
    }
  }
LAB_0326c578:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

