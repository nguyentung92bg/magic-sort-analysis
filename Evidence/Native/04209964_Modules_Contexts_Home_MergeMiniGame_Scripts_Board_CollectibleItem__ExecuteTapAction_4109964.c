/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$ExecuteTapAction
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__ExecuteTapAction (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$ExecuteTapAction
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__ExecuteTapAction
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__ExecuteTapAction_4109964
          (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c3abb5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e0ac0);
    FUN_012d0dc8(PTR_DAT_057b9bc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057bf7d0);
    FUN_012d0dc8(PTR_DAT_057fd0a0);
    bRam0000000005c3abb5 = 1;
  }
  puVar2 = PTR_DAT_057b9bc8;
  puVar4 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x88) != 0) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HideCursor_4109a88();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      uVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int__int___Invoke_333da68
                        (lVar5,0xffffffff,0xffffffff,*(undefined8 *)PTR_DAT_057bf7d0);
      if (*(char *)(param_1 + 0xd8) != '\0') {
        return uVar6;
      }
      *(undefined1 *)(param_1 + 0xd8) = 1;
      puVar2 = PTR_DAT_057e0ac0;
      if (*(long *)(param_1 + 0x88) != 0) {
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x6c);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar5 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int__int__int___Invoke_333ef38
                    (lVar5,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),uVar1,
                     *(undefined8 *)PTR_DAT_057fd0a0);
          puVar4 = PTR_DAT_057815e0;
          if ((bRam0000000005c3abb6 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057a1068);
            FUN_012d0dc8(PTR_DAT_057815e0);
            FUN_012d0dc8(PTR_DAT_057606c8);
            FUN_012d0dc8(PTR_DAT_0579e470);
            FUN_012d0dc8(PTR_DAT_05777ce8);
            bRam0000000005c3abb6 = 1;
          }
          puVar3 = PTR_DAT_05777ce8;
          puVar2 = PTR_DAT_057606c8;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
          uVar6 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                            (uVar6,param_1,*(undefined8 *)puVar3);
          uVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayCollectAnimation_4109bd0
                            (param_1);
          uVar7 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar4 = PTR_DAT_0579e470;
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar5,param_1,*(undefined8 *)PTR_DAT_057a1068,0);
            DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                      (uVar7,lVar5,*(undefined8 *)puVar4);
            return uVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

