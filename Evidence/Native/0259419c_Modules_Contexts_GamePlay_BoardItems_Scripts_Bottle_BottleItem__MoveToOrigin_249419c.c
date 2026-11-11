/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$MoveToOrigin
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveToOrigin (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float duration, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$MoveToOrigin
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveToOrigin
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float duration, float
   delay, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveToOrigin_249419c
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b2c6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057e5fc8);
    FUN_012d0dc8(PTR_DAT_057e8460);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c2b2c6 = 1;
  }
  puVar3 = PTR_DAT_057f03e0;
  puVar1 = PTR_DAT_05770998;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar6 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                    (param_2,uVar5,*(undefined8 *)puVar3);
  uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_3,0);
  Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14(param_3,0);
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                    (uVar5,0,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                    (uVar5,1,*(undefined8 *)puVar1);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar6,uVar5,0);
  puVar2 = PTR_DAT_057e8460;
  lVar7 = *(long *)(param_3 + 0x98);
  if (lVar7 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar8) {
        if (*(long *)(param_3 + 0xe0) == 0) {
          return 0;
        }
        uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItemPart__get_Root_40ea41c
                          (*(long *)(param_3 + 0xe0),0);
        Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                  (param_3,0);
        uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                          (uVar5,0,0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                          (uVar5,1,*(undefined8 *)puVar1);
        uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar6 + 0x130),lVar6,uVar5);
        }
        return lVar6;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar8,*(undefined8 *)puVar2);
      if (lVar7 == 0) break;
      uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(lVar7,0);
      Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14(lVar7,0);
      uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                        (uVar5,0,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                        (uVar5,1,*(undefined8 *)puVar1);
      DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(lVar6,uVar5,0);
      lVar7 = *(long *)(param_3 + 0x98);
      iVar8 = iVar8 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

