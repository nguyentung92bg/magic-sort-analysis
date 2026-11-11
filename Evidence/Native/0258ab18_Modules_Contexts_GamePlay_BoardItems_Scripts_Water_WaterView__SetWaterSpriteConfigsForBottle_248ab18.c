/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetWaterSpriteConfigsForBottle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetWaterSpriteConfigsForBottle (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetWaterSpriteConfigsForBottle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetWaterSpriteConfigsForBottle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t bottleHeight,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetWaterSpriteConfigsForBottle_248ab18
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar1 = PTR_DAT_057e6a20;
  if ((bRam0000000005c2b27b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bca20);
    FUN_012d0dc8(PTR_DAT_0579a7b8);
    FUN_012d0dc8(PTR_DAT_0579efc8);
    FUN_012d0dc8(PTR_DAT_057c65d0);
    FUN_012d0dc8(PTR_DAT_057e6a20);
    bRam0000000005c2b27b = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x18);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0579efc8);
      if ((lVar3 != 0) &&
         (System_Predicate_object____ctor_30fcf30(lVar3,lVar2,*(undefined8 *)PTR_DAT_057c65d0,0),
         lVar6 != 0)) {
        lVar2 = System_Collections_Generic_List_object___Find_21fd130
                          (lVar6,lVar3,*(undefined8 *)PTR_DAT_057bca20);
        if (lVar2 == 0) {
          if ((*(long *)(param_1 + 0x68) == 0) ||
             (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x18), lVar2 == 0)) goto LAB_0258ad9c;
          lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar2,0,*(undefined8 *)PTR_DAT_0579a7b8);
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0),
           lVar2 != 0)) {
          uStack_40 = *(undefined4 *)(lVar2 + 0x34);
          uStack_48 = *(undefined8 *)(lVar2 + 0x2c);
          uStack_50 = *(undefined8 *)(lVar2 + 0x24);
          uStack_58 = *(undefined8 *)(lVar2 + 0x1c);
          uStack_60 = *(undefined8 *)(lVar2 + 0x14);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                    (uVar4,uVar4,&uStack_60);
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
            uStack_78 = *(undefined8 *)(lVar2 + 0x50);
            uStack_80 = *(undefined8 *)(lVar2 + 0x48);
            uStack_88 = *(undefined8 *)(lVar2 + 0x40);
            uStack_90 = *(undefined8 *)(lVar2 + 0x38);
            uStack_70 = *(undefined4 *)(lVar2 + 0x58);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                      (uVar4,uVar4,&uStack_90);
            if (*(long *)(param_1 + 0x30) != 0) {
              uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x30),0);
              uStack_a8 = *(undefined8 *)(lVar2 + 0x74);
              uStack_b0 = *(undefined8 *)(lVar2 + 0x6c);
              uStack_b8 = *(undefined8 *)(lVar2 + 100);
              uStack_c0 = *(undefined8 *)(lVar2 + 0x5c);
              uStack_a0 = *(undefined4 *)(lVar2 + 0x7c);
              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                        (uVar4,uVar4,&uStack_c0);
              if (*(long *)(param_1 + 0x50) != 0) {
                uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x50),0);
                uStack_e8 = *(undefined8 *)(lVar2 + 0x88);
                uStack_f0 = *(undefined8 *)(lVar2 + 0x80);
                uStack_d8 = *(undefined8 *)(lVar2 + 0x98);
                uStack_e0 = *(undefined8 *)(lVar2 + 0x90);
                uStack_d0 = *(undefined4 *)(lVar2 + 0xa0);
                Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                          (uVar4,uVar4,&uStack_f0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x38),0);
                  uStack_108 = *(undefined8 *)(lVar2 + 0xbc);
                  uStack_110 = *(undefined8 *)(lVar2 + 0xb4);
                  uStack_118 = *(undefined8 *)(lVar2 + 0xac);
                  uStack_120 = *(undefined8 *)(lVar2 + 0xa4);
                  uStack_100 = *(undefined4 *)(lVar2 + 0xc4);
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                            (uVar4,uVar4,&uStack_120);
                  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                                    (param_1);
                  if ((uVar5 & 1) != 0) {
                    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0258ad9c;
                    uVar4 = UnityEngine_Component__get_transform_408b444
                                      (*(long *)(param_1 + 0x40),0);
                    uStack_148 = *(undefined8 *)(lVar2 + 0xac);
                    uStack_150 = *(undefined8 *)(lVar2 + 0xa4);
                    uStack_138 = *(undefined8 *)(lVar2 + 0xbc);
                    uStack_140 = *(undefined8 *)(lVar2 + 0xb4);
                    uStack_130 = *(undefined4 *)(lVar2 + 0xc4);
                    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                              (uVar4,uVar4,&uStack_150);
                  }
                  if (*(long *)(param_1 + 0x48) != 0) {
                    uVar4 = UnityEngine_Component__get_transform_408b444
                                      (*(long *)(param_1 + 0x48),0);
                    uStack_168 = *(undefined8 *)(lVar2 + 0xe0);
                    uStack_170 = *(undefined8 *)(lVar2 + 0xd8);
                    uStack_178 = *(undefined8 *)(lVar2 + 0xd0);
                    uStack_180 = *(undefined8 *)(lVar2 + 200);
                    uStack_160 = *(undefined4 *)(lVar2 + 0xe8);
                    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
                              (uVar4,uVar4,&uStack_180);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0258ad9c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

