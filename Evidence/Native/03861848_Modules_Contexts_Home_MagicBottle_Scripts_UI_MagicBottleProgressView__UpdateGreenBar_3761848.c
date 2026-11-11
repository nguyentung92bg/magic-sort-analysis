/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$UpdateGreenBar
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateGreenBar (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, float progressRatio, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$UpdateGreenBar
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateGreenBar
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, float
   progressRatio, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateGreenBar_3761848
               (float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fStack_18;
  float fStack_14;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    fVar2 = *(float *)(param_2 + 0x50);
    param_1 = fVar2 * param_1;
    UnityEngine_SpriteRenderer__get_size_4095c28(lVar1,0);
    fStack_18 = param_1;
    fStack_14 = fVar2;
    if (pcRam0000000005c3a778 == (code *)0x0) {
      pcRam0000000005c3a778 = (code *)FUN_012d0d84(&UNK_043efb27,0);
    }
    (*pcRam0000000005c3a778)(lVar1,&fStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

