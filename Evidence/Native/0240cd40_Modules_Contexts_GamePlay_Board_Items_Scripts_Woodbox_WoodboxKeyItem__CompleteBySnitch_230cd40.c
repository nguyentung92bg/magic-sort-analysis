/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$CompleteBySnitch
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__CompleteBySnitch (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$CompleteBySnitch
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__CompleteBySnitch
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__CompleteBySnitch_230cd40
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
                    /* try { // try from 0240cd64 to 0250cd8b has its CatchHandler @ 0240cdac */
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Complete_230ad34
              (_UNK_04321764,*(long *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x88),1);
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      if ((bRam0000000005c2a684 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_057984e0);
        FUN_012d0dc8(PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_0578d1b0);
        FUN_012d0dc8(PTR_DAT_057867f8);
        bRam0000000005c2a684 = 1;
      }
      uVar4 = UnityEngine_Component__get_transform_408b444(lVar3,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if ((*(long *)(lVar3 + 0x50) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar3 + 0x50) + 0x18), lVar7 != 0)) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*puVar8,puVar8[1],puVar8[2],*(undefined4 *)(lVar7 + 0x7c),uVar4,0);
        puVar2 = PTR_DAT_0578d1b0;
        puVar1 = PTR_DAT_057606c8;
        if ((*(long *)(lVar3 + 0x50) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar3 + 0x50) + 0x18), lVar7 != 0)) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)PTR_DAT_057874c0);
          uVar5 = UnityEngine_Component__get_gameObject_408b480(lVar3,0);
          lVar7 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                            (uVar4,uVar5,*(undefined8 *)puVar2);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_057984e0;
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar3,*(undefined8 *)PTR_DAT_057867f8,0);
            uVar4 = *(undefined8 *)puVar1;
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
              *(long *)(lVar7 + 0x80) = lVar6;
              FUN_012d0d74((long *)(lVar7 + 0x80),lVar6,uVar4);
            }
            return lVar7;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0240cd8c to 0250cd97 has its CatchHandler @ 0240c848 */
  FUN_012d0ef0();
}

