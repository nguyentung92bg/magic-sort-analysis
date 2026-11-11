/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$PlayRevealParticles
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__PlayRevealParticles (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$PlayRevealParticles
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__PlayRevealParticles
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__PlayRevealParticles_2300778
               (long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) goto LAB_02400888;
        lVar1 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_0240088c;
        uStack_28 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar1,0);
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_40 = 0;
        UnityEngine_ParticleSystem_MinMaxGradient___ctor_3abd2e8
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_70,0);
        uStack_a8 = uStack_68;
        uStack_b0 = uStack_70;
        uStack_98 = uStack_58;
        uStack_a0 = uStack_60;
        uStack_88 = uStack_48;
        uStack_90 = uStack_50;
        uStack_80 = uStack_40;
        UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_28,&uStack_b0,0);
        uVar2 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
                    /* try { // try from 0240082c to 02500883 has its CatchHandler @ 0240082c
                       catch() { ... } // from try @ 0240082c with catch @ 0240082c
                       catch() { ... } // from try @ 024008fc with catch @ 0240082c
                       catch() { ... } // from try @ 0240092c with catch @ 0240082c
                       catch() { ... } // from try @ 024009a0 with catch @ 0240082c */
      } while ((int)uVar4 < (int)uVar2);
    }
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
LAB_02400888:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          lVar1 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
          if (lVar1 == 0) goto LAB_0240088c;
          UnityEngine_ParticleSystem__Play_3abc5c8(lVar1,0);
          uVar2 = *(uint *)(lVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar2);
      }
                    /* try { // try from 02400884 to 025008fb has its CatchHandler @ 024008fc */
      return;
    }
  }
LAB_0240088c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

