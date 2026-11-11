/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchLevelTutorialPopUp$$Show
void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchLevelTutorialPopUp__Show (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchLevelTutorialPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchLevelTutorialPopUp$$Show
   void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchLevelTutorialPopUp__Show
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchLevelTutorialPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchLevelTutorialPopUp__Show_214347c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c29b16 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c29b16 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar2,*(undefined8 *)PTR_DAT_05761608);
    plVar3 = (long *)(param_1 + 0x18);
    *plVar3 = lVar2;
    FUN_012d0d74(plVar3,lVar2);
    if (*plVar3 != 0) {
      Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager__OnTutorialStarted_2142b84();
      lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar2 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar2,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

