/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$SetType
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetType (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, int32_t keyLockType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$SetType
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetType
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, int32_t
   keyLockType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetType_248f9cc
               (long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (param_2 == 1) {
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90),0);
      if ((*(long *)(param_1 + 0x28) != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        goto UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88;
      }
    }
  }
  else if (param_2 == 2) {
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88),0);
      if ((*(long *)(param_1 + 0x28) != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8);
        goto UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88;
      }
    }
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98),0);
      if ((*(long *)(param_1 + 0x28) != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8);
UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88:
        puVar2 = PTR_DAT_0576c200;
        uVar5 = *puVar6;
        if ((bRam0000000005c27d52 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576c200,uVar5,0);
          bRam0000000005c27d52 = 1;
        }
        uVar8 = *(undefined8 *)(lVar4 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar8,uVar5,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        FUN_012d0d74((undefined8 *)(lVar4 + 0x20),uVar5);
        UnityEngine_U2D_Animation_SpriteLibrary__CacheOverrides_1e38b2c(lVar4);
        puVar2 = PTR_DAT_0575abf8;
        if ((bRam0000000005c27d5d & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575abf8);
          bRam0000000005c27d5d = 1;
        }
        lVar4 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                          (lVar4,*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar1) {
            uVar7 = 0;
            do {
              if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              if (*(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_01f395e4;
              UnityEngine_U2D_Animation_SpriteResolver__ResolveSpriteToSpriteRenderer_1e3a620();
              uVar1 = *(uint *)(lVar4 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)uVar1);
          }
          return;
        }
LAB_01f395e4:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

