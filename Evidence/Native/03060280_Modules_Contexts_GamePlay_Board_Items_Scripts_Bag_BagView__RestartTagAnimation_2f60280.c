/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$RestartTagAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__RestartTagAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, bool fromLeft, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$RestartTagAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__RestartTagAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, bool fromLeft, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__RestartTagAnimation_2f60280
               (long param_1,uint param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(param_1 + 0x80);
  if (*plVar6 != 0) {
                    /* try { // try from 030602a8 to 031602ab has its CatchHandler @ 030607a4 */
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if (cRam0000000005c25812 == '\0') {
    FUN_012d0dc8(PTR_DAT_057f4aa8);
    cRam0000000005c25812 = '\x01';
  }
  if (lVar7 != 0) {
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_057f4aa8 + 0xb8);
    UnityEngine_Transform__set_localRotation_4092f3c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar7,0);
    uVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayTagAnimation_2f60324
                      (param_1,param_2 & 1);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03060320 to 03160333 has its CatchHandler @ 030607c4 */
  FUN_012d0ef0();
}

