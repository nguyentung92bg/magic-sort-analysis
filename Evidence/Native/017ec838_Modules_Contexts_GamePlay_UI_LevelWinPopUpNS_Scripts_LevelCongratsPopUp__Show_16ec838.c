/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$Show
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__Show (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$Show
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__Show
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__Show_16ec838
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000005c24b2f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2938);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05815298);
    bRam0000000005c24b2f = 1;
  }
  if (param_2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar6 = *(long *)PTR_DAT_05815298;
    bVar1 = *(byte *)(lVar6 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) {
LAB_017ec8e0:
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    *(long **)(param_1 + 0x68) = param_2;
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_017ec8e0;
  }
  puVar3 = PTR_DAT_0576aae0;
  FUN_012d0d74(param_1 + 0x68,param_2);
  if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
      (lVar6 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar6 == 0)) ||
     (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057a2938), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = Modules_Contexts_Application_Ads_Scripts_AdService__CanShowEarlyInterstitial_1b5f158
                    (lVar6,0);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
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
    puVar2 = PTR_DAT_05814830;
    puVar3 = PTR_DAT_057b8520;
    if (*(long *)(param_1 + 0x30) != 0) {
      UnityEngine_Animator__Play_1f79a6c
                (0,*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50),0xffffffff,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_057ec790;
      if (lVar6 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
        lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar3);
        puVar3 = PTR_DAT_0578f238;
        if (lVar6 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                    (lVar6,0x15,*(undefined8 *)PTR_DAT_057871c8);
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar6 = *(long *)puVar3;
          }
          puVar2 = PTR_DAT_057606c8;
          lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
          if (lVar7 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar6 = *(long *)puVar3;
            }
            uVar8 = **(undefined8 **)(lVar6 + 0xb8);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar7 == 0) goto LAB_017ecb7c;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_058148b0,0);
            plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *plVar5 = lVar7;
            FUN_012d0d74(plVar5,lVar7);
          }
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3f000000,lVar7,0,0);
          uVar9 = *(undefined4 *)(param_1 + 0x60);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar6,param_1,*(undefined8 *)PTR_DAT_0577bf20,0);
            uVar8 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar9,lVar6,0,0);
            *(undefined8 *)(param_1 + 0x28) = uVar8;
            FUN_012d0d74();
            lVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
            if (lVar6 != 0) {
              if (pcRam0000000005c3a388 == (code *)0x0) {
                pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
              }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a388)(lVar6,1);
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
  *(undefined1 *)(param_1 + 0x40) = 0;
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c24b30 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0575fdb8);
    FUN_012d0dc8(PTR_DAT_057f6b60);
    FUN_012d0dc8(PTR_DAT_0579b370);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057c9930);
    FUN_012d0dc8(PTR_DAT_0577d7d0);
    FUN_012d0dc8(PTR_DAT_0578f238);
    bRam0000000005c24b30 = 1;
  }
  puVar2 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057ec790;
  if (lVar6 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
    lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_0578f238;
    if (lVar6 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                (lVar6,0x15,*(undefined8 *)PTR_DAT_057871c8);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar6 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_057606c8;
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_017eceec;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_057c9930,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar5 = lVar7;
        FUN_012d0d74(plVar5,lVar7);
      }
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3f000000,lVar7,0,0);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar6 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_017eceec;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_0577d7d0,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar5 = lVar7;
        FUN_012d0d74(plVar5,lVar7);
      }
      puVar3 = PTR_DAT_0578b048;
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339be0,lVar7,0,0);
      lVar7 = *(long *)(param_1 + 0x38);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057f6b60,0), lVar7 != 0)
         ) {
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                  (lVar7,lVar6,0);
        uVar9 = *(undefined4 *)(param_1 + 0x44);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_0575fdb8,0);
          uVar8 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar9,lVar6,0,0);
          *(undefined8 *)(param_1 + 0x18) = uVar8;
          FUN_012d0d74((undefined8 *)(param_1 + 0x18),uVar8);
          uVar9 = *(undefined4 *)(param_1 + 0x48);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar6,param_1,*(undefined8 *)PTR_DAT_0579b370,0);
            uVar8 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar9,lVar6,0,0);
            *(undefined8 *)(param_1 + 0x20) = uVar8;
            FUN_012d0d74();
            lVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
            if (lVar6 != 0) {
              UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
              lVar6 = *(long *)(param_1 + 0x30);
              if (lVar6 != 0) {
                uVar8 = *(undefined8 *)(param_1 + 0x58);
                if (pcRam0000000005c28b88 == (code *)0x0) {
                  pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar8,0xffffffff,0);
                }
                uVar9 = (*pcRam0000000005c28b88)(uVar8);
                if (pcRam0000000005c28b70 == (code *)0x0) {
                  pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
                }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000005c28b70)(0,lVar6,uVar9,0xffffffff);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_017eceec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

