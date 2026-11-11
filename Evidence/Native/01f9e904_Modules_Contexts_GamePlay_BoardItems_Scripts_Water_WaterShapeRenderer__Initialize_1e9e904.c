/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$Initialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__Initialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$Initialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__Initialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__Initialize_1e9e904
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_0579ef58;
  puVar1 = PTR_DAT_0578aeb8;
  if ((bRam0000000005c28196 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ef58);
    FUN_012d0dc8(PTR_DAT_0578aeb8);
    bRam0000000005c28196 = 1;
  }
  uVar3 = UnityEngine_Component__GetComponent_object__27205b8(param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  FUN_012d0d74();
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    UnityEngine_MaterialPropertyBlock___ctor_38410b0(lVar4,0);
    *(long *)(param_1 + 0x60) = lVar4;
    FUN_012d0d74((long *)(param_1 + 0x60),lVar4);
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar4 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar4 + 0x28);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar4 + 0x2c);
    uVar3 = *(undefined8 *)(lVar4 + 0x34);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(lVar4 + 0x3c);
    *(undefined8 *)(param_1 + 0x3c) = uVar3;
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(param_1 + 0x4c) = uVar3;
    if ((bRam0000000005c28197 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0575b900);
      bRam0000000005c28197 = 1;
    }
    puVar1 = PTR_DAT_0575b900;
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Renderer__GetPropertyBlock_40821e4
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),0);
      lVar4 = *(long *)(param_1 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (lVar4 != 0) {
        UnityEngine_MaterialPropertyBlock__SetColor_3841400
                  (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),lVar4,
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
                                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),0
                                        );
                              lVar4 = *(long *)(param_1 + 0x28);
                              if (lVar4 != 0) {
                                uVar3 = *(undefined8 *)(param_1 + 0x60);
                                if (pcRam0000000005c39b88 == (code *)0x0) {
                                  pcRam0000000005c39b88 = (code *)FUN_012d0d84(&UNK_043eaa16);
                                }
                    /* WARNING: Could not recover jumptable at 0x0418218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*pcRam0000000005c39b88)(lVar4,uVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

