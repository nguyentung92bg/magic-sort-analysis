/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$<PlayEnterAnimation>b__16_0
void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView___PlayEnterAnimation_b__16_0 (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$<PlayEnterAnimation>b__16_0
   void 
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView___PlayEnterAnimation_b__16_0
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView___PlayEnterAnimation_b__16_0_214b38c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if ((bRam0000000005c29b53 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05768d48);
    FUN_012d0dc8(PTR_DAT_057b0a60);
    FUN_012d0dc8(PTR_DAT_057accc8);
    FUN_012d0dc8(PTR_DAT_057db9c8);
    bRam0000000005c29b53 = 1;
  }
  puVar2 = PTR_DAT_057b0a60;
  puVar1 = PTR_DAT_05768d48;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_60,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057db9c8);
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_30 = lStack_50;
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_40,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (lStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uStack_48 = UnityEngine_ParticleSystem__get_emission_3abc908(lStack_30,0);
      UnityEngine_ParticleSystem_EmissionModule__set_enabled_3abce0c(&uStack_48,1,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_40,*(undefined8 *)puVar1);
    lVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      lVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0
                  (*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                   *(undefined4 *)(param_1 + 0xa0),lVar4,0);
        lVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar4 != 0) {
          lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                     *(undefined4 *)(lVar5 + 0x14),lVar4,0);
          lVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 != 0) {
            UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                      (*(float *)(lVar5 + 0x18) * _UNK_04339bec,
                       *(float *)(lVar5 + 0x1c) * _UNK_04339bec,
                       *(float *)(lVar5 + 0x20) * _UNK_04339bec,0);
            if (lVar4 != 0) {
              UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                UnityEngine_SpriteRenderer__set_color_4095de0
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(param_1 + 0x20),0);
                if (*(long *)(param_1 + 0x48) != 0) {
                  UnityEngine_SpriteRenderer__set_color_4095de0
                            (*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
                             *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                             *(long *)(param_1 + 0x48),0);
                  if (*(long *)(param_1 + 0x50) != 0) {
                    UnityEngine_SpriteRenderer__set_color_4095de0
                              (*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                               *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                               *(long *)(param_1 + 0x50),0);
                    if (*(long *)(param_1 + 0x28) != 0) {
                      UnityEngine_SpriteRenderer__set_color_4095de0
                                (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                                 *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                                 *(long *)(param_1 + 0x28),0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

