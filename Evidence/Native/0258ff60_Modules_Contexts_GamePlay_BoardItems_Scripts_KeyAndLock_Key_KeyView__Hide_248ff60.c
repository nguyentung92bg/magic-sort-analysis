/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$Hide
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__Hide (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$Hide
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__Hide
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__Hide_248ff60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((bRam0000000005c2b29e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0578cf48);
    bRam0000000005c2b29e = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    uVar6 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0xc);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
          goto LAB_02590038;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,7);
LAB_02590038:
    (*(code *)*puVar1)(uVar6,plVar5,puVar1[1]);
    if (*(long *)(param_1 + 0x30) != 0) {
      UnityEngine_Animator__Play_1f79a6c
                (0,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_0578cf48,0,0);
      lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar2 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_1 + 0x20),0);
          lVar2 = *(long *)(param_1 + 0x20);
          if (lVar2 != 0) {
            if (pcRam0000000005c3a788 == (code *)0x0) {
              pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
            }
            (*pcRam0000000005c3a788)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

