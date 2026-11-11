/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$CanMerge
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$CanMerge
   bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3abf3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581acb8);
                    /* try { // try from 042108e8 to 0431090f has its CatchHandler @ 04210b28 */
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3abf3 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 04210910 to 04310957 has its CatchHandler @ 04210b4c */
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__IsEmpty_410d724();
        if ((uVar2 & 1) != 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__IsEmpty_410d724
                            ();
          if ((uVar2 & 1) != 0) {
            return 0;
          }
                    /* try { // try from 04210964 to 043109a3 has its CatchHandler @ 04210b44 */
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__CanMerge_410e390
                              ();
            if ((uVar2 & 1) == 0) {
              return 0;
            }
            if (*(long *)(param_1 + 0x18) != 0) {
              uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__CanMerge_410e390
                                ();
              if ((uVar2 & 1) == 0) {
                return 0;
              }
              if (*(long *)(param_1 + 0x10) != 0) {
                plVar3 = (long *)Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__GetMergeableItem_410ebec
                                           ();
                if (*(long *)(param_1 + 0x18) != 0) {
                  lVar4 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__GetMergeableItem_410ebec
                                    (*(long *)(param_1 + 0x18));
                    /* try { // try from 042109a4 to 043109eb has its CatchHandler @ 04210b48 */
                  if (plVar3 == (long *)0x0) {
                    return 0;
                  }
                  if (lVar4 == 0) {
                    return 0;
                  }
                  lVar6 = *plVar3;
                  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar2 != 0) {
                    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0581acb8) {
                        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                        goto LAB_04210a18;
                      }
                      uVar2 = uVar2 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0581acb8,4);
                    /* try { // try from 042109f4 to 04310a33 has its CatchHandler @ 04210b40 */
LAB_04210a18:
                    /* WARNING: Could not recover jumptable at 0x04210a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (*(code *)*puVar5)(plVar3,lVar4,puVar5[1]);
                  return uVar8;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return 0;
}

