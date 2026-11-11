/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleShakeRotation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float duration, UnityEngine_Vector3_o target, int32_t vibrato, float randomness, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleShakeRotation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float duration,
   UnityEngine_Vector3_o target, int32_t vibrato, float randomness, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation_249e578
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((bRam0000000005c2b323 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2b323 = 1;
  }
  plVar6 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                             (param_6,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar9 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
        goto DG_Tweening_ShortcutExtensions__DOShakeRotation_1ee7e20;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0xb);
DG_Tweening_ShortcutExtensions__DOShakeRotation_1ee7e20:
  uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar1 = PTR_DAT_057fc648;
  if ((bRam0000000005c284be & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f050,param_7,1,0,0);
    FUN_012d0dc8(PTR_DAT_0580e4a0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057d4fc0);
    FUN_012d0dc8(PTR_DAT_057f4ac8);
    FUN_012d0dc8(PTR_DAT_05772668);
    FUN_012d0dc8(PTR_DAT_057e54d8);
    FUN_012d0dc8(PTR_DAT_057fc648);
    FUN_012d0dc8(PTR_DAT_0580ccf8);
    bRam0000000005c284be = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar9 != 0) {
    System_Object___ctor_23dfe5c(lVar9,0);
    puVar7 = (undefined8 *)(lVar9 + 0x10);
    *puVar7 = uVar8;
    FUN_012d0d74(puVar7,uVar8);
    if ((float)param_1 <= 0.0) {
      if (cRam0000000005c24e31 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ddc60);
        cRam0000000005c24e31 = '\x01';
      }
      puVar1 = PTR_DAT_0580ccf8;
      if (0 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
        if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        UnityEngine_Debug__LogWarning_40800c4(*(undefined8 *)puVar1,0);
      }
      return 0;
    }
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577f050);
    puVar1 = PTR_DAT_0580e4a0;
    if (lVar4 != 0) {
      DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                (lVar4,lVar9,*(undefined8 *)PTR_DAT_05772668,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar3 = PTR_DAT_057f4ac8;
      puVar2 = PTR_DAT_057d4fc0;
      puVar1 = PTR_DAT_057815e0;
      if (lVar5 != 0) {
        DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                  (lVar5,lVar9,*(undefined8 *)PTR_DAT_057e54d8,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar8 = DG_Tweening_DOTween__Shake_1ed9fd4
                          (param_1,param_2,param_3,param_4,param_5,lVar4,lVar5,param_7,1,0);
        lVar9 = DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                          (uVar8,*puVar7,*(undefined8 *)puVar3);
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0xfc) = 2;
          return lVar9;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(0,2,*(undefined8 *)puVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

