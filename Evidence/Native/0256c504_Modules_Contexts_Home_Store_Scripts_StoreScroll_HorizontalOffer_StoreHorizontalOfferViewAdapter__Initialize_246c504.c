/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$Initialize
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Initialize (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o* __this, System_Collections_Generic_List_StoreViewModel__o* viewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$Initialize
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Initialize
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o*
   __this, System_Collections_Generic_List_StoreViewModel__o* viewModels, const MethodInfo* method);
    */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__Initialize_246c504
               (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2b0f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec458);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0577be70);
    bRam0000000005c2b0f3 = 1;
  }
  *(undefined8 *)(param_3 + 0x58) = param_4;
  FUN_012d0d74((undefined8 *)(param_3 + 0x58),param_4);
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar2,*(undefined8 *)PTR_DAT_057ec458), plVar3 != (long *)0x0)) {
    lVar2 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0577be70) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_0256c5f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0577be70,5);
LAB_0256c5f0:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    *(undefined4 *)(param_3 + 0x48) = uVar10;
    *(undefined4 *)(param_3 + 0x4c) = param_2;
    *(undefined4 *)(param_3 + 0x50) = 0;
    if (*(long *)(param_3 + 0x28) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),0,0);
      puVar1 = PTR_DAT_057ee810;
      lVar2 = *(long *)(param_3 + 0x40);
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x30);
        if ((bRam0000000005c393c1 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057ee810,uVar6,0);
          FUN_012d0dc8(PTR_DAT_057ceb78);
          bRam0000000005c393c1 = 1;
        }
        *(undefined8 *)(lVar2 + 0x20) = uVar6;
        FUN_012d0d74((undefined8 *)(lVar2 + 0x20),uVar6);
        lVar9 = *(long *)(lVar2 + 0x18);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar5 != 0) &&
           (System_Action_Int32Enum__float____ctor_1c4bce4
                      (lVar5,lVar2,*(undefined8 *)PTR_DAT_057ceb78,0), lVar9 != 0)) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__add_OnDragEnd_4009104
                    (lVar9,lVar5);
          *(undefined1 *)(lVar2 + 0x38) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

