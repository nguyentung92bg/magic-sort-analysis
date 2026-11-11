/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$SerializeModelForSync
System_String_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SerializeModelForSync (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03636f8c) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$SerializeModelForSync
   System_String_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SerializeModelForSync
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SerializeModelForSync_3593f54
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  
  if ((bRam0000000005c32e4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c32e4d = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_058031d8;
  if ((bRam0000000005c32b8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8,0);
    bRam0000000005c32b8b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_058031d8;
  if ((bRam0000000005c32b90 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c32b90 = 1;
  }
  plVar4 = (long *)Newtonsoft_Json_JsonSerializer__CreateDefault_3536d7c(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_05779a08;
  if ((bRam0000000005c32b93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057eed48);
    FUN_012d0dc8(PTR_DAT_05779a08);
    FUN_012d0dc8(PTR_DAT_057e1128);
    bRam0000000005c32b93 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057e1128;
  puVar1 = PTR_DAT_0579d5c0;
  if (lVar5 != 0) {
    System_Text_StringBuilder___ctor_1e4b230(lVar5,0x100,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
    plVar7 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057eed48;
    if (plVar7 != (long *)0x0) {
      System_IO_StringWriter___ctor_35726fc(plVar7,lVar5,uVar6,0);
      plVar8 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_058165e8;
      if (plVar8 != (long *)0x0) {
        Newtonsoft_Json_JsonTextWriter___ctor_1ce885c(plVar8,plVar7,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar3 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
        Newtonsoft_Json_JsonWriter__set_Formatting_1a1678c(plVar8,uVar3,0);
        (**(code **)(*plVar4 + 0x568))(plVar4,plVar8,uVar12,0,*(undefined8 *)(*plVar4 + 0x570));
        lVar5 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03636f54;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,0);
LAB_03636f54:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* WARNING: Could not recover jumptable at 0x03636f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

