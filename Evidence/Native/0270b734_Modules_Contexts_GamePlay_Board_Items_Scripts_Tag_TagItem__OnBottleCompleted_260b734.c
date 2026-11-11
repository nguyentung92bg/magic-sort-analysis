/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$OnBottleCompleted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnBottleCompleted (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0270b690) */
/* WARNING: Removing unreachable block (ram,0x0270b698) */
/* WARNING: Removing unreachable block (ram,0x0270b6ac) */
/* WARNING: Removing unreachable block (ram,0x0270b764) */
/* WARNING: Removing unreachable block (ram,0x0270b778) */
/* WARNING: Removing unreachable block (ram,0x0207a100) */
/* WARNING: Removing unreachable block (ram,0x0207a11c) */
/* WARNING: Removing unreachable block (ram,0x0207a130) */
/* WARNING: Removing unreachable block (ram,0x0270b79c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$OnBottleCompleted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnBottleCompleted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, const MethodInfo* method);
    */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnBottleCompleted_260b734
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1;
  if ((bRam0000000005c2b9da & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05760f88);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e0620);
    lVar5 = FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b9da = 1;
  }
  puVar2 = PTR_DAT_057b8520;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar3 = PTR_DAT_05760f88;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
      puVar2 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057e0620,0);
        uVar1 = _UNK_0438ebac;
        uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar5,0,1);
        if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
          DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar1,lVar5,lVar6);
        }
        return lVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return lVar5;
}

