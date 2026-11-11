/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$SetColorOfWinParticles
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOfWinParticles (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* color, bool isNewParticlesEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$SetColorOfWinParticles
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOfWinParticles
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* color, bool
   isNewParticlesEnabled, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOfWinParticles_2300334
               (long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if ((param_3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) goto LAB_02400430;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar3 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_02400430;
        uStack_28 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar3,0);
        if (param_2 == 0) goto LAB_02400430;
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        UnityEngine_ParticleSystem_MinMaxGradient___ctor_3abd2e8
                  (*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                   *(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c),&uStack_60,0);
        uStack_98 = uStack_58;
        uStack_a0 = uStack_60;
        uStack_88 = uStack_48;
        uStack_90 = uStack_50;
        uStack_78 = uStack_38;
        uStack_80 = uStack_40;
        uStack_70 = uStack_30;
        UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_28,&uStack_a0,0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  else {
    if (param_2 == 0) {
LAB_02400430:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime_2300438
                      (param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x10));
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime_2300438
                      (uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x18));
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime_2300438
                      (uVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x20));
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime_2300438
              (uVar2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x28));
  }
  return;
}

