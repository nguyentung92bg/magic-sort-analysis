/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$Initialize
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__Initialize (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o* __this, System_Collections_Generic_List_StoreViewModel__o* storeViewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$Initialize
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__Initialize
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o*
   __this, System_Collections_Generic_List_StoreViewModel__o* storeViewModels, const MethodInfo*
   method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__Initialize_246afb0
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2b0f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0578b640);
    FUN_012d0dc8(PTR_DAT_05797748);
    bRam0000000005c2b0f8 = 1;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x18);
    Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__InitializeSpecialRewardData_246ca10
              (param_1,param_2);
    Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__UpdateColliderSize_246caac
              (param_1,*(undefined4 *)(param_1 + 0x58));
    Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__UpdateViews_246cb1c
              (param_1,0,0);
    puVar4 = PTR_DAT_0577f3c8;
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Initialize_246c504
                (*(long *)(param_1 + 0x18),param_2);
      lVar7 = *(long *)(param_1 + 0x28);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar5 != 0) &&
         (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_05797748,0),
         lVar7 != 0)) {
        if ((bRam0000000005c393c4 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0577f3c8,lVar5,0);
          bRam0000000005c393c4 = 1;
        }
        plVar6 = (long *)(lVar7 + 0x30);
        lVar5 = System_Delegate__Combine_23e3964(*plVar6,lVar5,0);
        puVar4 = PTR_DAT_0577f3c8;
        if (lVar5 != 0) {
          uVar8 = *(undefined8 *)PTR_DAT_0577f3c8;
          lVar7 = thunk_FUN_01320d5c(lVar5,uVar8);
          if (lVar7 != 0) {
            *plVar6 = lVar7;
            uVar8 = *(undefined8 *)puVar4;
            lVar7 = thunk_FUN_01320d5c(lVar5,uVar8);
            if (lVar7 != 0) goto FUN_012d0d74;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar5,uVar8);
        }
        *plVar6 = 0;
FUN_012d0d74:
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

