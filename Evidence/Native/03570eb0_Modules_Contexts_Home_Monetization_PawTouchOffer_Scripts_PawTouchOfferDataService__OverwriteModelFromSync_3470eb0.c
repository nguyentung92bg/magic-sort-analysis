/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$OverwriteModelFromSync
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__OverwriteModelFromSync (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$OverwriteModelFromSync
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__OverwriteModelFromSync
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this,
   System_String_o* data, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__OverwriteModelFromSync_3470eb0
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_058031d8;
  if ((bRam0000000005c326ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f3da8);
    FUN_012d0dc8(PTR_DAT_0579b998);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057cd758);
    bRam0000000005c326ed = 1;
  }
  puVar1 = PTR_DAT_0579b998;
  lVar7 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                    (param_2,*(undefined8 *)puVar1);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 0x18);
    *puVar8 = uVar3;
    FUN_012d0d74(puVar8,uVar3);
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0x18);
      if (*plVar9 == 0) {
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cd758);
        if (lVar7 == 0) goto LAB_0357100c;
        System_Object___ctor_23dfe5c(lVar7,0);
        *plVar9 = lVar7;
        FUN_012d0d74(plVar9,lVar7);
        lVar7 = *(long *)(param_1 + 0x18);
      }
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057f3da8) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03570ff0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057f3da8,0);
LAB_03570ff0:
                    /* WARNING: Could not recover jumptable at 0x03571008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar8)(plVar9,lVar7,puVar8[1]);
        return;
      }
    }
  }
LAB_0357100c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

