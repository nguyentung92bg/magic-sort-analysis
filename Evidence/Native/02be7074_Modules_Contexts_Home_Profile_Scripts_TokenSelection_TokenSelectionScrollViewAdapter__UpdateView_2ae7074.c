/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$UpdateView
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__UpdateView (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__UpdateView
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this,
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject*
   viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__UpdateView_2ae7074
               (long param_1,long *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  puVar3 = PTR_DAT_0579ad98;
  if ((bRam0000000005c2eb59 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ad98);
    FUN_012d0dc8(PTR_DAT_057cd4f8);
    FUN_012d0dc8(PTR_DAT_05810848);
    FUN_012d0dc8(PTR_DAT_057e2590);
    bRam0000000005c2eb59 = 1;
  }
                    /* try { // try from 02be70d8 to 02ce7197 has its CatchHandler @ 02be70d8
                       catch() { ... } // from try @ 02be70d8 with catch @ 02be70d8
                       catch() { ... } // from try @ 02be7210 with catch @ 02be70d8
                       catch() { ... } // from try @ 02be72e8 with catch @ 02be70d8
                       catch() { ... } // from try @ 02be73a8 with catch @ 02be70d8 */
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar7 == 0) ||
     (System_Action_object____ctor_1647468(lVar7,param_1,*(undefined8 *)PTR_DAT_057e2590,0),
     param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_05810848 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar2) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05810848)) {
                    /* try { // try from 02be7198 to 02ce719f has its CatchHandler @ 02be7324 */
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  if (param_3 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_057cd4f8 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_057cd4f8))
    {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02be71a4 to 02ce71ab has its CatchHandler @ 02be7314 */
      FUN_012d1288(param_3);
    }
  }
  if ((bRam0000000005c2eb53 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fdb68);
    FUN_012d0dc8(PTR_DAT_057e27b8);
    FUN_012d0dc8(PTR_DAT_0576a568);
    FUN_012d0dc8(PTR_DAT_057cfa60);
    bRam0000000005c2eb53 = 1;
  }
  param_2[7] = lVar7;
  FUN_012d0d74(param_2 + 7,lVar7);
  puVar4 = PTR_DAT_057cfa60;
  puVar3 = PTR_DAT_0576a568;
  if (((param_3 != (long *)0x0) && (param_3[2] != 0)) && (lVar7 = param_2[6], lVar7 != 0)) {
    iVar1 = *(int *)(param_3[2] + 0x18);
    iVar9 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar9) {
        return;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar9,*(undefined8 *)puVar4);
      if (iVar9 < iVar1) {
        if (((param_3[2] == 0) ||
            (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (param_3[2],iVar9,*(undefined8 *)puVar3), lVar6 == 0)) ||
           (lVar7 == 0)) break;
        Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__Initialize_2ade584
                  (lVar7,*(undefined8 *)(lVar6 + 0x10),*(undefined1 *)(lVar6 + 0x18));
        if (*(long *)(lVar6 + 0x10) == 0) break;
        uVar5 = System_String__Equals_1ecf130
                          (*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x38),uVar8,0);
        Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSpriteSelectionFrame__SetFrameActive_2ade678
                  (lVar7,uVar5 & 1);
      }
      else {
        if ((lVar7 == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject_408b480(lVar7,0), lVar7 == 0)) break;
        UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
      }
      lVar7 = param_2[6];
      iVar9 = iVar9 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

