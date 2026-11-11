/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$OnDestroy
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__OnDestroy (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$OnDestroy
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__OnDestroy
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__OnDestroy_298ada8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2d7c0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1aa8);
    FUN_012d0dc8(PTR_DAT_05807e10);
    FUN_012d0dc8(PTR_DAT_0575d018);
    FUN_012d0dc8(PTR_DAT_057a43d8);
    bRam0000000005c2d7c0 = 1;
  }
  puVar3 = PTR_DAT_057a43d8;
  puVar2 = PTR_DAT_057a1aa8;
  puVar1 = PTR_DAT_0575d018;
  lVar4 = *(long *)(param_1 + 0x18);
                    /* try { // try from 02a8ae08 to 02b8ae57 has its CatchHandler @ 02a8ae08
                       catch() { ... } // from try @ 02a8ae08 with catch @ 02a8ae08
                       catch() { ... } // from try @ 02a8ae9c with catch @ 02a8ae08
                       catch() { ... } // from try @ 02a8aed4 with catch @ 02a8ae08
                       catch() { ... } // from try @ 02a8af04 with catch @ 02a8ae08
                       catch() { ... } // from try @ 02a8af78 with catch @ 02a8ae08 */
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8ae58 with catch @ 02a8aed4
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02a8aec8 with catch @ 02a8aed4
                       try { // try from 02a8aed4 to 02b8aeeb has its CatchHandler @ 02a8ae08 */
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      plVar6 = (long *)(lVar4 + 0x50);
      lVar7 = *plVar6;
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
                    /* try { // try from 02a8ae58 to 02b8ae9b has its CatchHandler @ 02a8aed4 */
      System_Action_object____ctor_1647468(lVar4,param_1,*(undefined8 *)puVar3,0);
      lVar4 = System_Delegate__Remove_23e3b70(lVar7,lVar4,0);
      if (lVar4 == 0) {
        lVar7 = 0;
        *plVar6 = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar2;
        lVar7 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar7 == 0) {
LAB_02a8aeec:
                    /* try { // try from 02a8aeec to 02b8af03 has its CatchHandler @ 02a8af70 */
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar4,uVar8);
        }
        *plVar6 = lVar7;
        uVar8 = *(undefined8 *)puVar2;
                    /* try { // try from 02a8ae9c to 02b8aec7 has its CatchHandler @ 02a8ae08 */
        lVar7 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar7 == 0) goto LAB_02a8aeec;
      }
      FUN_012d0d74(plVar6,lVar7);
      lVar4 = *(long *)(param_1 + 0x18);
                    /* try { // try from 02a8aec8 to 02b8aed3 has its CatchHandler @ 02a8aed4 */
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

