/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$Awake
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__Awake (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$Awake
   void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__Awake
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__Awake_2ae6604
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
  
  if ((bRam0000000005c2eb51 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030d8);
    FUN_012d0dc8(PTR_DAT_057aa520);
    FUN_012d0dc8(PTR_DAT_057bda38);
    FUN_012d0dc8(PTR_DAT_0576ed60);
    FUN_012d0dc8(PTR_DAT_05767c80);
    FUN_012d0dc8(PTR_DAT_0580d958);
    bRam0000000005c2eb51 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar4 = PTR_DAT_0580d958;
  puVar3 = PTR_DAT_058030d8;
  puVar2 = PTR_DAT_057bda38;
  puVar1 = PTR_DAT_057aa520;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 02be6698 to 02ce669f has its CatchHandler @ 02be67b0 */
                    /* try { // try from 02be66a4 to 02ce66ab has its CatchHandler @ 02be67a8 */
                    /* try { // try from 02be66b0 to 02ce66b7 has its CatchHandler @ 02be67ac */
                    /* try { // try from 02be66bc to 02ce66c7 has its CatchHandler @ 02be67a4 */
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_05767c80);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
                    /* try { // try from 02be66d0 to 02ce66db has its CatchHandler @ 02be67a0 */
  lStack_60 = lStack_78;
  do {
                    /* try { // try from 02be66dc to 02ce6783 has its CatchHandler @ 02be6374 */
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_70,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar1);
                    /* try { // try from 02be6784 to 02ce6787 has its CatchHandler @ 02be679c */
                    /* try { // try from 02be6788 to 02ce678b has its CatchHandler @ 02be6374 */
                    /* try { // try from 02be678c to 02ce678f has its CatchHandler @ 02be6798 */
                    /* try { // try from 02be6790 to 02ce6793 has its CatchHandler @ 02be6794 */
                    /* catch() { ... } // from try @ 02be6790 with catch @ 02be6794
                       try { // try from 02be6794 to 02ce67c7 has its CatchHandler @ 02be6374 */
                    /* catch() { ... } // from try @ 02be678c with catch @ 02be6798 */
      return;
    }
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02be6784 with catch @ 02be679c */
      FUN_012d0ef0();
    }
    plVar7 = (long *)(lStack_60 + 0x60);
    lVar8 = *plVar7;
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02be66d0 with catch @ 02be67a0 */
      FUN_012d0ef0();
    }
    System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)puVar4,0);
    lVar6 = System_Delegate__Combine_23e3964(lVar8,lVar6,0);
    if (lVar6 == 0) {
      lVar8 = 0;
      *plVar7 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar3;
      lVar8 = thunk_FUN_01320d5c(lVar6,uVar9);
      if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 02be6698 with catch @ 02be67b0 */
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar6,uVar9);
      }
      *plVar7 = lVar8;
      uVar9 = *(undefined8 *)puVar3;
      lVar8 = thunk_FUN_01320d5c(lVar6,uVar9);
      if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 02be66bc with catch @ 02be67a4 */
                    /* catch() { ... } // from try @ 02be66a4 with catch @ 02be67a8 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02be66b0 with catch @ 02be67ac */
        FUN_012d1288(lVar6,uVar9);
      }
    }
    FUN_012d0d74(plVar7,lVar8);
  } while( true );
}

