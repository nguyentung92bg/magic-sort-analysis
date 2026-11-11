/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$SetupProgressItems
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupProgressItems (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$SetupProgressItems
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupProgressItems
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupProgressItems_3fa9e44
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam0000000005c39006 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6158);
    FUN_012d0dc8(PTR_DAT_057add28);
    FUN_012d0dc8(PTR_DAT_057c2298);
    bRam0000000005c39006 = 1;
  }
  puVar2 = PTR_DAT_057c2298;
  puVar1 = PTR_DAT_057add28;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 0x18), lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar6 = 0;
      do {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,iVar6,*(undefined8 *)puVar1);
        if ((lVar3 == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_040a9f48;
        uVar4 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite_3fa7e80
                          (*(long *)(param_1 + 0x50),*(undefined4 *)(lVar3 + 0x10),
                           *(undefined4 *)(lVar3 + 0x14),*(char *)(lVar3 + 0x20) == '\0',0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x28),iVar6,*(undefined8 *)puVar2), lVar3 == 0))
        goto LAB_040a9f48;
        UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar3,uVar4,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar5 + 0x18));
    }
    return;
  }
LAB_040a9f48:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

