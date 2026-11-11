/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$InitializeMultiplierController
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__InitializeMultiplierController (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$InitializeMultiplierController
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__InitializeMultiplierController
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, int32_t level,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__InitializeMultiplierController_16eff68
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b51 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    bRam0000000005c24b51 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_05808828), plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057de4f8) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_017f0044;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057de4f8,4);
LAB_017f0044:
    uVar2 = (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
    if (*(long *)(param_1 + 0xb8) != 0) {
      Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierController__Initialize_29784fc
                (*(long *)(param_1 + 0xb8),uVar2,1,0);
      if (*(long *)(param_1 + 0xb8) != 0) {
        Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierController__HideTag_2979738
                  (*(long *)(param_1 + 0xb8),0);
        if (*(long *)(param_1 + 0xb8) != 0) {
          Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierController__HideModifyMultiplierButtons_2979758
                    (*(long *)(param_1 + 0xb8),0);
          if (*(long *)(param_1 + 0xb8) != 0) {
            uVar6 = 0;
            lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0xb8);
            if ((lVar3 != 0) &&
               (auVar9 = UnityEngine_Component__get_gameObject_408b480(lVar3,0),
               uVar6 = auVar9._8_8_, auVar9._0_8_ != 0)) {
              if (pcRam0000000005c3a388 == (code *)0x0) {
                pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
              }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a388)(auVar9._0_8_,0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(0,uVar6);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

