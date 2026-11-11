/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferLogger$$Log
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferLogger__Log (System_String_o* Message, System_String_o* filePath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferLogger$$Log
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferLogger__Log
   (System_String_o* Message, System_String_o* filePath, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferLogger__Log_3462c8c
               (long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_05808bd0;
  if ((bRam0000000005c32655 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0);
    FUN_012d0dc8(PTR_DAT_057d8d30);
    FUN_012d0dc8(PTR_DAT_0581bb18);
    bRam0000000005c32655 = 1;
  }
  puVar5 = PTR_DAT_0581bb18;
  puVar3 = PTR_DAT_057d8d30;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar7 = System_IO_Path__GetFileNameWithoutExtension_35797fc(param_2,0);
  lVar12 = *(long *)puVar5;
  lVar10 = *(long *)puVar3;
  lVar6 = lVar7;
  lVar8 = lVar10;
  lVar9 = param_1;
  if (((((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) && (lVar6 = lVar12, lVar7 != 0)) &&
      ((*(int *)(lVar7 + 0x10) != 0 && (lVar8 = lVar7, lVar10 != 0)))) &&
     ((*(int *)(lVar10 + 0x10) != 0 &&
      ((lVar9 = lVar10, param_1 != 0 && (*(int *)(param_1 + 0x10) != 0)))))) {
    lVar6 = thunk_FUN_0131a210(*(int *)(lVar7 + 0x10) + *(int *)(lVar12 + 0x10) +
                               *(int *)(lVar10 + 0x10) + *(int *)(param_1 + 0x10));
    System_String__FillStringChecked_1ed0ed0(lVar6,0,lVar12);
    System_String__FillStringChecked_1ed0ed0(lVar6,*(undefined4 *)(lVar12 + 0x10),lVar7);
    System_String__FillStringChecked_1ed0ed0
              (lVar6,*(int *)(lVar7 + 0x10) + *(int *)(lVar12 + 0x10),lVar10);
    System_String__FillStringChecked_1ed0ed0
              (lVar6,*(int *)(lVar7 + 0x10) + *(int *)(lVar12 + 0x10) + *(int *)(lVar10 + 0x10),
               param_1);
    return lVar6;
  }
  lVar7 = lVar8;
  lVar10 = lVar9;
  if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) && (lVar7 = lVar6, lVar8 != 0)) &&
     (((*(int *)(lVar8 + 0x10) != 0 && (lVar10 = lVar8, lVar9 != 0)) &&
      (*(int *)(lVar9 + 0x10) != 0)))) {
    lVar7 = thunk_FUN_0131a210(*(int *)(lVar8 + 0x10) + *(int *)(lVar6 + 0x10) +
                               *(int *)(lVar9 + 0x10));
    System_String__FillStringChecked_1ed0ed0(lVar7,0,lVar6);
    System_String__FillStringChecked_1ed0ed0(lVar7,*(undefined4 *)(lVar6 + 0x10),lVar8);
    System_String__FillStringChecked_1ed0ed0
              (lVar7,*(int *)(lVar8 + 0x10) + *(int *)(lVar6 + 0x10),lVar9);
    return lVar7;
  }
  if ((bRam0000000005c283d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c283d5 = 1;
  }
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x10) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar11) {
    lVar7 = lVar10;
    if (bVar2) {
      lVar7 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
    }
  }
  else if (!bVar2) {
    if ((lVar7 == 0) || (lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    iVar1 = *(int *)(lVar7 + 0x10);
    lVar6 = thunk_FUN_0131a210(*(int *)(lVar10 + 0x10) + iVar1);
    System_String__FillStringChecked_1ed0ed0(lVar6,0,lVar7);
    System_String__FillStringChecked_1ed0ed0(lVar6,iVar1,lVar10);
    lVar7 = lVar6;
  }
  return lVar7;
}

