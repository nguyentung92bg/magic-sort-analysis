/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Spawn
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Spawn (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Spawn
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Spawn
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Spawn_2f5fbd4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000005c308ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c308ed = 1;
  }
  plVar6 = (long *)param_1[3];
  if (cRam0000000005c230a9 == '\0') {
                    /* try { // try from 0305fc1c to 0315fc23 has its CatchHandler @ 0306008c */
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar6;
  lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 0305fc48 to 0315fc4f has its CatchHandler @ 030600a0 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  uVar9 = *(undefined4 *)(lVar4 + 0xc);
  uVar8 = *(undefined4 *)(lVar4 + 0x10);
  uVar7 = *(undefined4 *)(lVar4 + 0x14);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_0305fca0;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,7);
LAB_0305fca0:
                    /* try { // try from 0305fca4 to 0315fcab has its CatchHandler @ 03060088 */
  (*(code *)*puVar1)(uVar9,uVar8,uVar7,plVar6,puVar1[1]);
                    /* WARNING: Could not recover jumptable at 0x0305fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  return;
}

