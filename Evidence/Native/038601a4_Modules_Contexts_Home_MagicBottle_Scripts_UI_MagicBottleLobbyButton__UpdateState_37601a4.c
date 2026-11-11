/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleLobbyButton$$UpdateState
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__UpdateState (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleLobbyButton$$UpdateState
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__UpdateState
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__UpdateState_37601a4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000005c33bc1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ffcc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c33bc1 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358();
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),uVar3 & 1,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_03860344;
        lVar8 = *(long *)(param_1 + 0x30);
        iVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetLastSeenLobbyButtonProgress_375d6f0
                          ();
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_03860344;
        lVar5 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                          (*(long *)(param_1 + 0x48));
        if ((lVar5 == 0) || (lVar8 == 0)) goto LAB_03860344;
        Modules_Contexts_Home_TowerWinStreak_Scripts_UI_CircleProgressBar__SetProgress_32e4c20
                  ((float)iVar4 / (float)*(int *)(lVar5 + 0x18),lVar8,0);
        puVar2 = PTR_DAT_057db748;
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_03860344;
        plVar9 = *(long **)(param_1 + 0x38);
        uStack_24 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetLastSeenLobbyButtonProgress_375d6f0
                              ();
        uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_24);
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar8 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                              (*(long *)(param_1 + 0x48)), puVar1 = PTR_DAT_057c0628, lVar8 == 0))
        goto LAB_03860344;
        uStack_28 = *(undefined4 *)(lVar8 + 0x18);
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_28);
        uVar6 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar6,uVar7,0);
        if (plVar9 == (long *)0x0) goto LAB_03860344;
        (**(code **)(*plVar9 + 0x558))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x560));
      }
      puVar2 = PTR_DAT_057ffcc8;
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar8 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
        return;
      }
    }
  }
LAB_03860344:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

