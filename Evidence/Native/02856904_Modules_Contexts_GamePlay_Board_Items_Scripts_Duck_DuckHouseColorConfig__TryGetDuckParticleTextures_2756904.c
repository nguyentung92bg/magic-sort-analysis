/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseColorConfig$$TryGetDuckParticleTextures
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckParticleTextures (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig_o* __this, int32_t duckType, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseParticleTextureData_o* textureData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseColorConfig$$TryGetDuckParticleTextures
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckParticleTextures
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig_o* __this, int32_t
   duckType, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseParticleTextureData_o*
   textureData, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckParticleTextures_2756904
               (long param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(param_3 + 2) = uVar8;
    *(undefined8 *)param_3 = uVar3;
    FUN_012d0d74(param_3 + 2,0);
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar6 = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x24);
        do {
          iVar1 = *(int *)(puVar7 + 2);
          uVar8 = puVar7[1];
          uVar3 = *puVar7;
          if (*(int *)((long)puVar7 + -4) == param_2) {
            *param_3 = param_2;
            param_3[5] = iVar1;
            *(undefined8 *)(param_3 + 3) = uVar8;
            *(undefined8 *)(param_3 + 1) = uVar3;
            FUN_012d0d74(param_3 + 2,0);
            uVar3 = 1;
            goto LAB_028569d8;
          }
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 3;
        } while (iVar6 < *(int *)(lVar5 + 0x18));
      }
      uVar3 = 0;
LAB_028569d8:
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

