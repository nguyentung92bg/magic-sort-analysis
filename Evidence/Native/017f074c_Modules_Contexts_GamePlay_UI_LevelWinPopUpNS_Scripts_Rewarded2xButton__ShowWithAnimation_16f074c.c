/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.Rewarded2xButton$$ShowWithAnimation
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowWithAnimation (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton_o* __this, float delay, int32_t earnedCoinsFromWin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.Rewarded2xButton$$ShowWithAnimation
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowWithAnimation
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton_o* __this, float delay,
   int32_t earnedCoinsFromWin, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowWithAnimation_16f074c
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uStack_34;
  
  if ((bRam0000000005c24b55 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057a2598);
    FUN_012d0dc8(PTR_DAT_0578dd18);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057b1398);
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24b55 = 1;
  }
  uStack_34 = 0;
  if (*(char *)(param_2 + 0x38) == '\0') {
    Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Initialize_16f0bc4
              (param_2);
  }
  plVar13 = *(long **)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x68) = param_3;
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    plVar12 = *(long **)(param_2 + 0x60);
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_017f0864;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_017f0864:
    iVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057de4f8) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_017f08d0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057de4f8,4);
LAB_017f08d0:
      uVar5 = (*(code *)*puVar6)(plVar12,iVar4 + -1,puVar6[1]);
      if (*(long *)(param_2 + 0x48) != 0) {
        uStack_34 = Modules_Contexts_Application_Ads_Scripts_AdService__Get2XRewardedCoinAmount_1b5f6a0
                              (*(long *)(param_2 + 0x48),uVar5,0);
        plVar13 = *(long **)(param_2 + 0x70);
        uVar7 = System_Int32__ToString_26c9768(&uStack_34,0);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x560));
          Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Hide_16f0ab0
                    (param_2);
          if (*(long *)(param_2 + 0x18) != 0) {
            *(undefined1 *)(*(long *)(param_2 + 0x18) + 0x1c) = 0;
            lVar8 = UnityEngine_Component__get_gameObject_408b480(param_2,0);
            if (lVar8 != 0) {
              lVar8 = UnityEngine_GameObject__get_transform_408e25c(lVar8,0);
              if (cRam0000000005c230aa == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230aa = '\x01';
              }
              if (lVar8 != 0) {
                puVar9 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0(*puVar9,puVar9[1],puVar9[2],lVar8,0);
                lVar8 = UnityEngine_Component__get_gameObject_408b480(param_2,0);
                puVar3 = PTR_DAT_057bbd38;
                puVar2 = PTR_DAT_057874c0;
                puVar1 = PTR_DAT_057606c8;
                if (lVar8 != 0) {
                  uVar7 = UnityEngine_GameObject__get_transform_408e25c(lVar8,0);
                  uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                    (0x3f800000,*(undefined4 *)(param_2 + 0x20),uVar7,0);
                  uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                    (param_1,uVar7,*(undefined8 *)puVar3);
                  uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar7,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)puVar2);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  puVar2 = PTR_DAT_057984e0;
                  if (lVar8 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar8,param_2,*(undefined8 *)PTR_DAT_057a2598,0);
                    uVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                      (uVar7,lVar8,*(undefined8 *)puVar2);
                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    puVar1 = PTR_DAT_057b1398;
                    if (lVar8 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar8,param_2,*(undefined8 *)PTR_DAT_0578dd18,0);
                      uVar7 = DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                                        (uVar7,lVar8,*(undefined8 *)puVar1);
                      *(undefined8 *)(param_2 + 0x30) = uVar7;
                      FUN_012d0d74((undefined8 *)(param_2 + 0x30));
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

