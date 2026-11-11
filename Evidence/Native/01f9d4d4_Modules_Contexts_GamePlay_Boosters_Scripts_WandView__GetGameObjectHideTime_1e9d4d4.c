/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$GetGameObjectHideTime
float Modules_Contexts_GamePlay_Boosters_Scripts_WandView__GetGameObjectHideTime (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$GetGameObjectHideTime
   float Modules_Contexts_GamePlay_Boosters_Scripts_WandView__GetGameObjectHideTime
   (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, const MethodInfo* method); */

float Modules_Contexts_GamePlay_Boosters_Scripts_WandView__GetGameObjectHideTime_1e9d4d4
                (long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = 0x24;
    if (*(char *)(param_1 + 0x5c) != '\0') {
      lVar1 = 0x28;
    }
    return *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + lVar1) + *(float *)(lVar2 + 0x34) + 0.5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

