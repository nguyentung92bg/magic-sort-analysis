/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$Initialize
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__Initialize (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$Initialize
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__Initialize
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__Initialize_3595540
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((bRam0000000005c32e5c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05810978);
    FUN_012d0dc8(PTR_DAT_057fbdc0);
    FUN_012d0dc8(PTR_DAT_057d5760);
    FUN_012d0dc8(PTR_DAT_057975f8);
    FUN_012d0dc8(PTR_DAT_057fbd48);
    FUN_012d0dc8(PTR_DAT_0575dfb0);
    FUN_012d0dc8(PTR_DAT_0575a510);
    FUN_012d0dc8(PTR_DAT_057d4890);
    FUN_012d0dc8(PTR_DAT_057e7400);
    FUN_012d0dc8(PTR_DAT_057a9910);
    FUN_012d0dc8(PTR_DAT_05819d70);
    FUN_012d0dc8(PTR_DAT_0579ddc0);
    FUN_012d0dc8(PTR_DAT_057bed00);
    FUN_012d0dc8(PTR_DAT_05793060);
    FUN_012d0dc8(PTR_DAT_057cbc68);
    FUN_012d0dc8(PTR_DAT_057a61e0);
    bRam0000000005c32e5c = 1;
  }
  puVar4 = PTR_DAT_0575a510;
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Infrastructure_DI_CustomUpdater__AddIntervalUpdate_3d24448
              (0x43960000,*(long *)(param_1 + 0x40),param_1,0);
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_0575dfb0;
    if (lVar10 != 0) {
      Modules_Infrastructure_Common_Scripts_SecondTimer___ctor_40e4c9c(lVar10,uVar12,0);
      *(long *)(param_1 + 0x48) = lVar10;
      FUN_012d0d74((long *)(param_1 + 0x48),lVar10);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar9 = PTR_DAT_05819d70;
      puVar8 = PTR_DAT_057fbdc0;
      puVar7 = PTR_DAT_057fbd48;
      puVar6 = PTR_DAT_057e7400;
      puVar5 = PTR_DAT_057d4890;
      puVar4 = PTR_DAT_057a9910;
      if (lVar10 != 0) {
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor_36d0988
                  (lVar10,*(undefined8 *)PTR_DAT_057d5760);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add_36d1408
                  (lVar10,1,*(undefined8 *)puVar6,*(undefined8 *)puVar8);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add_36d1408
                  (lVar10,2,*(undefined8 *)puVar5,*(undefined8 *)puVar8);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add_36d1408
                  (lVar10,3,*(undefined8 *)puVar9,*(undefined8 *)puVar8);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add_36d1408
                  (lVar10,4,*(undefined8 *)puVar4,*(undefined8 *)puVar8);
        *(long *)(param_1 + 0x60) = lVar10;
        FUN_012d0d74((long *)(param_1 + 0x60),lVar10);
        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar7);
        puVar9 = PTR_DAT_05810978;
        puVar8 = PTR_DAT_057cbc68;
        puVar7 = PTR_DAT_057bed00;
        puVar6 = PTR_DAT_057a61e0;
        puVar5 = PTR_DAT_0579ddc0;
        puVar4 = PTR_DAT_05793060;
        if (lVar10 != 0) {
          System_Collections_Generic_Dictionary_int__object____ctor_3975ffc
                    (lVar10,*(undefined8 *)PTR_DAT_057975f8);
          System_Collections_Generic_Dictionary_int__object___Add_3976a7c
                    (lVar10,0,*(undefined8 *)puVar5,*(undefined8 *)puVar9);
          System_Collections_Generic_Dictionary_int__object___Add_3976a7c
                    (lVar10,1,*(undefined8 *)puVar8,*(undefined8 *)puVar9);
          System_Collections_Generic_Dictionary_int__object___Add_3976a7c
                    (lVar10,2,*(undefined8 *)puVar7,*(undefined8 *)puVar9);
          System_Collections_Generic_Dictionary_int__object___Add_3976a7c
                    (lVar10,3,*(undefined8 *)puVar4,*(undefined8 *)puVar9);
          System_Collections_Generic_Dictionary_int__object___Add_3976a7c
                    (lVar10,4,*(undefined8 *)puVar6,*(undefined8 *)puVar9);
          plVar11 = (long *)(param_1 + 0x68);
          *plVar11 = lVar10;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

