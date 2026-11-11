/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$Show
void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__Show (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this, Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferViewModel_o* offerViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$Show
   void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__Show
   (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferViewModel_o* offerViewModel, const
   MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__Show_20bb490
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000005c2959a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057bf740);
    FUN_012d0dc8(PTR_DAT_05769c58);
    bRam0000000005c2959a = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (((lVar4 != 0) && (UnityEngine_GameObject__SetActive_408e318(lVar4,1,0), param_2 != 0)) &&
     (*(long *)(param_2 + 0x18) != 0)) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18);
    FUN_012d0d74((undefined8 *)(param_1 + 0x68));
    if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18),0);
      puVar3 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_057bf740;
      if (*(long *)(param_2 + 0x18) != 0) {
        uStack_44 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x10);
        plVar8 = *(long **)(param_1 + 0x18);
        uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_44);
        uVar5 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar5,0);
        puVar2 = PTR_DAT_057bc5e8;
        puVar1 = PTR_DAT_05769c58;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x558))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x560));
          uVar5 = *(undefined8 *)(param_1 + 0x70);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(uVar5,0);
          plVar8 = *(long **)(param_1 + 0x40);
          iStack_48 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x24);
          uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_48);
          uStack_4c = *(undefined4 *)(param_2 + 0x20);
          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_4c);
          uVar5 = System_String__Format_1ed15fc(*(undefined8 *)puVar1,uVar6,uVar7,uVar5,0);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x560));
            Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__ShowRewards_20bb6b0
                      (param_1,*(undefined8 *)(param_2 + 0x10));
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
              Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameOfferImpressionEvent_1489e7c
                        (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

