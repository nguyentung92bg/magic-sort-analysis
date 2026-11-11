/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseCompleteView$$SetDuckType
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView__SetDuckType (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView_o* __this, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseCompleteView$$SetDuckType
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView__SetDuckType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView_o* __this, int32_t
   duckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView__SetDuckType_2756bf0
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  if ((bRam0000000005c2c727 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_05768d48);
    FUN_012d0dc8(PTR_DAT_057b0a60);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_057accc8);
    FUN_012d0dc8(PTR_DAT_057db9c8);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    bRam0000000005c2c727 = 1;
  }
  uStack_90 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_118 = 0;
  lStack_110 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_120 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckColor_2756b10
              (*(long *)(param_1 + 0x40),param_2,&uStack_e0);
    puVar6 = PTR_DAT_057fbae0;
    puVar5 = PTR_DAT_057db9c8;
    puVar4 = PTR_DAT_057b0a60;
    puVar3 = PTR_DAT_0579f3e8;
    puVar2 = PTR_DAT_057936b8;
    puVar1 = PTR_DAT_05768d48;
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_158,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0579f3e8);
      uVar10 = uStack_d0 & 0xffffffff;
      uVar8 = uStack_d8._4_4_;
      uVar11 = uStack_d8 & 0xffffffff;
      uVar7 = uStack_e0._4_4_;
      uStack_f8 = uStack_150;
      uStack_100 = uStack_158;
      lStack_f0 = lStack_148;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_100,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
        if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_SpriteRenderer__set_color_4095de0(uVar7,uVar11,uVar8,uVar10,lStack_f0,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_100,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x20) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_158,*(long *)(param_1 + 0x20),*(undefined8 *)puVar3);
        uVar10 = uStack_c0 & 0xffffffff;
        uVar8 = uStack_c8._4_4_;
        uVar11 = uStack_c8 & 0xffffffff;
        uVar7 = uStack_d0._4_4_;
        uStack_f8 = uStack_150;
        uStack_100 = uStack_158;
        lStack_f0 = lStack_148;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_100,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
          if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          UnityEngine_SpriteRenderer__set_color_4095de0(uVar7,uVar11,uVar8,uVar10,lStack_f0,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_100,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x28) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_158,*(long *)(param_1 + 0x28),*(undefined8 *)puVar5);
          uVar10 = uStack_d8 & 0xffffffff;
          uVar7 = uStack_e0._4_4_;
          uVar11 = uStack_d0 & 0xffffffff;
          uVar8 = uStack_d8._4_4_;
          uStack_118 = uStack_150;
          uStack_120 = uStack_158;
          lStack_110 = lStack_148;
          while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_120,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
            if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uStack_e8 = UnityEngine_ParticleSystem__get_main_3abc8e0(lStack_110,0);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
                      (&uStack_158,uVar7,uVar10,uVar8,uVar11,0);
            uStack_178 = uStack_140;
            lStack_180 = lStack_148;
            uStack_168 = uStack_130;
            uStack_170 = uStack_138;
            uStack_188 = uStack_150;
            uStack_190 = uStack_158;
            uStack_160 = uStack_128;
            UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_e8,&uStack_190,0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_120,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x30) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_158,*(long *)(param_1 + 0x30),*(undefined8 *)puVar5);
            uVar10 = uStack_c8 & 0xffffffff;
            uVar7 = uStack_d0._4_4_;
            uVar11 = uStack_c0 & 0xffffffff;
            uVar8 = uStack_c8._4_4_;
            uStack_118 = uStack_150;
            uStack_120 = uStack_158;
            lStack_110 = lStack_148;
            while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_120,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
              if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uStack_e8 = UnityEngine_ParticleSystem__get_main_3abc8e0(lStack_110,0);
              UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
                        (&uStack_158,uVar7,uVar10,uVar8,uVar11,0);
              uStack_1b8 = uStack_140;
              lStack_1c0 = lStack_148;
              uStack_1a8 = uStack_130;
              uStack_1b0 = uStack_138;
              uStack_1c8 = uStack_150;
              uStack_1d0 = uStack_158;
              uStack_1a0 = uStack_128;
              UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84
                        (&uStack_e8,&uStack_1d0,0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_120,*(undefined8 *)puVar1);
            if (*(long *)(param_1 + 0x38) != 0) {
              UnityEngine_SpriteRenderer__set_color_4095de0
                        (uStack_a0._4_4_,uStack_98 & 0xffffffff,uStack_98._4_4_,uStack_90,
                         *(long *)(param_1 + 0x38),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

