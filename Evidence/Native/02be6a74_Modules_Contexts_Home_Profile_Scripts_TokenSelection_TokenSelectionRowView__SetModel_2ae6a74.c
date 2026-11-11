/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$SetModel
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__SetModel (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this, Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowViewModel_o* viewModel, System_String_o* activeTokenId, System_Action_ProfileTokenSprite__o* onTokenSelected, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$SetModel
   void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__SetModel
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this,
   Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowViewModel_o* viewModel,
   System_String_o* activeTokenId, System_Action_ProfileTokenSprite__o* onTokenSelected, const
   MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__SetModel_2ae6a74
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  if ((bRam0000000005c2eb53 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fdb68);
    FUN_012d0dc8(PTR_DAT_057e27b8);
    FUN_012d0dc8(PTR_DAT_0576a568);
    FUN_012d0dc8(PTR_DAT_057cfa60);
    bRam0000000005c2eb53 = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_4);
  puVar3 = PTR_DAT_057cfa60;
  puVar2 = PTR_DAT_0576a568;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x18);
    iVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar7,*(undefined8 *)puVar3);
      if (iVar7 < iVar1) {
        if (((*(long *)(param_2 + 0x10) == 0) ||
            (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_2 + 0x10),iVar7,*(undefined8 *)puVar2), lVar6 == 0))
           || (lVar5 == 0)) break;
        Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__Initialize_2ade584
                  (lVar5,*(undefined8 *)(lVar6 + 0x10),*(undefined1 *)(lVar6 + 0x18));
        if (*(long *)(lVar6 + 0x10) == 0) break;
        uVar4 = System_String__Equals_1ecf130
                          (*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x38),param_3,0);
        Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__SetFrameActive_2ade678
                  (lVar5,uVar4 & 1);
      }
      else {
        if ((lVar5 == 0) ||
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar5,0), lVar5 == 0)) break;
        UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      iVar7 = iVar7 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

