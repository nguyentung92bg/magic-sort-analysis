/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$UpdateAndRotateCountText
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateAndRotateCountText (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$UpdateAndRotateCountText
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateAndRotateCountText
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateAndRotateCountText_261666c
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2ba2e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_058135f8);
    FUN_012d0dc8(PTR_DAT_057c2c68);
    FUN_012d0dc8(PTR_DAT_0579f4a8);
    FUN_012d0dc8(PTR_DAT_057f6610);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2ba2e = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_058135f8,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057c2c68,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 200);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057f6610,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar5,uVar3,lVar4,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0xd0);
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar4,param_1,*(undefined8 *)PTR_DAT_0579f4a8,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar5,uVar3,lVar4,0);
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

