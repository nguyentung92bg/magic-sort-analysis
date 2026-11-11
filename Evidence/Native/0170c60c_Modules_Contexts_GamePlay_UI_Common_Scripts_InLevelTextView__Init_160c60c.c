/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTextView$$Init
void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__Init (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTextView$$Init
   void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__Init
   (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__Init_160c60c(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24445 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24445 = 1;
  }
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057d9070);
    plVar4 = (long *)(param_1 + 0x30);
    *plVar4 = lVar3;
    FUN_012d0d74(plVar4,lVar3);
    if ((*plVar4 != 0) &&
       ((lVar3 = *(long *)(*plVar4 + 0x18), lVar3 != 0 &&
        (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)))) {
      cVar1 = *(char *)(lVar3 + 0x39);
      lVar3 = 0x20;
      if (cVar1 == '\0') {
        lVar3 = 0x18;
      }
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + lVar3);
      FUN_012d0d74((undefined8 *)(param_1 + 0x28));
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar3 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar3,cVar1 != '\0',0);
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 != 0)) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar3,cVar1 == '\0');
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

