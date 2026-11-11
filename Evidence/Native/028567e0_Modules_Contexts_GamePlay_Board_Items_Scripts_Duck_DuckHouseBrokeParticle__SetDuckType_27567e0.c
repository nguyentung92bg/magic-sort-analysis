/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseBrokeParticle$$SetDuckType
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseBrokeParticle__SetDuckType (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseBrokeParticle_o* __this, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseBrokeParticle$$SetDuckType
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseBrokeParticle__SetDuckType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseBrokeParticle_o* __this, int32_t
   duckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseBrokeParticle__SetDuckType_27567e0
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckParticleTextures_2756904
              (*(long *)(param_1 + 0x18),param_2,&uStack_38);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      lVar4 = 4;
      while( true ) {
        uVar5 = (int)lVar4 - 4;
        if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_02856900;
        lVar2 = *(long *)(lVar2 + lVar4 * 8);
        if ((lVar2 == 0) ||
           (uStack_48 = UnityEngine_ParticleSystem__get_textureSheetAnimation_3abc958(lVar2,0),
           lStack_30 == 0)) goto LAB_028568fc;
        if (*(uint *)(lStack_30 + 0x18) <= uVar5) goto LAB_02856900;
        UnityEngine_ParticleSystem_TextureSheetAnimationModule__SetSprite_3abd1a0
                  (&uStack_48,0,*(undefined8 *)(lStack_30 + lVar4 * 8),0);
        lVar2 = *(long *)(param_1 + 0x20);
        lVar4 = lVar4 + 1;
        if (lVar2 == 0) goto LAB_028568fc;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        uStack_40 = UnityEngine_ParticleSystem__get_textureSheetAnimation_3abc958
                              (*(long *)(param_1 + 0x28),0);
        iVar1 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_spriteCount_3abd128
                          (&uStack_40,0);
        if (iVar1 < 1) {
          return;
        }
        uVar3 = 0;
        while (lStack_28 != 0) {
          if (*(uint *)(lStack_28 + 0x18) <= uVar3) {
LAB_02856900:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          UnityEngine_ParticleSystem_TextureSheetAnimationModule__SetSprite_3abd1a0
                    (&uStack_40,uVar3 & 0xffffffff,*(undefined8 *)(lStack_28 + uVar3 * 8 + 0x20),0);
          uVar3 = uVar3 + 1;
          iVar1 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_spriteCount_3abd128
                            (&uStack_40,0);
          if ((long)iVar1 <= (long)uVar3) {
            return;
          }
        }
      }
    }
  }
LAB_028568fc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

