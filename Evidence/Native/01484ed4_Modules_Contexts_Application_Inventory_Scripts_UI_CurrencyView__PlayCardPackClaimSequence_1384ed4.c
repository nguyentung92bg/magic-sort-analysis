/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayCardPackClaimSequence
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayCardPackClaimSequence (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Transform_o* duplicatedStarsMoveTransform, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayCardPackClaimSequence
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayCardPackClaimSequence
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this,
   UnityEngine_Transform_o* duplicatedStarsMoveTransform, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayCardPackClaimSequence_1384ed4
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    if ((bRam0000000005c35a23 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057815e0,param_2,0);
      bRam0000000005c35a23 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar4 = Modules_Contexts_Home_Collection_Scripts_UI_CollectionPackOpeningAnimationHandler__ScaleOutDuplicatedCards_3a6a364
                      (lVar2,param_2);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
    return uVar3;
  }
  return 0;
}

