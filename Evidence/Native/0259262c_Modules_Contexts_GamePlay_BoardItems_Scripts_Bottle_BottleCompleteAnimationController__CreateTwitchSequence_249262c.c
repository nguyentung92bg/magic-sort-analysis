/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateTwitchSequence
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateTwitchSequence (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateTwitchSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateTwitchSequence
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateTwitchSequence_249262c
          (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d85a0);
    FUN_012d0dc8(PTR_DAT_05810bf0);
    bRam0000000005c2b2b8 = 1;
  }
  puVar3 = PTR_DAT_057d85a0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar1 = _UNK_0434cc40;
  uVar6 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                    (0,0,0x3f800000,_UNK_0434cc40,*(undefined8 *)(param_1 + 0x38),0,0);
  uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                    (uVar6,4,*(undefined8 *)puVar3);
  uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar4 = PTR_DAT_05810bf0;
  puVar2 = PTR_DAT_05805c10;
  puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar8 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                    (*puVar7,puVar7[1],puVar7[2],uVar1,uVar8,0,0);
  uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                    (uVar8,4,*(undefined8 *)puVar3);
  uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar8,0);
  uVar8 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                    (0,0,0xbf800000,uVar1,*(undefined8 *)(param_1 + 0x38),0,0);
  uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                    (uVar8,4,*(undefined8 *)puVar3);
  uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar8,0);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  uVar8 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                    (*puVar7,puVar7[1],puVar7[2],uVar1,uVar8,0,0);
  uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                    (uVar8,4,*(undefined8 *)puVar3);
  uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar8,0);
  DG_Tweening_TweenSettingsExtensions__SetLoops_object__24510ec(uVar6,3,*(undefined8 *)puVar4);
  return uVar5;
}

