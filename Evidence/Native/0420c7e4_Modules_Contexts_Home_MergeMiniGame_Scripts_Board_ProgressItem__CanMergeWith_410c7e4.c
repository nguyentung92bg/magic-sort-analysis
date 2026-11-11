/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$CanMergeWith
bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__CanMergeWith (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_IMergeable_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$CanMergeWith
   bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__CanMergeWith
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_IMergeable_o* item, const MethodInfo* method);
    */

bool Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__CanMergeWith_410c7e4
               (long *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((bRam0000000005c3abcc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581acb8);
    bRam0000000005c3abcc = 1;
  }
  puVar1 = PTR_DAT_0581acb8;
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar2 = false;
  if (((param_1 != param_2) && (param_2 != (long *)0x0)) && (*(char *)(param_1[0xe] + 0x1c) == '\0')
     ) {
    lVar6 = *param_2;
    lVar7 = param_1[0x12];
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0581acb8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0420c890;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(param_2,*(long *)PTR_DAT_0581acb8,0);
LAB_0420c890:
    iVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if ((int)lVar7 == iVar3) {
      lVar7 = *param_2;
      iVar3 = *(int *)((long)param_1 + 0x94);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0420c900;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(param_2,*(long *)puVar1,2);
LAB_0420c900:
      iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
      bVar2 = iVar3 == iVar4;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

