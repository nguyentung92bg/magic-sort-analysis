/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$Show
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Show (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$Show
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Show
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this,
   int32_t stuckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Show_16fb18c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c24bad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c24bad = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 017fb210 to 018fb7b3 has its CatchHandler @ 017fafd4 */
    return;
  }
  lVar5 = *(long *)(param_1 + 0x28);
                    /* try { // try from 017fb1f4 to 018fb1f7 has its CatchHandler @ 017fb798 */
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (param_2 == 1) {
    lVar3 = *(long *)(lVar5 + 0x38);
joined_r0x017fa3d8:
    if (lVar3 == 0) goto LAB_017fa40c;
    puVar6 = (undefined8 *)(lVar5 + 0x28);
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x38);
    if (param_2 != 2) goto joined_r0x017fa3d8;
    if (lVar3 == 0) goto LAB_017fa40c;
    puVar6 = (undefined8 *)(lVar5 + 0x30);
  }
  UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar3,*puVar6,0);
  lVar3 = *(long *)(lVar5 + 0x18);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar7,0xffffffff,0);
    }
    uVar2 = (*pcRam0000000005c28b88)(uVar7);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,lVar3,uVar2,0xffffffff);
    return;
  }
LAB_017fa40c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

