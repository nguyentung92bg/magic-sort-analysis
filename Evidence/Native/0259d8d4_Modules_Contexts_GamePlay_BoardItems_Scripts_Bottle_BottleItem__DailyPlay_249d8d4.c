/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$DailyPlay
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DailyPlay (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* color, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* waterItem, int32_t waterHeightToMove, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$DailyPlay
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DailyPlay
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* color,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* waterItem, int32_t
   waterHeightToMove, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DailyPlay_249d8d4
               (undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5,
               int param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar2 = PTR_DAT_057d1ce0;
  if ((*(long *)(param_3 + 0x50) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_3 + 0x50) + 0x60), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a60a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5230);
    FUN_012d0dc8(PTR_DAT_05768d48);
    FUN_012d0dc8(PTR_DAT_057b0a60);
    FUN_012d0dc8(PTR_DAT_057accc8);
    FUN_012d0dc8(PTR_DAT_057db9c8);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577fe10);
    FUN_012d0dc8(PTR_DAT_0575dd98);
    FUN_012d0dc8(PTR_DAT_0577a568);
    FUN_012d0dc8(PTR_DAT_057ee538);
    FUN_012d0dc8(PTR_DAT_057f8660);
    FUN_012d0dc8(PTR_DAT_057d1ce0);
    bRam0000000005c2a60a = 1;
  }
  uStack_80 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_108 = 0;
  lStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  lStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(long *)(lVar7 + 0x10) = lVar11;
    FUN_012d0d74((long *)(lVar7 + 0x10),lVar11);
    plVar12 = (long *)(lVar7 + 0x18);
    *plVar12 = param_5;
    FUN_012d0d74(plVar12,param_5);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__ClearTween_22ff29c
              (lVar11);
    if (*(long *)(lVar11 + 0x18) != 0) {
      lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar11 + 0x18),0);
      if (*plVar12 != 0) {
        uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                           (*plVar12,0);
        if ((*plVar12 != 0) &&
           (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                      (*plVar12,0), lVar8 != 0)) {
          UnityEngine_Transform__set_position_4092ba8(uVar13,lVar8,0);
          if (*(long *)(lVar11 + 0x50) != 0) {
            lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar11 + 0x50),0);
            if (*plVar12 != 0) {
              uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                                 (*plVar12,0);
              if ((*plVar12 != 0) &&
                 (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                            (*plVar12,0), lVar8 != 0)) {
                UnityEngine_Transform__set_position_4092ba8(uVar13,lVar8,0);
                if (*(long *)(lVar11 + 0x40) != 0) {
                  lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar11 + 0x40),0);
                  if (*plVar12 != 0) {
                    uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                                       (*plVar12,0);
                    if ((*plVar12 != 0) &&
                       (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                                  (*plVar12,0), lVar8 != 0)) {
                      param_2 = param_2 + _UNK_0438e158;
                      UnityEngine_Transform__set_position_4092ba8(uVar13,param_2,0,lVar8,0);
                      if (*(long *)(lVar11 + 0x28) != 0) {
                        lVar8 = UnityEngine_Component__get_transform_408b444
                                          (*(long *)(lVar11 + 0x28),0);
                        if (*plVar12 != 0) {
                          uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                                             (*plVar12,0);
                          if ((*plVar12 != 0) &&
                             (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                                        (*plVar12,0), lVar8 != 0)) {
                            UnityEngine_Transform__set_position_4092ba8
                                      (uVar13,param_2 + _UNK_04339be4,0,lVar8,0);
                            puVar5 = PTR_DAT_057f5230;
                            puVar4 = PTR_DAT_057db9c8;
                            puVar2 = PTR_DAT_057b0a60;
                            if (*(long *)(lVar11 + 0x30) != 0) {
                              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                        (&uStack_198,*(long *)(lVar11 + 0x30),
                                         *(undefined8 *)PTR_DAT_057db9c8);
                              uStack_c8 = uStack_190;
                              uStack_d0 = uStack_198;
                              lStack_c0 = lStack_188;
                              while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                       (&uStack_d0,*(undefined8 *)puVar2),
                                    lVar8 = lStack_c0, (uVar9 & 1) != 0) {
                                if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar10 = UnityEngine_Component__GetComponent_object__27205b8
                                                   (lStack_c0,*(undefined8 *)puVar5);
                                if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetEllipseSortOrder_1e9e818
                                                  (*plVar12,0);
                                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                UnityEngine_Renderer__set_sortingOrder_40826fc(lVar10,iVar6 + 1,0);
                                uStack_d8 = UnityEngine_ParticleSystem__get_textureSheetAnimation_3abc958
                                                      (lVar8,0);
                                if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                UnityEngine_ParticleSystem_TextureSheetAnimationModule__SetSprite_3abd1a0
                                          (&uStack_d8,0,*(undefined8 *)(param_4 + 0x80),0);
                              }
                              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                        (&uStack_d0,*(undefined8 *)PTR_DAT_05768d48);
                              if (*(long *)(lVar11 + 0x38) != 0) {
                                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                          (&uStack_198,*(long *)(lVar11 + 0x38),
                                           *(undefined8 *)puVar4);
                                uStack_c8 = uStack_190;
                                uStack_d0 = uStack_198;
                                lStack_c0 = lStack_188;
                                while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                         (&uStack_d0,*(undefined8 *)puVar2),
                                      lVar8 = lStack_c0, puVar3 = PTR_DAT_05768d48, (uVar9 & 1) != 0
                                      ) {
                                  if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  lVar10 = UnityEngine_Component__GetComponent_object__27205b8
                                                     (lStack_c0,*(undefined8 *)puVar5);
                                  if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBelowWaterSortOrder_1e9e7fc
                                                    (*plVar12,0);
                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  UnityEngine_Renderer__set_sortingOrder_40826fc
                                            (lVar10,iVar6 + -4,0);
                                  uStack_e0 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar8,0);
                                  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
                                            (&uStack_198,*(undefined4 *)(param_4 + 0x60),
                                             *(undefined4 *)(param_4 + 100),
                                             *(undefined4 *)(param_4 + 0x68),
                                             *(undefined4 *)(param_4 + 0x6c),0);
                                  uStack_1c8 = uStack_190;
                                  uStack_1d0 = uStack_198;
                                  uStack_1b8 = uStack_180;
                                  lStack_1c0 = lStack_188;
                                  uStack_1a8 = uStack_170;
                                  uStack_1b0 = uStack_178;
                                  uStack_1a0 = uStack_168;
                                  UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84
                                            (&uStack_e0,&uStack_1d0,0);
                                }
                                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                          (&uStack_d0,*(undefined8 *)PTR_DAT_05768d48);
                                if (*(long *)(lVar11 + 0x20) != 0) {
                                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                            (&uStack_198,*(long *)(lVar11 + 0x20),
                                             *(undefined8 *)puVar4);
                                  uStack_c8 = uStack_190;
                                  uStack_d0 = uStack_198;
                                  lStack_c0 = lStack_188;
                                  while( true ) {
                                    uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                      (&uStack_d0,*(undefined8 *)puVar2);
                                    lVar8 = lStack_c0;
                                    if ((uVar9 & 1) == 0) break;
                                    if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_012d0ef0();
                                    }
                                    uStack_128 = UnityEngine_ParticleSystem__get_emission_3abc908
                                                           (lStack_c0,0);
                                    UnityEngine_ParticleSystem_EmissionModule__GetBurst_3abcf3c
                                              (&uStack_198,&uStack_128,0,0);
                                    uStack_118 = uStack_190;
                                    uStack_120 = uStack_198;
                                    uStack_108 = uStack_180;
                                    lStack_110 = lStack_188;
                                    uStack_f8 = uStack_170;
                                    uStack_100 = uStack_178;
                                    uStack_f0 = uStack_168;
                                    lVar10 = *(long *)(lVar11 + 0x48);
                                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_012d0ef0();
                                    }
                                    iVar6 = *(int *)(lVar10 + 0x24);
                                    if (param_6 <= *(int *)(lVar10 + 0x24)) {
                                      iVar6 = param_6;
                                    }
                                    iVar1 = *(int *)(lVar10 + 0x20);
                                    if (*(int *)(lVar10 + 0x20) <= param_6) {
                                      iVar1 = iVar6;
                                    }
                                    UnityEngine_ParticleSystem_Burst__set_cycleCount_3abd248
                                              (&uStack_120,iVar1,0);
                                    uStack_128 = UnityEngine_ParticleSystem__get_emission_3abc908
                                                           (lVar8,0);
                                    uStack_1e8 = uStack_f8;
                                    uStack_1f0 = uStack_100;
                                    uStack_208 = uStack_118;
                                    uStack_210 = uStack_120;
                                    uStack_1f8 = uStack_108;
                                    lStack_200 = lStack_110;
                                    uStack_1e0 = uStack_f0;
                                    UnityEngine_ParticleSystem_EmissionModule__SetBurst_3abce94
                                              (&uStack_128,0,&uStack_210,0);
                                  }
                                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                            (&uStack_d0,*(undefined8 *)puVar3);
                                  if (*(long *)(lVar11 + 0x58) != 0) {
                                    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                              (&uStack_198,*(long *)(lVar11 + 0x58),
                                               *(undefined8 *)puVar4);
                                    uStack_c8 = uStack_190;
                                    uStack_d0 = uStack_198;
                                    lStack_c0 = lStack_188;
                                    while (uVar9 = 
                                                  System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                            (&uStack_d0,*(undefined8 *)puVar2),
                                          lVar8 = lStack_c0, (uVar9 & 1) != 0) {
                                      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_012d0ef0();
                                      }
                                      uStack_128 = UnityEngine_ParticleSystem__get_emission_3abc908
                                                             (lStack_c0,0);
                                      UnityEngine_ParticleSystem_EmissionModule__GetBurst_3abcf3c
                                                (&uStack_198,&uStack_128,0,0);
                                      uStack_158 = uStack_190;
                                      uStack_160 = uStack_198;
                                      uStack_148 = uStack_180;
                                      lStack_150 = lStack_188;
                                      uStack_138 = uStack_170;
                                      uStack_140 = uStack_178;
                                      uStack_130 = uStack_168;
                                      lVar10 = *(long *)(lVar11 + 0x48);
                                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_012d0ef0();
                                      }
                                      iVar6 = *(int *)(lVar10 + 0x2c);
                                      if (param_6 <= *(int *)(lVar10 + 0x2c)) {
                                        iVar6 = param_6;
                                      }
                                      iVar1 = *(int *)(lVar10 + 0x28);
                                      if (*(int *)(lVar10 + 0x28) <= param_6) {
                                        iVar1 = iVar6;
                                      }
                                      UnityEngine_ParticleSystem_Burst__set_cycleCount_3abd248
                                                (&uStack_160,iVar1,0);
                                      uStack_128 = UnityEngine_ParticleSystem__get_emission_3abc908
                                                             (lVar8,0);
                                      uStack_228 = uStack_138;
                                      uStack_230 = uStack_140;
                                      uStack_248 = uStack_158;
                                      uStack_250 = uStack_160;
                                      uStack_238 = uStack_148;
                                      lStack_240 = lStack_150;
                                      uStack_220 = uStack_130;
                                      UnityEngine_ParticleSystem_EmissionModule__SetBurst_3abce94
                                                (&uStack_128,0,&uStack_250,0);
                                    }
                                    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                              (&uStack_d0,*(undefined8 *)puVar3);
                                    if (*(long *)(lVar11 + 0x40) != 0) {
                                      uStack_128 = UnityEngine_ParticleSystem__get_emission_3abc908
                                                             (*(long *)(lVar11 + 0x40),0);
                                      UnityEngine_ParticleSystem_EmissionModule__GetBurst_3abcf3c
                                                (&uStack_198,&uStack_128,0,0);
                                      uStack_a8 = uStack_190;
                                      uStack_b0 = uStack_198;
                                      uStack_98 = uStack_180;
                                      lStack_a0 = lStack_188;
                                      uStack_88 = uStack_170;
                                      uStack_90 = uStack_178;
                                      uStack_80 = uStack_168;
                                      if (*(long *)(lVar11 + 0x48) != 0) {
                                        UnityEngine_ParticleSystem_Burst__set_cycleCount_3abd248
                                                  (&uStack_b0,
                                                   *(undefined4 *)(*(long *)(lVar11 + 0x48) + 0x30),
                                                   0);
                                        puVar5 = PTR_DAT_057cc518;
                                        puVar4 = PTR_DAT_0577fe10;
                                        puVar2 = PTR_DAT_057606c8;
                                        if (*(long *)(lVar11 + 0x40) != 0) {
                                          uStack_128 = 
                                                  UnityEngine_ParticleSystem__get_emission_3abc908
                                                            (*(long *)(lVar11 + 0x40),0);
                                          uStack_288 = uStack_a8;
                                          uStack_290 = uStack_b0;
                                          uStack_278 = uStack_98;
                                          lStack_280 = lStack_a0;
                                          uStack_268 = uStack_88;
                                          uStack_270 = uStack_90;
                                          uStack_260 = uStack_80;
                                          UnityEngine_ParticleSystem_EmissionModule__SetBurst_3abce94
                                                    (&uStack_128,0,&uStack_290,0);
                                          if (*(long *)(lVar11 + 0x50) != 0) {
                                            UnityEngine_ParticleSystem__Play_3abc5c8
                                                      (*(long *)(lVar11 + 0x50),0);
                                            if (*(long *)(lVar11 + 0x40) != 0) {
                                              UnityEngine_ParticleSystem__Play_3abc5c8
                                                        (*(long *)(lVar11 + 0x40),0);
                                              if (*(long *)(lVar11 + 0x18) != 0) {
                                                UnityEngine_ParticleSystem__Play_3abc5c8
                                                          (*(long *)(lVar11 + 0x18),0);
                                                if (*(long *)(lVar11 + 0x28) != 0) {
                                                  UnityEngine_ParticleSystem__Play_3abc5c8
                                                            (*(long *)(lVar11 + 0x28),0);
                                                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                                                  if (lVar8 != 0) {
                                                    DG_Tweening_TweenCallback_float____ctor_341f244
                                                              (lVar8,lVar7,
                                                               *(undefined8 *)PTR_DAT_0575dd98,0);
                                                    uVar13 = DG_Tweening_DOVirtual__Float_1edbb8c
                                                                       (0,0x3f800000,0x3f800000,
                                                                        lVar8,0);
                                                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar8 != 0) {
                                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                                (lVar8,lVar7,
                                                                 *(undefined8 *)PTR_DAT_0577a568,0);
                                                      uVar13 = 
                                                  DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                                            (uVar13,lVar8,*(undefined8 *)puVar4);
                                                  *(undefined8 *)(lVar11 + 0x60) = uVar13;
                                                  FUN_012d0d74();
                                                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                                                  if (lVar8 != 0) {
                                                    DG_Tweening_TweenCallback_float____ctor_341f244
                                                              (lVar8,lVar7,
                                                               *(undefined8 *)PTR_DAT_057ee538,0);
                                                    uVar13 = DG_Tweening_DOVirtual__Float_1edbb8c
                                                                       (0,0x3f800000,_UNK_04359fc0,
                                                                        lVar8,0);
                                                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar8 != 0) {
                                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                                (lVar8,lVar7,
                                                                 *(undefined8 *)PTR_DAT_057f8660,0);
                                                      uVar13 = 
                                                  DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                                            (uVar13,lVar8,*(undefined8 *)puVar4);
                                                  *(undefined8 *)(lVar11 + 0x68) = uVar13;
                                                  FUN_012d0d74((undefined8 *)(lVar11 + 0x68),uVar13)
                                                  ;
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
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

