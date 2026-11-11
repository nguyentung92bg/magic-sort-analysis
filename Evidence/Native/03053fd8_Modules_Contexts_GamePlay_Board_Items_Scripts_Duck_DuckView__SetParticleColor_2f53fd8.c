/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SetParticleColor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetParticleColor (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorData_o colorData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SetParticleColor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetParticleColor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorData_o colorData, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetParticleColor_2f53fd8
               (long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) goto LAB_03054114;
        lVar1 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_03054118;
        uStack_28 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar1,0);
        UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
                  (&uStack_68,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),0);
        uStack_98 = uStack_60;
        uStack_a0 = uStack_68;
        uStack_88 = uStack_50;
        uStack_90 = uStack_58;
        uStack_78 = uStack_40;
        uStack_80 = uStack_48;
        uStack_70 = uStack_38;
        UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_28,&uStack_a0,0);
        uVar2 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar2);
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
LAB_03054114:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          lVar1 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
          if (lVar1 == 0) goto LAB_03054118;
          uStack_28 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar1,0);
          UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
                    (&uStack_68,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                     *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),0);
          uStack_d8 = uStack_60;
          uStack_e0 = uStack_68;
          uStack_c8 = uStack_50;
          uStack_d0 = uStack_58;
          uStack_b8 = uStack_40;
          uStack_c0 = uStack_48;
          uStack_b0 = uStack_38;
          UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_28,&uStack_e0,0);
          uVar2 = *(uint *)(lVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar2);
      }
      return;
    }
  }
LAB_03054118:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

