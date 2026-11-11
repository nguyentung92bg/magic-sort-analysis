/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$UpdateView
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__UpdateView (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__UpdateView
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this,
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__UpdateView_2ae6f5c
               (long param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((bRam0000000005c2eb58 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ad98);
    FUN_012d0dc8(PTR_DAT_057d3e90);
    FUN_012d0dc8(PTR_DAT_05810848);
    FUN_012d0dc8(PTR_DAT_057e2590);
    bRam0000000005c2eb58 = 1;
  }
  puVar3 = PTR_DAT_0579ad98;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)PTR_DAT_057d3e90);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar8 != 0) &&
       (System_Action_object____ctor_1647468(lVar8,param_1,*(undefined8 *)PTR_DAT_057e2590,0),
       param_2 != (long *)0x0)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_05810848 + 300);
      if ((*(byte *)(*param_2 + 300) < bVar2) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05810848)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(param_2);
      }
      if ((bRam0000000005c2eb53 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057fdb68);
        FUN_012d0dc8(PTR_DAT_057e27b8);
        FUN_012d0dc8(PTR_DAT_0576a568);
        FUN_012d0dc8(PTR_DAT_057cfa60);
        bRam0000000005c2eb53 = 1;
      }
      param_2[7] = lVar8;
      FUN_012d0d74(param_2 + 7,lVar8);
      puVar4 = PTR_DAT_057cfa60;
      puVar3 = PTR_DAT_0576a568;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) && (lVar8 = param_2[6], lVar8 != 0)) {
        iVar1 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
        iVar10 = 0;
        do {
          if (*(int *)(lVar8 + 0x18) <= iVar10) {
            return;
          }
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar8,iVar10,*(undefined8 *)puVar4);
          if (iVar10 < iVar1) {
            if (((*(long *)(lVar7 + 0x10) == 0) ||
                (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(lVar7 + 0x10),iVar10,*(undefined8 *)puVar3),
                lVar6 == 0)) || (lVar8 == 0)) break;
            Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__Initialize_2ade584
                      (lVar8,*(undefined8 *)(lVar6 + 0x10),*(undefined1 *)(lVar6 + 0x18));
            if (*(long *)(lVar6 + 0x10) == 0) break;
            uVar5 = System_String__Equals_1ecf130
                              (*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x38),uVar9,0);
            Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__SetFrameActive_2ade678
                      (lVar8,uVar5 & 1);
          }
          else {
            if ((lVar8 == 0) ||
               (lVar8 = UnityEngine_Component__get_gameObject_408b480(lVar8,0), lVar8 == 0)) break;
            UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
          }
          lVar8 = param_2[6];
          iVar10 = iVar10 + 1;
        } while (lVar8 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

