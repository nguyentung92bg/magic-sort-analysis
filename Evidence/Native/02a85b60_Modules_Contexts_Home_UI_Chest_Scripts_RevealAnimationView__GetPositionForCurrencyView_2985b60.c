/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$GetPositionForCurrencyView
UnityEngine_Vector3_o Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetPositionForCurrencyView (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, int32_t index, int32_t totalRewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$GetPositionForCurrencyView
   UnityEngine_Vector3_o
   Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetPositionForCurrencyView
   (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, int32_t index, int32_t
   totalRewards, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetPositionForCurrencyView_2985b60
          (long param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 auVar7 [16];
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_02a85d74;
  uVar13 = *(undefined8 *)(lVar4 + 0x1c);
  fVar14 = *(float *)(lVar4 + 0x24);
  if (cRam0000000005c230ac == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230ac = '\x01';
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_02a85d74;
  }
  puVar2 = PTR_DAT_05805c10;
  fVar5 = *(float *)(lVar4 + 0x28);
  lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar9 = *(undefined8 *)(lVar4 + 0x18);
  fVar10 = *(float *)(lVar4 + 0x20);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
    lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  fVar6 = (float)uVar13 + (float)uVar9 * fVar5;
  fVar8 = (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar5;
  auVar7._4_4_ = fVar8;
  auVar7._0_4_ = fVar6;
  auVar7._8_8_ = 0;
  if ((int)param_3 < 5) {
    if (param_3 == 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02a85d74;
    }
    else {
      iVar1 = param_3 + 2;
      if (-1 < (int)(param_3 + 1)) {
        iVar1 = param_3 + 1;
      }
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(puVar2);
        cRam0000000005c230ac = '\x01';
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      lVar3 = *(long *)(param_1 + 0x20);
      if (((param_3 & 1) == 0) || (param_3 - 1 != param_2)) {
        if (lVar3 == 0) goto LAB_02a85d74;
        fVar14 = -*(float *)(lVar3 + 0x2c);
        if ((param_2 & 1) != 0) {
          fVar14 = *(float *)(lVar3 + 0x2c);
        }
      }
      else {
        fVar14 = 0.0;
        if (lVar3 == 0) {
LAB_02a85d74:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
      auVar7 = ZEXT416((uint)(fVar6 + *(float *)(lVar4 + 0x18) * (float)(iVar1 >> 1) + fVar14));
    }
  }
  else {
    if (cRam0000000005c230ac == '\0') {
      FUN_012d0dc8(puVar2);
      cRam0000000005c230ac = '\x01';
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    fVar11 = (float)*(undefined8 *)(lVar4 + 0x18);
    fVar12 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
    fVar8 = fVar8 + fVar12 + fVar12;
    auVar7 = Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetDynamicLayoutPosition_2986148
                       (CONCAT44(fVar8,fVar6 + fVar11 + fVar11),fVar8,
                        fVar14 + fVar10 * fVar5 +
                        *(float *)(lVar4 + 0x20) + *(float *)(lVar4 + 0x20),param_1,param_2,param_3)
    ;
  }
  return auVar7;
}

