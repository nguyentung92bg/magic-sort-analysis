/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$SetupCollectibleItems
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupCollectibleItems (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$SetupCollectibleItems
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupCollectibleItems
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupCollectibleItems_3fa9f4c
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined4 uStack_44;
  
  if ((bRam0000000005c39007 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6158);
    FUN_012d0dc8(PTR_DAT_057add28);
    FUN_012d0dc8(PTR_DAT_057dc308);
    FUN_012d0dc8(PTR_DAT_057c2298);
    bRam0000000005c39007 = 1;
  }
  puVar4 = PTR_DAT_057dc308;
  puVar3 = PTR_DAT_057c2298;
  puVar2 = PTR_DAT_057add28;
  uStack_44 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 0x20), lVar9 != 0)) {
    if (0 < *(int *)(lVar9 + 0x18)) {
      iVar10 = 0;
      do {
        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar10,*(undefined8 *)puVar2);
        if ((lVar5 == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_040aa184;
        uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite_3fa7e80
                          (*(long *)(param_1 + 0x50),*(undefined4 *)(lVar5 + 0x10),
                           *(undefined4 *)(lVar5 + 0x14),*(char *)(lVar5 + 0x20) == '\0',0);
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x38),iVar10,*(undefined8 *)puVar3), lVar7 == 0))
        goto LAB_040aa184;
        UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar7,uVar6,0);
        if (*(long *)(lVar5 + 0x18) == 0) goto LAB_040aa184;
        iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + 0x10);
        if (iVar1 == 1) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_040aa184;
          lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x40),iVar10,*(undefined8 *)puVar3);
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__get_coinCurrencySprite_3faa210
                                (*(long *)(param_1 + 0x50)), lVar7 == 0)) goto LAB_040aa184;
LAB_040aa0fc:
          UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar7,uVar6,0);
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_040aa184;
          plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (*(long *)(param_1 + 0x48),iVar10,*(undefined8 *)puVar4);
          if (*(long *)(lVar5 + 0x18) == 0) goto LAB_040aa184;
          uStack_44 = *(undefined4 *)(*(long *)(lVar5 + 0x18) + 0x14);
          uVar6 = System_Int32__ToString_26c9768(&uStack_44,0);
          if (plVar8 == (long *)0x0) goto LAB_040aa184;
LAB_040aa144:
          (**(code **)(*plVar8 + 0x558))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x560));
        }
        else {
          if (iVar1 == 0x15) {
            if (*(long *)(param_1 + 0x40) != 0) {
              lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*(long *)(param_1 + 0x40),iVar10,*(undefined8 *)puVar3);
              if ((*(long *)(param_1 + 0x50) != 0) &&
                 (uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__get_energyCurrencySprite_3faa188
                                    (*(long *)(param_1 + 0x50)), lVar7 != 0)) goto LAB_040aa0fc;
            }
            goto LAB_040aa184;
          }
          if (iVar1 == 2) {
            if (*(long *)(param_1 + 0x48) != 0) {
              plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (*(long *)(param_1 + 0x48),iVar10,*(undefined8 *)puVar4);
              if ((*(long *)(lVar5 + 0x18) != 0) &&
                 (uVar6 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc
                                    (*(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18),0),
                 plVar8 != (long *)0x0)) goto LAB_040aa144;
            }
            goto LAB_040aa184;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar9 + 0x18));
    }
    return;
  }
LAB_040aa184:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

