/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$GetCoinRewardAmount
int32_t Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__GetCoinRewardAmount (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$GetCoinRewardAmount
   int32_t
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__GetCoinRewardAmount
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, bool
   isDaily, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__GetCoinRewardAmount_16ee794
          (undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b44 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc918);
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c24b44 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar3,*(undefined8 *)PTR_DAT_057a1e60);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
      plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_05808828);
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
        lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar3,*(undefined8 *)PTR_DAT_057d9070);
        if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
           ((lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0 &&
            (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar6,*(undefined8 *)PTR_DAT_057bc918), lVar6 != 0)))) {
          lVar6 = Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__GetAdConfigModel_185c7e8
                            (lVar6,0);
          if ((param_2 & 1) == 0) {
            if (plVar4 != (long *)0x0) {
              lVar3 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                    goto LAB_017ee960;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_017ee960:
              iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
              if (plVar5 != (long *)0x0) {
                lVar3 = *plVar5;
                uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057de4f8) {
                      puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                      goto LAB_017ee9cc;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057de4f8,4);
LAB_017ee9cc:
                iVar2 = (*(code *)*puVar7)(plVar5,iVar2 + -1,puVar7[1]);
                if (lVar6 != 0) {
                  if (iVar2 == 2) {
                    return *(undefined4 *)(lVar6 + 0x54);
                  }
                  if (iVar2 != 1) {
                    if (iVar2 == 0) {
                      return *(undefined4 *)(lVar6 + 0x4c);
                    }
                    return 100;
                  }
                  return *(undefined4 *)(lVar6 + 0x50);
                }
              }
            }
          }
          else if ((((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) &&
                   (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0xa8), lVar3 != 0)) &&
                  (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
            return *(undefined4 *)(lVar3 + 0x14);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

