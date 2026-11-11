/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$PlayCompletedBySnitch
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayCompletedBySnitch (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$PlayCompletedBySnitch
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayCompletedBySnitch
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayCompletedBySnitch_230d588
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if ((bRam0000000005c2a684 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0578d1b0);
    FUN_012d0dc8(PTR_DAT_057867f8);
                    /* try { // try from 0240d5e0 to 0250d6fb has its CatchHandler @ 0240d5e0
                       catch() { ... } // from try @ 0240d5e0 with catch @ 0240d5e0
                       catch() { ... } // from try @ 0240d7dc with catch @ 0240d5e0
                       catch() { ... } // from try @ 0240d8a4 with catch @ 0240d5e0
                       catch() { ... } // from try @ 0240d8ac with catch @ 0240d5e0
                       catch() { ... } // from try @ 0240d948 with catch @ 0240d5e0 */
    bRam0000000005c2a684 = 1;
  }
  uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar6 != 0)) {
    puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*puVar7,puVar7[1],puVar7[2],*(undefined4 *)(lVar6 + 0x7c),uVar3,0);
    puVar2 = PTR_DAT_0578d1b0;
    puVar1 = PTR_DAT_057606c8;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar6 != 0)) {
      uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar3,*(undefined8 *)(lVar6 + 0x80),*(undefined8 *)PTR_DAT_057874c0);
      uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      lVar6 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar3,uVar4,*(undefined8 *)puVar2);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057984e0;
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_057867f8,0);
        uVar3 = *(undefined8 *)puVar1;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(long *)(lVar6 + 0x80) = lVar5;
          FUN_012d0d74((long *)(lVar6 + 0x80),lVar5,uVar3);
        }
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

