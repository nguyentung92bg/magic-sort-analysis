/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$Show
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__Show (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$Show
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__Show
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, int32_t
   stuckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__Show_16fa1fc
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24ba1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05802f70);
    bRam0000000005c24ba1 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 == 0)) ||
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_057e8f70), plVar4 == (long *)0x0)) {
LAB_017fa3a0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0581aae8) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 10) * 0x10 + 0x138);
        goto LAB_017fa2f0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0581aae8,10);
LAB_017fa2f0:
  lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (lVar3 == 0) goto LAB_017fa3a0;
  uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_ALevel__IsMultipleBottlePlayOn_1f1708c(lVar3,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Animation__Stop_1f79e6c(*(long *)(param_1 + 0x28),0);
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_05802f70;
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar7,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar3,uVar7,0);
        return;
      }
    }
    goto LAB_017fa3a0;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) goto LAB_017fa3a0;
  if (param_2 == 1) {
    lVar6 = *(long *)(lVar3 + 0x38);
joined_r0x017fa3d8:
    if (lVar6 == 0) goto LAB_017fa40c;
    puVar5 = (undefined8 *)(lVar3 + 0x28);
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x38);
    if (param_2 != 2) goto joined_r0x017fa3d8;
    if (lVar6 == 0) goto LAB_017fa40c;
    puVar5 = (undefined8 *)(lVar3 + 0x30);
  }
  UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar6,*puVar5,0);
  lVar6 = *(long *)(lVar3 + 0x18);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar7,0xffffffff,0);
    }
    uVar2 = (*pcRam0000000005c28b88)(uVar7);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,lVar6,uVar2,0xffffffff);
    return;
  }
LAB_017fa40c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

