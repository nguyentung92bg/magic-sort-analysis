/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnTagView$$PlayAnimation
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnTagView__PlayAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnTagView_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnTagView$$PlayAnimation
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnTagView__PlayAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnTagView_o* __this, int32_t
   stuckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnTagView__PlayAnimation_16fa3a4
               (long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_2 == 1) {
    lVar2 = *(long *)(param_1 + 0x38);
joined_r0x017fa3d8:
    if (lVar2 == 0) goto LAB_017fa40c;
    puVar4 = (undefined8 *)(param_1 + 0x28);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    if (param_2 != 2) goto joined_r0x017fa3d8;
    if (lVar2 == 0) goto LAB_017fa40c;
    puVar4 = (undefined8 *)(param_1 + 0x30);
  }
  UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar2,*puVar4,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar3,0xffffffff,0);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar3);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,lVar2,uVar1,0xffffffff);
    return;
  }
LAB_017fa40c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

