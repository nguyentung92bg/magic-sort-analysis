/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WaterParticleView$$ClearTween
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__ClearTween (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WaterParticleView$$ClearTween
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__ClearTween
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__ClearTween_22ff29c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c2a60b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a60b = 1;
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar2,0,0);
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar2,0,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_012d0d74((long *)(param_1 + 0x68),0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_012d0d74((long *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x40) != 0) {
    UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(param_1 + 0x40),0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(param_1 + 0x18),0);
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(param_1 + 0x28),0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if (((uVar3 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x50), lVar2 != 0)) {
    if (pcRam0000000005c35e38 == (code *)0x0) {
      pcRam0000000005c35e38 = (code *)FUN_012d0d84(&UNK_043e023f,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e38)(lVar2,1,1);
    return;
  }
  return;
}

