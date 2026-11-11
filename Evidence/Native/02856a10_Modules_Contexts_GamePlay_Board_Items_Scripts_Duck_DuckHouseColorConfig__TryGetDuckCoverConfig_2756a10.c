/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseColorConfig$$TryGetDuckCoverConfig
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckCoverConfig (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig_o* __this, int32_t duckType, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCoverData_o* coverData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseColorConfig$$TryGetDuckCoverConfig
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckCoverConfig
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig_o* __this, int32_t
   duckType, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCoverData_o* coverData,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckCoverConfig_2756a10
               (long param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    uVar8 = *(undefined8 *)(lVar4 + 0x38);
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)param_3 = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar8;
    *(undefined8 *)(param_3 + 4) = uVar7;
    FUN_012d0d74(param_3 + 2,0);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x24);
        do {
          uVar2 = *(undefined8 *)((long)puVar6 + 0x14);
          uVar8 = puVar6[1];
          uVar7 = *puVar6;
          uStack_50 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20);
          uStack_54 = (undefined4)((ulong)uVar8 >> 0x20);
          if (*(int *)((long)puVar6 + -4) == param_2) {
            *param_3 = param_2;
            *(undefined8 *)(param_3 + 6) = uVar2;
            *(ulong *)(param_3 + 4) = CONCAT44(uStack_50,uStack_54);
            *(undefined8 *)(param_3 + 3) = uVar8;
            *(undefined8 *)(param_3 + 1) = uVar7;
            FUN_012d0d74(param_3 + 2,0);
            uVar2 = 1;
            goto LAB_02856ae0;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (iVar5 < *(int *)(lVar4 + 0x18));
      }
      uVar2 = 0;
LAB_02856ae0:
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

