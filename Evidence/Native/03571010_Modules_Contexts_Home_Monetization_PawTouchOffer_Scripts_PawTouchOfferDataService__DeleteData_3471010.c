/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$DeleteData
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__DeleteData (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$DeleteData
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__DeleteData
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__DeleteData_3471010
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_057d0df0;
  if ((bRam0000000005c326ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f3da8);
    FUN_012d0dc8(PTR_DAT_057d0df0);
    FUN_012d0dc8(PTR_DAT_057e6920);
    FUN_012d0dc8(PTR_DAT_057cd758);
    bRam0000000005c326ee = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057e6920;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057cd758;
    if (lVar3 != 0) {
      System_Object___ctor_23dfe5c(lVar3,0);
      *(long *)(lVar2 + 0x10) = lVar3;
      FUN_012d0d74((long *)(lVar2 + 0x10),lVar3);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        System_Object___ctor_23dfe5c(lVar3,0);
        *(long *)(lVar2 + 0x18) = lVar3;
        FUN_012d0d74((long *)(lVar2 + 0x18),lVar3);
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 != (long *)0x0) {
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057f3da8) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03571140;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057f3da8,0);
LAB_03571140:
                    /* WARNING: Could not recover jumptable at 0x03571158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar4)(plVar7,lVar2,puVar4[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

