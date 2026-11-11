/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$UpdateView
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView_246c85c
               (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000005c2b0f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058111d0);
    FUN_012d0dc8(PTR_DAT_057abce0);
    bRam0000000005c2b0f6 = 1;
  }
  puVar2 = PTR_DAT_058111d0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *(long *)PTR_DAT_058111d0;
  if ((*(byte *)(lVar3 + 300) <= *(byte *)(*param_2 + 300)) &&
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 300) * 8 + -8) == lVar3)) {
    if ((*(byte *)(lVar3 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 300) * 8 + -8) == lVar3)) {
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_057abce0 + 300);
        if ((*(byte *)(*param_3 + 300) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_057abce0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(param_3);
        }
      }
      Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreBaseView__SetModel_24657a4
                (param_2,param_3);
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        param_2[0x13] = _UNK_04321d60;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d1288(param_2);
}

