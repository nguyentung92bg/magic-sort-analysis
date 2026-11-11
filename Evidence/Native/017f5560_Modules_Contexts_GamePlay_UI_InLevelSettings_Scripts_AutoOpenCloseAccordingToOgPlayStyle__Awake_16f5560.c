/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.AutoOpenCloseAccordingToOgPlayStyle$$Awake
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_AutoOpenCloseAccordingToOgPlayStyle__Awake (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_AutoOpenCloseAccordingToOgPlayStyle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.AutoOpenCloseAccordingToOgPlayStyle$$Awake
   void 
   Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_AutoOpenCloseAccordingToOgPlayStyle__Awake
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_AutoOpenCloseAccordingToOgPlayStyle_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_AutoOpenCloseAccordingToOgPlayStyle__Awake_16f5560
               (long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b7a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24b7a = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
      (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar3,*(undefined8 *)PTR_DAT_057d9070), lVar3 != 0)) &&
     ((*(long *)(lVar3 + 0x18) != 0 &&
      (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar3 != 0)))) {
    if (*(char *)(lVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(param_1 + 0x19);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x18);
    }
    if (cVar1 == '\0') {
      lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar3 == 0) goto LAB_017f5630;
      uVar4 = 0;
    }
    else {
      lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar3 == 0) goto LAB_017f5630;
      uVar4 = 1;
    }
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar3,uVar4);
    return;
  }
LAB_017f5630:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

