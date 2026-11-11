/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$SetParentInitialPositions
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__SetParentInitialPositions (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, int32_t bottleRowCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$SetParentInitialPositions
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__SetParentInitialPositions
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   int32_t bottleRowCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__SetParentInitialPositions_16f7e64
               (long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if ((bRam0000000005c24b8e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24b8e = 1;
  }
  lVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
  puVar5 = PTR_DAT_0576aae0;
  lVar9 = *(long *)(param_1 + 0xb0);
  if ((lVar9 != 0) && (lVar7 != 0)) {
    bVar6 = param_2 != 3;
    lVar1 = 0x68;
    if (bVar6) {
      lVar1 = 0x5c;
    }
    lVar2 = 100;
    if (bVar6) {
      lVar2 = 0x58;
    }
    lVar3 = 0x60;
    if (bVar6) {
      lVar3 = 0x54;
    }
    fVar11 = *(float *)(lVar9 + lVar1);
    fVar10 = *(float *)(lVar9 + lVar2);
    UnityEngine_Transform__set_localPosition_4092ce0(*(undefined4 *)(lVar9 + lVar3),lVar7,0);
    lVar7 = **(long **)(*(long *)puVar5 + 0xb8);
    if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
       (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057a0c88), lVar7 != 0)) {
      uVar8 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__HasInGameUI_2970624
                        (lVar7,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      lVar7 = **(long **)(*(long *)puVar5 + 0xb8);
      if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
         ((lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar7,*(undefined8 *)PTR_DAT_057d9070), lVar7 != 0 &&
          ((*(long *)(lVar7 + 0x18) != 0 &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + 0x10), lVar7 != 0)))))) {
        iVar4 = *(int *)(lVar7 + 0x3c);
        lVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
        if (lVar7 != 0) {
          fStack_30 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar7,0);
          lVar9 = *(long *)(param_1 + 0xb0);
          if (lVar9 != 0) {
            bVar6 = 1 < iVar4 - 1U;
            lVar1 = 0x90;
            if (bVar6) {
              lVar1 = 0x84;
            }
            lVar2 = 0x94;
            if (bVar6) {
              lVar2 = 0x88;
            }
            lVar3 = 0x98;
            if (bVar6) {
              lVar3 = 0x8c;
            }
            fStack_30 = fStack_30 + *(float *)(lVar9 + lVar1);
            fStack_2c = fVar10 + *(float *)(lVar9 + lVar2);
            fStack_28 = fVar11 + *(float *)(lVar9 + lVar3);
            if (pcRam0000000005c3a620 == (code *)0x0) {
              pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
            }
            (*pcRam0000000005c3a620)(lVar7,&fStack_30);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

