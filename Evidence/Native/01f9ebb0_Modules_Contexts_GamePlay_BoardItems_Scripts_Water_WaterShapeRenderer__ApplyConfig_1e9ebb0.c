/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$ApplyConfig
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ApplyConfig (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, Tests_EclipseAnimationConfig_o* config, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$ApplyConfig
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ApplyConfig
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this,
   Tests_EclipseAnimationConfig_o* config, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ApplyConfig_1e9ebb0
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3c) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  if ((bRam0000000005c28197 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575b900);
    bRam0000000005c28197 = 1;
  }
  puVar1 = PTR_DAT_0575b900;
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Renderer__GetPropertyBlock_40821e4
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),0);
    lVar3 = *(long *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (lVar3 != 0) {
      UnityEngine_MaterialPropertyBlock__SetColor_3841400
                (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),lVar3,
                 **(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      if (*(long *)(param_1 + 0x60) != 0) {
        UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                  (*(undefined4 *)(param_1 + 0x30),*(long *)(param_1 + 0x60),
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0);
        if (*(long *)(param_1 + 0x60) != 0) {
          UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                    (*(undefined4 *)(param_1 + 0x34),*(long *)(param_1 + 0x60),
                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
          if (*(long *)(param_1 + 0x60) != 0) {
            UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                      (*(undefined4 *)(param_1 + 0x38),*(long *)(param_1 + 0x60),
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),0);
            if (*(long *)(param_1 + 0x60) != 0) {
              UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                        (*(undefined4 *)(param_1 + 0x3c),*(long *)(param_1 + 0x60),
                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
              if (*(long *)(param_1 + 0x60) != 0) {
                UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                          (*(undefined4 *)(param_1 + 0x40),*(long *)(param_1 + 0x60),
                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14),0);
                if (*(long *)(param_1 + 0x60) != 0) {
                  UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                            (*(undefined4 *)(param_1 + 0x44),*(long *)(param_1 + 0x60),
                             *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
                  if (*(long *)(param_1 + 0x60) != 0) {
                    UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                              (*(undefined4 *)(param_1 + 0x48),*(long *)(param_1 + 0x60),
                               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c),0);
                    if (*(long *)(param_1 + 0x60) != 0) {
                      UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                                (*(undefined4 *)(param_1 + 0x4c),*(long *)(param_1 + 0x60),
                                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20),0);
                      if (*(long *)(param_1 + 0x60) != 0) {
                        UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                                  (*(undefined4 *)(param_1 + 0x50),*(long *)(param_1 + 0x60),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24),0);
                        if (*(long *)(param_1 + 0x60) != 0) {
                          UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                                    (*(undefined4 *)(param_1 + 0x54),*(long *)(param_1 + 0x60),
                                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),0);
                          if (*(long *)(param_1 + 0x60) != 0) {
                            UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                                      (*(undefined4 *)(param_1 + 0x58),*(long *)(param_1 + 0x60),
                                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),0);
                            lVar3 = *(long *)(param_1 + 0x28);
                            if (lVar3 != 0) {
                              uVar2 = *(undefined8 *)(param_1 + 0x60);
                              if (pcRam0000000005c39b88 == (code *)0x0) {
                                pcRam0000000005c39b88 = (code *)FUN_012d0d84(&UNK_043eaa16);
                              }
                    /* WARNING: Could not recover jumptable at 0x0418218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam0000000005c39b88)(lVar3,uVar2);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

