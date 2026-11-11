/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$Show
void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__Show (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$Show
   void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__Show
   (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__Show_20e55b8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c29701 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c29701 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057a0c88), lVar3 != 0)) {
    uVar2 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetSuperChargerType_2970118
                      (lVar3,0);
    Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetVariant_20e5670
              (param_1,uVar2);
    Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetUpProgressBar_20e58e4
              (param_1,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

