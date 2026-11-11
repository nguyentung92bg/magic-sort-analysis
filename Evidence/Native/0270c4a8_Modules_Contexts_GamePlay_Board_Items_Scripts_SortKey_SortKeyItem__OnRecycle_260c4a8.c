/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__OnRecycle_260c4a8
               (long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b9e2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c2b9e2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  DG_Tweening_DOTween__Kill_1eda9a4(param_1,0,0);
  if (param_1[0xc] != 0) {
    lVar2 = *(long *)(param_1[0xc] + 0x40);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar2,param_1,0);
  }
  param_1[0xd] = 0;
  FUN_012d0d74(param_1 + 0xd,0);
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar1 = PTR_DAT_05805c10;
  lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  (**(code **)(*param_1 + 0x1d8))
            (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
             *(undefined4 *)(lVar2 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
  uVar11 = (ulong)(uint)pfVar4[2];
  uVar9 = (ulong)(uint)(pfVar4[1] * _UNK_04339bec);
  uVar10 = (ulong)(uint)(pfVar4[2] * _UNK_04339bec);
  uVar8 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                    (*pfVar4 * _UNK_04339bec,uVar9,uVar10,0);
  if ((bRam0000000005c3aa8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8,0);
    bRam0000000005c3aa8b = 1;
  }
  if ((param_1[4] == 0) || (plVar7 = *(long **)(param_1[4] + 0x18), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_041ea250;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575a2d8,9);
LAB_041ea250:
                    /* WARNING: Could not recover jumptable at 0x041ea278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(uVar8,uVar9,uVar10,uVar11,plVar7,puVar3[1]);
  return;
}

