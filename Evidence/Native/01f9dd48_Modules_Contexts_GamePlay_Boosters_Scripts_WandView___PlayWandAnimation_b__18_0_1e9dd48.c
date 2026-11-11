/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$<PlayWandAnimation>b__18_0
void Modules_Contexts_GamePlay_Boosters_Scripts_WandView___PlayWandAnimation_b__18_0 (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$<PlayWandAnimation>b__18_0
   void Modules_Contexts_GamePlay_Boosters_Scripts_WandView___PlayWandAnimation_b__18_0
   (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_WandView___PlayWandAnimation_b__18_0_1e9dd48
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      if (pcRam0000000005c35e30 == (code *)0x0) {
        pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c35e30)(lVar1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

