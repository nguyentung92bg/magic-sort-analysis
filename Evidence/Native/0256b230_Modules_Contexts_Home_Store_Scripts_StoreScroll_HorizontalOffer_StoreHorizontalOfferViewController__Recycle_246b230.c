/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$Recycle
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__Recycle (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$Recycle
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__Recycle
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__Recycle_246b230
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c2b0fb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_05797748);
    bRam0000000005c2b0fb = 1;
  }
  lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  puVar1 = PTR_DAT_0577f3c8;
  if (lVar2 != 0) {
    UnityEngine_Transform__SetParent_409352c(lVar2,0,0);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar2 != 0) &&
       (System_Action_int____ctor_1646aac(lVar2,param_1,*(undefined8 *)PTR_DAT_05797748,0),
       lVar3 != 0)) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBarIndexClamper__UnsubscribeToIndexChange_400bd08
                (lVar3,lVar2,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x40), lVar2 != 0)) {
        if ((bRam0000000005c393c3 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057ee810,0);
          FUN_012d0dc8(PTR_DAT_057ceb78);
          bRam0000000005c393c3 = 1;
        }
        *(undefined4 *)(lVar2 + 0x28) = 0;
        if (*(char *)(lVar2 + 0x38) != '\0') {
          lVar4 = *(long *)(lVar2 + 0x18);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ee810);
          if ((lVar3 == 0) ||
             (System_Action_Int32Enum__float____ctor_1c4bce4
                        (lVar3,lVar2,*(undefined8 *)PTR_DAT_057ceb78,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__remove_OnDragEnd_40091b4
                    (lVar4,lVar3);
          *(undefined1 *)(lVar2 + 0x38) = 0;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

