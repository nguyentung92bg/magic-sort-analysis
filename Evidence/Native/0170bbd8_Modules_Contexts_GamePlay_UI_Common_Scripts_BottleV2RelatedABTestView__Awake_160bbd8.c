/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.BottleV2RelatedABTestView$$Awake
void Modules_Contexts_GamePlay_UI_Common_Scripts_BottleV2RelatedABTestView__Awake (Modules_Contexts_GamePlay_UI_Common_Scripts_BottleV2RelatedABTestView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.BottleV2RelatedABTestView$$Awake
   void Modules_Contexts_GamePlay_UI_Common_Scripts_BottleV2RelatedABTestView__Awake
   (Modules_Contexts_GamePlay_UI_Common_Scripts_BottleV2RelatedABTestView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_BottleV2RelatedABTestView__Awake_160bbd8
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0), lVar1 != 0
     )) {
    uStack_30 = _UNK_04339be0;
    uStack_2c = _UNK_04339be0;
    uStack_28 = _UNK_04339be0;
    if (pcRam0000000005c3a650 == (code *)0x0) {
      pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
    }
    (*pcRam0000000005c3a650)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

