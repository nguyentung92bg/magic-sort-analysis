/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$OnDestroy
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__OnDestroy (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$OnDestroy
   void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__OnDestroy
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__OnDestroy_2ae6838
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
                    /* catch() { ... } // from try @ 02be67c8 with catch @ 02be683c
                       try { // try from 02be683c to 02ce6867 has its CatchHandler @ 02be6374 */
                    /* catch() { ... } // from try @ 02be6564 with catch @ 02be6848 */
                    /* catch() { ... } // from try @ 02be6558 with catch @ 02be684c */
                    /* catch() { ... } // from try @ 02be656c with catch @ 02be6850 */
  if ((bRam0000000005c2eb52 & 1) == 0) {
                    /* try { // try from 02be6868 to 02ce686b has its CatchHandler @ 02be68e4 */
    FUN_012d0dc8(PTR_DAT_058030d8);
    FUN_012d0dc8(PTR_DAT_057aa520);
    FUN_012d0dc8(PTR_DAT_057bda38);
    FUN_012d0dc8(PTR_DAT_0576ed60);
    FUN_012d0dc8(PTR_DAT_05767c80);
    FUN_012d0dc8(PTR_DAT_0580d958);
                    /* try { // try from 02be68a8 to 02ce68cf has its CatchHandler @ 02be68f0 */
    bRam0000000005c2eb52 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  puVar4 = PTR_DAT_0580d958;
  puVar3 = PTR_DAT_058030d8;
  puVar2 = PTR_DAT_057bda38;
  puVar1 = PTR_DAT_057aa520;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 02be68d0 to 02ce68db has its CatchHandler @ 02be6374 */
                    /* try { // try from 02be68dc to 02ce68e3 has its CatchHandler @ 02be68f0 */
                    /* catch() { ... } // from try @ 02be6868 with catch @ 02be68e4 */
                    /* catch() { ... } // from try @ 02be6808 with catch @ 02be68f0
                       catch() { ... } // from try @ 02be68a8 with catch @ 02be68f0
                       catch() { ... } // from try @ 02be68dc with catch @ 02be68f0 */
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_05767c80);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_70,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar1);
      return;
    }
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    plVar7 = (long *)(lStack_60 + 0x60);
    lVar8 = *plVar7;
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)puVar4,0);
    lVar6 = System_Delegate__Remove_23e3b70(lVar8,lVar6,0);
    if (lVar6 == 0) {
      lVar8 = 0;
      *plVar7 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar3;
      lVar8 = thunk_FUN_01320d5c(lVar6,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar6,uVar9);
      }
      *plVar7 = lVar8;
      uVar9 = *(undefined8 *)puVar3;
      lVar8 = thunk_FUN_01320d5c(lVar6,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar6,uVar9);
      }
    }
    FUN_012d0d74(plVar7,lVar8);
  } while( true );
}

