/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$Recycle
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Recycle (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$Recycle
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Recycle
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Recycle_358ff18
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam0000000005c32e24 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057c1488);
    FUN_012d0dc8(PTR_DAT_057ad868);
    FUN_012d0dc8(PTR_DAT_0575f210);
    FUN_012d0dc8(PTR_DAT_05780dd8);
    FUN_012d0dc8(PTR_DAT_057aff58);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c32e24 = 1;
  }
  puVar5 = PTR_DAT_057c1488;
  puVar4 = PTR_DAT_057ad868;
  puVar3 = PTR_DAT_057815e0;
  puVar2 = PTR_DAT_0576c200;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_057aff58);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    plStack_50 = plStack_68;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar4), plVar6 = plStack_50,
          (uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = UnityEngine_Object__op_Equality_407f288(plVar6,0,0);
      if ((uVar7 & 1) == 0) {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar8 = plVar6[0x12];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = UnityEngine_Object__op_Inequality_408e110(lVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if (plVar6[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__StopShine_1381984
                    (plVar6[0x12],0);
        }
        (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar5);
    lVar8 = *(long *)(param_1 + 0x50);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      DG_Tweening_DOTween__Kill_1eda9a4(param_1,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

