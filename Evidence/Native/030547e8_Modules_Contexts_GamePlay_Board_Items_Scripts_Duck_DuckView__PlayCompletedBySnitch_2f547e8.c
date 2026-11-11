/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$PlayCompletedBySnitch
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayCompletedBySnitch (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$PlayCompletedBySnitch
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayCompletedBySnitch
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayCompletedBySnitch_2f547e8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if ((bRam0000000005c3089b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a9ac8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0578d1b0);
    bRam0000000005c3089b = 1;
  }
  uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*puVar7,puVar7[1],puVar7[2],
                       *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x130),uVar3,0);
    puVar2 = PTR_DAT_0578d1b0;
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138),
                         *(undefined8 *)PTR_DAT_057874c0);
      uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      lVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar3,uVar4,*(undefined8 *)puVar2);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057984e0;
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057a9ac8,0);
        uVar3 = *(undefined8 *)puVar1;
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(long *)(lVar5 + 0x80) = lVar6;
          FUN_012d0d74((long *)(lVar5 + 0x80),lVar6,uVar3);
        }
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

