/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayLevelStartAnimationForTopWater
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelStartAnimationForTopWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayLevelStartAnimationForTopWater
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelStartAnimationForTopWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelStartAnimationForTopWater_24960bc
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  
  lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584();
  puVar1 = PTR_DAT_057cc730;
  if (lVar3 == 0) {
    return 0;
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x50);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(0,0);
    }
    lVar4 = *(long *)(lVar3 + 0x80);
    if ((bRam0000000005c28198 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057cc518);
      FUN_012d0dc8(PTR_DAT_057606c8);
      FUN_012d0dc8(PTR_DAT_0578afb0);
      FUN_012d0dc8(PTR_DAT_057bf1f8);
      FUN_012d0dc8(PTR_DAT_057e2918);
      FUN_012d0dc8(PTR_DAT_057cc730);
      bRam0000000005c28198 = 1;
    }
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer___c__DisplayClass48_0___ctor_248a270
                (lVar2,0);
      *(long *)(lVar2 + 0x10) = lVar3;
      FUN_012d0d74((long *)(lVar2 + 0x10),lVar3);
      plVar7 = (long *)(lVar2 + 0x18);
      *plVar7 = lVar4;
      FUN_012d0d74(plVar7,lVar4);
      plVar6 = (long *)(lVar3 + 0xa0);
      if (*plVar6 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
      }
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ApplyConfig_1e9ebb0
                (lVar3,*plVar7);
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(undefined4 *)(lVar3 + 0x48) = 0;
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__UpdateMaterialProperties_1e9e9b0
                (lVar3);
      if (*plVar7 != 0) {
        uVar8 = *(undefined4 *)(*plVar7 + 0x1c);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
        puVar1 = PTR_DAT_057606c8;
        if (lVar3 != 0) {
          DG_Tweening_TweenCallback_float____ctor_341f244
                    (lVar3,lVar2,*(undefined8 *)PTR_DAT_057bf1f8,0);
          lVar3 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,uVar8,lVar3,0);
          *plVar6 = lVar3;
          FUN_012d0d74(plVar6,lVar3);
          lVar4 = *plVar6;
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0578afb0;
          if (lVar3 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,lVar2,*(undefined8 *)PTR_DAT_057e2918,0);
            uVar5 = *(undefined8 *)puVar1;
            if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
              *(long *)(lVar4 + 0x80) = lVar3;
              FUN_012d0d74((long *)(lVar4 + 0x80),lVar3,uVar5);
            }
            return lVar4;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0);
}

