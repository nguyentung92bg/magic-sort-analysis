/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Complete_2f5c548(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1;
  if ((bRam0000000005c308d3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b7500);
    lVar4 = FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c308d3 = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return lVar4;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar1 = PTR_DAT_057b8520;
  puVar2 = PTR_DAT_057b7500;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
              (*(long *)(param_1 + 0x50),param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
      puVar2 = PTR_DAT_057815e0;
      if ((bRam0000000005c308d4 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057bef90);
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_057606c8);
        bRam0000000005c308d4 = 1;
      }
      puVar1 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_057bef90,0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar4,0,1);
        if ((lVar5 != 0) && ((uVar3 & 1) != 0)) {
          DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x3f800000,lVar4,lVar5);
        }
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

