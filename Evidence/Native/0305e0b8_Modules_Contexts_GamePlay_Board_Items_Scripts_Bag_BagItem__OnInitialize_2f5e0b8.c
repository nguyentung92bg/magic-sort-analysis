/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__OnInitialize_2f5e0b8(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000005c308e6 & 1) == 0) {
                    /* try { // try from 0305e0d8 to 0315e0df has its CatchHandler @ 0305e508 */
    FUN_012d0dc8(PTR_DAT_057b0b80);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c308e6 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar7 = *(long *)PTR_DAT_057b0b80;
    bVar2 = *(byte *)(lVar7 + 300);
    if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar7)) {
      *(long **)(param_1 + 0x48) = plVar6;
                    /* try { // try from 0305e144 to 0315e14b has its CatchHandler @ 0305e504 */
      if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar7)) goto LAB_0305e174;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar6,lVar7);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_0305e174:
  puVar5 = PTR_DAT_05805bc0;
  FUN_012d0d74();
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  if (lVar7 != 0) {
    System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar7,*(undefined8 *)PTR_DAT_057b99d0)
    ;
    plVar6 = (long *)(param_1 + 0x60);
    *plVar6 = lVar7;
                    /* try { // try from 0305e1b4 to 0315e1b7 has its CatchHandler @ 0305e500 */
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

