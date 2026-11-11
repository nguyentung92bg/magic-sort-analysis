/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$<UpdateAndRotateCountText>b__31_1
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView___UpdateAndRotateCountText_b__31_1 (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$<UpdateAndRotateCountText>b__31_1
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView___UpdateAndRotateCountText_b__31_1
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView___UpdateAndRotateCountText_b__31_1_2617548
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c2ba30 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bcc80);
    bRam0000000005c2ba30 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  if (cRam0000000005c24e32 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c24e32 = '\x01';
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    lVar4 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                      (*(float *)(lVar4 + 0x48) * 360.0,*(float *)(lVar4 + 0x4c) * 360.0,
                       *(float *)(lVar4 + 0x50) * 360.0,
                       *(undefined4 *)(*(long *)(param_1 + 0x20) + 0xd0),uVar5,1,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar5,*(undefined8 *)PTR_DAT_057bcc80);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar4 + 0xb4) = 0x25;
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar2 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar5,0);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar4 + 0xb8) = lVar3;
            FUN_012d0d74((long *)(lVar4 + 0xb8),lVar3);
            return lVar4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

