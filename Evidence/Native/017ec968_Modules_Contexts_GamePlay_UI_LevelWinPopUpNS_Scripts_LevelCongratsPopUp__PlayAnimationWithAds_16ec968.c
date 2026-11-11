/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$PlayAnimationWithAds
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__PlayAnimationWithAds (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$PlayAnimationWithAds
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__PlayAnimationWithAds
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__PlayAnimationWithAds_16ec968
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((bRam0000000005c24b34 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577bf20);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_058148b0);
    FUN_012d0dc8(PTR_DAT_0578f238);
    bRam0000000005c24b34 = 1;
  }
  puVar1 = PTR_DAT_05814830;
  puVar2 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Animator__Play_1f79a6c
              (0,*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50),0xffffffff,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_057ec790;
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_0578f238;
      if (lVar3 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                  (lVar3,0x15,*(undefined8 *)PTR_DAT_057871c8);
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar3 = *(long *)puVar2;
        }
        puVar1 = PTR_DAT_057606c8;
        lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
        if (lVar5 == 0) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar3 = *(long *)puVar2;
          }
          uVar6 = **(undefined8 **)(lVar3 + 0xb8);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 == 0) goto LAB_017ecb7c;
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,uVar6,*(undefined8 *)PTR_DAT_058148b0,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          *plVar4 = lVar5;
          FUN_012d0d74(plVar4,lVar5);
        }
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3f000000,lVar5,0,0);
        uVar7 = *(undefined4 *)(param_1 + 0x60);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_1,*(undefined8 *)PTR_DAT_0577bf20,0);
          uVar6 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar7,lVar3,0,0);
          *(undefined8 *)(param_1 + 0x28) = uVar6;
          FUN_012d0d74();
          lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
          if (lVar3 != 0) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar3,1);
            return;
          }
        }
      }
    }
  }
LAB_017ecb7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

