/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTrailParticles$$SetStartColor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor (UnityEngine_ParticleSystem_o* particle, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTrailParticles$$SetStartColor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor
   (UnityEngine_ParticleSystem_o* particle, UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__SetStartColor_27480dc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
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
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2c6a9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2c6a9 = 1;
  }
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(param_5,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_48 = UnityEngine_ParticleSystem__get_main_3abc8e0(param_5,0);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
              (&uStack_80,param_1,param_2,param_3,param_4,0);
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

