/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBlocker
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Infrastructure_Common_Scripts_Component_ABlockerItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBlocker
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Infrastructure_Common_Scripts_Component_ABlockerItem_o* item, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((bRam0000000005c30919 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c55f8);
    FUN_012d0dc8(PTR_DAT_057ef710);
    bRam0000000005c30919 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = System_Collections_Generic_List_object___Contains_21fce6c
                      (*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_057ef710);
    if ((uVar5 & 1) != 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)PTR_DAT_057c55f8;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = param_2;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar6,param_2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

