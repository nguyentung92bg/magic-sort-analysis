/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$AddOutItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddOutItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem_o* generatorItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$AddOutItem
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddOutItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem_o* generatorItem,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddOutItem_3ddfa24
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((bRam0000000005c37e5c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057887b0);
    bRam0000000005c37e5c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)PTR_DAT_057887b0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *puVar7 = param_2;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x03edfacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar5,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

