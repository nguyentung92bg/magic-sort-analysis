/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$OnEnable
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnEnable (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$OnEnable
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnEnable
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnEnable_1e9e8ec
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__Initialize_1e9e904();
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

