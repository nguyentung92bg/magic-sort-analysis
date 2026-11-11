/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$SetParticle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetParticle (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, int32_t duckType, int32_t bottlesCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$SetParticle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetParticle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, int32_t duckType,
   int32_t bottlesCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetParticle_2759e34
               (long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= param_3 - 1U) {
LAB_02859ec8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)(param_3 - 1U) * 8 + 0x20);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar3 + 0x30);
      FUN_012d0d74((undefined8 *)(param_1 + 0xd0));
      lVar3 = *(long *)(param_1 + 0xa8);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if (uVar1 <= uVar4) goto LAB_02859ec8;
            lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
            if (lVar2 == 0) goto LAB_02859ecc;
            Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseBrokeParticle__SetDuckType_27567e0
                      (lVar2,param_2);
            uVar1 = *(uint *)(lVar3 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)uVar1);
        }
        return;
      }
    }
  }
LAB_02859ecc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

