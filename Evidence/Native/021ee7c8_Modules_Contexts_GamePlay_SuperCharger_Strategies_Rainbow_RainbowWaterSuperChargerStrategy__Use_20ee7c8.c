/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$Use
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Use (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, UnityEngine_Transform_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$Use
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Use
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, UnityEngine_Transform_o* source, const MethodInfo* method); */

ulong Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Use_20ee7c8
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_057a8138;
  if ((bRam0000000005c29742 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    FUN_012d0dc8(PTR_DAT_0577ce88);
    FUN_012d0dc8(PTR_DAT_05784c70);
    FUN_012d0dc8(PTR_DAT_057a8138);
    FUN_012d0dc8(PTR_DAT_0578c740);
    bRam0000000005c29742 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_1);
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    uVar6 = FUN_012d0d74((undefined8 *)(lVar5 + 0x18),param_2);
    if ((*(char *)(param_1 + 0x28) != '\0') ||
       (uVar6 = Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__TryPickTarget_20eea38
                          (param_1), (uVar6 & 1) == 0)) {
      return uVar6;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__LockPickedBottle_20eea74
              (param_1);
    puVar1 = PTR_DAT_057815e0;
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
      *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar8 + 0x24);
      puVar3 = PTR_DAT_0578c740;
      puVar2 = PTR_DAT_05777ce8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
      DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                (uVar6,param_1,*(undefined8 *)puVar2);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar8 = *(long *)puVar3;
      }
      puVar1 = PTR_DAT_057606c8;
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar8 = *(long *)puVar3;
        }
        uVar10 = **(undefined8 **)(lVar8 + 0xb8);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar9 == 0) goto LAB_021eea2c;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,uVar10,*(undefined8 *)PTR_DAT_0577ce88,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar7 = lVar9;
        FUN_012d0d74(plVar7,lVar9);
      }
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar6,lVar9,0);
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar8 != 0)) &&
         (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
        fVar11 = *(float *)(lVar8 + 0x28);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar8 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar5,*(undefined8 *)PTR_DAT_05784c70,0);
          uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar6,0,1);
          if ((lVar8 != 0) && ((uVar4 & 1) != 0)) {
            DG_Tweening_Sequence__DoInsertCallback_1edffe8(fVar11 + 0.0,uVar6,lVar8);
          }
          return uVar6;
        }
      }
    }
  }
LAB_021eea2c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

