/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$IsTargetMovable
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetMovable (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$IsTargetMovable
   bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetMovable
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetMovable_4110a88
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
                    /* try { // try from 04210a88 to 04310a9b has its CatchHandler @ 04210360 */
  puVar1 = PTR_DAT_0576c200;
                    /* try { // try from 04210a9c to 04310aab has its CatchHandler @ 04210b30 */
  if ((bRam0000000005c3abf4 & 1) == 0) {
                    /* try { // try from 04210ab0 to 04310ab7 has its CatchHandler @ 04210b50 */
    FUN_012d0dc8(PTR_DAT_057f7f10);
                    /* try { // try from 04210ab8 to 04310abb has its CatchHandler @ 04210b1c */
                    /* try { // try from 04210abc to 04310abf has its CatchHandler @ 04210b54 */
                    /* try { // try from 04210ac0 to 04310ac3 has its CatchHandler @ 04210b28 */
    FUN_012d0dc8(PTR_DAT_0576d610);
                    /* try { // try from 04210ac4 to 04310ac7 has its CatchHandler @ 04210b4c */
                    /* try { // try from 04210ac8 to 04310acb has its CatchHandler @ 04210b44 */
                    /* try { // try from 04210acc to 04310acf has its CatchHandler @ 04210b48 */
    FUN_012d0dc8(PTR_DAT_05772e50);
                    /* try { // try from 04210ad0 to 04310ad3 has its CatchHandler @ 04210b40 */
                    /* try { // try from 04210ad4 to 04310adf has its CatchHandler @ 04210b50 */
    FUN_012d0dc8(PTR_DAT_05818d08);
                    /* try { // try from 04210ae0 to 04310aeb has its CatchHandler @ 04210b28 */
    FUN_012d0dc8(PTR_DAT_0576c200);
                    /* try { // try from 04210aec to 04310af7 has its CatchHandler @ 04210b4c */
    bRam0000000005c3abf4 = 1;
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
                    /* try { // try from 04210af8 to 04310b03 has its CatchHandler @ 04210b44 */
  uStack_38 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 04210b04 to 04310b0f has its CatchHandler @ 04210b48 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 04210b10 to 04310b1b has its CatchHandler @ 04210b40 */
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar6,0,0);
                    /* catch() { ... } // from try @ 04210ab8 with catch @ 04210b1c */
  if ((uVar3 & 1) != 0) {
    return false;
  }
                    /* catch() { ... } // from try @ 04210a34 with catch @ 04210b20 */
                    /* catch() { ... } // from try @ 04210870 with catch @ 04210b24 */
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 042108e8 with catch @ 04210b28
                       catch() { ... } // from try @ 04210ac0 with catch @ 04210b28
                       catch() { ... } // from try @ 04210ae0 with catch @ 04210b28 */
    uVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__IsEmpty_410d724();
    puVar2 = PTR_DAT_057f7f10;
    puVar1 = PTR_DAT_0576d610;
                    /* catch() { ... } // from try @ 04210874 with catch @ 04210b2c */
    if ((uVar3 & 1) != 0) {
      return false;
    }
                    /* try { // try from 04210b38 to 04310b3b has its CatchHandler @ 04210c0c */
                    /* try { // try from 04210b3c to 04310b6f has its CatchHandler @ 04210360 */
                    /* catch() { ... } // from try @ 042109f4 with catch @ 04210b40
                       catch() { ... } // from try @ 04210ad0 with catch @ 04210b40
                       catch() { ... } // from try @ 04210b10 with catch @ 04210b40 */
                    /* catch() { ... } // from try @ 04210964 with catch @ 04210b44
                       catch() { ... } // from try @ 04210ac8 with catch @ 04210b44
                       catch() { ... } // from try @ 04210af8 with catch @ 04210b44 */
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0xa0), lVar4 != 0)) {
                    /* catch() { ... } // from try @ 042109a4 with catch @ 04210b48
                       catch() { ... } // from try @ 04210acc with catch @ 04210b48
                       catch() { ... } // from try @ 04210b04 with catch @ 04210b48 */
                    /* catch() { ... } // from try @ 04210910 with catch @ 04210b4c
                       catch() { ... } // from try @ 04210ac4 with catch @ 04210b4c
                       catch() { ... } // from try @ 04210aec with catch @ 04210b4c */
                    /* catch() { ... } // from try @ 04210890 with catch @ 04210b50
                       catch() { ... } // from try @ 04210ab0 with catch @ 04210b50
                       catch() { ... } // from try @ 04210ad4 with catch @ 04210b50 */
                    /* catch() { ... } // from try @ 04210a44 with catch @ 04210b54
                       catch() { ... } // from try @ 04210abc with catch @ 04210b54 */
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_38,lVar4,*(undefined8 *)PTR_DAT_05818d08);
      do {
                    /* try { // try from 04210b70 to 04310b87 has its CatchHandler @ 04210bfc */
        uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_38,*(undefined8 *)puVar1);
        if ((uVar3 & 1) == 0) {
          iVar5 = 7;
          goto LAB_04210ba0;
        }
        if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* try { // try from 04210b88 to 04310beb has its CatchHandler @ 04210360 */
        uVar3 = (**(code **)(*plStack_28 + 0x1c8))(plStack_28,*(undefined8 *)(*plStack_28 + 0x1d0));
      } while ((uVar3 & 1) != 0);
      iVar5 = 6;
LAB_04210ba0:
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar2);
      return iVar5 != 6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

