/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.ADailyStuckPopUpVariant$$Activate
void Modules_Contexts_Home_Daily_Scripts_UI_ADailyStuckPopUpVariant__Activate (Modules_Contexts_Home_Daily_Scripts_UI_ADailyStuckPopUpVariant_o* __this, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* animationConfig, System_String_o* infoText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.ADailyStuckPopUpVariant$$Activate
   void Modules_Contexts_Home_Daily_Scripts_UI_ADailyStuckPopUpVariant__Activate
   (Modules_Contexts_Home_Daily_Scripts_UI_ADailyStuckPopUpVariant_o* __this,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o*
   animationConfig, System_String_o* infoText, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_ADailyStuckPopUpVariant__Activate_410672c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        plVar1 = *(long **)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_042067d0;
        (**(code **)(*plVar1 + 0x558))(plVar1,param_3,*(undefined8 *)(*plVar1 + 0x560));
        uVar2 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar2);
    }
    *(undefined8 *)(param_1 + 0x58) = param_2;
    FUN_012d0d74((undefined8 *)(param_1 + 0x58),param_2);
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
LAB_042067d0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

