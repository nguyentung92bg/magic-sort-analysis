/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddToggleItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddToggleItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddToggleItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddToggleItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, bool isOn, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddToggleItem_2f67228
               (long param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar5 = PTR_DAT_05805c10;
  if ((param_2 != 0) && (*(long *)(param_2 + 0xa0) != 0)) {
    fVar16 = *(float *)(*(long *)(param_2 + 0xa0) + 0xcc);
    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar15 = *puVar8;
    uVar14 = puVar8[1];
    uVar13 = puVar8[2];
    if (cRam0000000005c230ac == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230ac = '\x01';
      puVar8 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
    }
    fVar17 = (float)puVar8[6];
    fVar18 = (float)puVar8[7];
    fVar19 = (float)puVar8[8];
    lVar12 = *(long *)(param_1 + 0x28);
    uVar6 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
    if (lVar12 != 0) {
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetToggleItem_23035cc
                        (uVar15,uVar14,uVar13,fVar16 * fVar17,fVar16 * fVar18,fVar16 * fVar19,lVar12
                         ,uVar6,param_2,param_3 & 1,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                (param_2,uVar6,0);
      if ((bRam0000000005c30919 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057c55f8);
        FUN_012d0dc8(PTR_DAT_057ef710);
        bRam0000000005c30919 = 1;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar7 = System_Collections_Generic_List_object___Contains_21fce6c
                          (*(long *)(param_1 + 0x20),uVar6,*(undefined8 *)PTR_DAT_057ef710);
        if ((uVar7 & 1) != 0) {
          return;
        }
        lVar12 = *(long *)(param_1 + 0x20);
        if (lVar12 != 0) {
          lVar9 = *(long *)(lVar12 + 0x10);
          lVar11 = *(long *)PTR_DAT_057c55f8;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar10 = uVar6;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar12,uVar6);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

