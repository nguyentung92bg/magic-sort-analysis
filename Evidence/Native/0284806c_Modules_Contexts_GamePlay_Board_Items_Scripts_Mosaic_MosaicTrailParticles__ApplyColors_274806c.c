/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTrailParticles$$ApplyColors
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__ApplyColors (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles_o* __this, Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailColors_o* colors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTrailParticles$$ApplyColors
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__ApplyColors
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles_o* __this,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailColors_o* colors, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__ApplyColors_274806c
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor_27480dc
            (*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
             *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
             *(undefined8 *)(param_1 + 0x10));
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor_27480dc
            (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
             *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
             *(undefined8 *)(param_1 + 0x18));
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor_27480dc
            (*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
             *(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
             *(undefined8 *)(param_1 + 0x20));
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor_27480dc
            (*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
             *(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c),
             *(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR_DAT_0576c200;
  lVar2 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  if ((bRam0000000005c2c6a9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2c6a9 = 1;
  }
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_48 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar2,0);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
              (&uStack_80,uVar4,uVar5,uVar6,uVar7,0);
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_90 = uStack_50;
    UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_48,&uStack_c0,0);
  }
  return;
}

