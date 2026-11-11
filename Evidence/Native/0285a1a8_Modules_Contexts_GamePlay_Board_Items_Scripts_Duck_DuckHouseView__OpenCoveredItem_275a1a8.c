/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$OpenCoveredItem
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__OpenCoveredItem (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$OpenCoveredItem
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__OpenCoveredItem
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__OpenCoveredItem_275a1a8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2c73a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c2c73a = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  DG_Tweening_DOTween__Kill_1eda9a4(uVar3,0,0);
  DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0(0x3f800000,0,*(undefined8 *)(param_1 + 0x88),0);
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0), lVar2 != 0
     )) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

