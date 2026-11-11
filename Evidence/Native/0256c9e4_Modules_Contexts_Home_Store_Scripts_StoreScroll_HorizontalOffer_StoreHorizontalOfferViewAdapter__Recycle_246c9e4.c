/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$Recycle
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Recycle (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$Recycle
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Recycle
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Recycle_246c9e4
               (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c393c3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ee810,0);
    FUN_012d0dc8(PTR_DAT_057ceb78);
    bRam0000000005c393c3 = 1;
  }
  *(undefined4 *)(lVar1 + 0x28) = 0;
  if (*(char *)(lVar1 + 0x38) != '\0') {
    lVar3 = *(long *)(lVar1 + 0x18);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ee810);
    if ((lVar2 == 0) ||
       (System_Action_Int32Enum__float____ctor_1c4bce4
                  (lVar2,lVar1,*(undefined8 *)PTR_DAT_057ceb78,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__remove_OnDragEnd_40091b4(lVar3,lVar2)
    ;
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}

