/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferDataService$$OverwriteModelFromSync
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__OverwriteModelFromSync (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferDataService$$OverwriteModelFromSync
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__OverwriteModelFromSync
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService_o*
   __this, System_String_o* data, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__OverwriteModelFromSync_20ab5fc
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_058031d8;
  if ((bRam0000000005c294ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576bad0);
    FUN_012d0dc8(PTR_DAT_057a7e70);
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c294ef = 1;
  }
  puVar1 = PTR_DAT_057a7e70;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                    (param_2,*(undefined8 *)puVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar3;
    FUN_012d0d74(puVar4,uVar3);
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0576bad0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_021ab6ec;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0576bad0,0);
LAB_021ab6ec:
                    /* WARNING: Could not recover jumptable at 0x021ab704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

