/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleLobbyButton$$PlayProgressAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__PlayProgressAnimation (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleLobbyButton$$PlayProgressAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__PlayProgressAnimation
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__PlayProgressAnimation_3760630
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000005c33bc2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c33bc2 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714();
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar5 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                        (*(long *)(param_1 + 0x48));
      puVar3 = PTR_DAT_057db748;
      if ((lVar5 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        iVar1 = *(int *)(lVar5 + 0x18);
        plVar10 = *(long **)(param_1 + 0x38);
        uStack_34 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                              (*(long *)(param_1 + 0x48));
        uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_34);
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar5 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                              (*(long *)(param_1 + 0x48)), puVar2 = PTR_DAT_057c0628, lVar5 != 0)) {
          uStack_38 = *(undefined4 *)(lVar5 + 0x18);
          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_38);
          uVar6 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar6,uVar7,0);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar6,*(undefined8 *)(*plVar10 + 0x560));
            if (*(long *)(param_1 + 0x30) != 0) {
              Modules_Contexts_Home_TowerWinStreak_Scripts_UI_CircleProgressBar__SetProgress_32e4c20
                        (((float)iVar4 + -1.0) / (float)iVar1,*(long *)(param_1 + 0x30),0);
              if (*(long *)(param_1 + 0x48) != 0) {
                lVar5 = *(long *)(param_1 + 0x30);
                iVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                                  ();
                if (*(long *)(param_1 + 0x48) != 0) {
                  lVar8 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                                    (*(long *)(param_1 + 0x48));
                  if (((lVar8 != 0) && (lVar9 = *(long *)(param_1 + 0x40), lVar9 != 0)) &&
                     (lVar5 != 0)) {
                    Modules_Contexts_Home_TowerWinStreak_Scripts_UI_CircleProgressBar__PlayProgressAnimation_32e4cb0
                              ((float)iVar4 / (float)*(int *)(lVar8 + 0x18),
                               *(undefined4 *)(lVar9 + 0x18),lVar5,*(undefined8 *)(lVar9 + 0x20),0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

