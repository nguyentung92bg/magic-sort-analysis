/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsController$$Init
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsController__Init (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsController$$Init
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsController__Init
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsController__Init_16f6e78
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b83 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24b83 = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
      (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar2,*(undefined8 *)PTR_DAT_057d9070), lVar2 != 0)) &&
     (((*(long *)(lVar2 + 0x18) != 0 &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar2 != 0)) &&
      (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)))) {
    if (*(char *)(lVar2 + 0x39) == '\0') {
      UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) goto LAB_017f6f48;
      uVar4 = 1;
    }
    else {
      UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) goto LAB_017f6f48;
      uVar4 = 0;
    }
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar2,uVar4);
    return;
  }
LAB_017f6f48:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

