/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$Awake
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__Awake (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$Awake
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__Awake
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__Awake_298ac58
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
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8ac0c with catch @ 02a8ac70
                       try { // try from 02a8ac70 to 02b8ac87 has its CatchHandler @ 02a8abb8 */
  if ((bRam0000000005c2d7bf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1aa8);
                    /* try { // try from 02a8ac88 to 02b8ac9f has its CatchHandler @ 02a8ad14 */
    FUN_012d0dc8(PTR_DAT_05807e10);
    FUN_012d0dc8(PTR_DAT_0575d018);
                    /* try { // try from 02a8aca0 to 02b8ad03 has its CatchHandler @ 02a8abb8 */
    FUN_012d0dc8(PTR_DAT_057a43d8);
    bRam0000000005c2d7bf = 1;
  }
  puVar3 = PTR_DAT_057a43d8;
  puVar2 = PTR_DAT_057a1aa8;
  puVar1 = PTR_DAT_0575d018;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      plVar6 = (long *)(lVar4 + 0x50);
      lVar7 = *plVar6;
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 02a8ad04 to 02b8ad13 has its CatchHandler @ 02a8ad14 */
      if (lVar4 == 0) break;
                    /* catch() { ... } // from try @ 02a8ac88 with catch @ 02a8ad14
                       catch() { ... } // from try @ 02a8ad04 with catch @ 02a8ad14 */
                    /* try { // try from 02a8ad18 to 02b8ad1b has its CatchHandler @ 02a8ad24 */
      System_Action_object____ctor_1647468(lVar4,param_1,*(undefined8 *)puVar3,0);
                    /* try { // try from 02a8ad1c to 02b8ad27 has its CatchHandler @ 02a8abb8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a8ad18 with catch @ 02a8ad24
                        */
      lVar4 = System_Delegate__Combine_23e3964(lVar7,lVar4,0);
      if (lVar4 == 0) {
        lVar7 = 0;
        *plVar6 = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar2;
        lVar7 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar7 == 0) {
LAB_02a8ad9c:
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar4,uVar8);
        }
        *plVar6 = lVar7;
        uVar8 = *(undefined8 *)puVar2;
        lVar7 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar7 == 0) goto LAB_02a8ad9c;
      }
      FUN_012d0d74(plVar6,lVar7);
      lVar4 = *(long *)(param_1 + 0x18);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

