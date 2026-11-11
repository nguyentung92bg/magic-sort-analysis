/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$TryCloseCoveredItem
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__TryCloseCoveredItem (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$TryCloseCoveredItem
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__TryCloseCoveredItem
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__TryCloseCoveredItem_275a240
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = param_1;
  if ((bRam0000000005c2c73b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057aa348);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05767198);
    lVar3 = FUN_012d0dc8(PTR_DAT_05809d78);
    bRam0000000005c2c73b = 1;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      return lVar3;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    DG_Tweening_DOTween__Kill_1eda9a4(uVar5,1,0);
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
       lVar3 != 0)) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (*pcRam0000000005c3a388)(lVar3,0);
      return lVar3;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    DG_Tweening_DOTween__Kill_1eda9a4(uVar5,1,0);
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
       puVar2 = PTR_DAT_05809d78, puVar1 = PTR_DAT_057606c8, lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
      uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                        (0,_UNK_0434ccf4,*(undefined8 *)(param_1 + 0x88),0);
      lVar3 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                        (uVar5,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)puVar2);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_05767198;
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057aa348,0);
        uVar5 = *(undefined8 *)puVar1;
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(long *)(lVar3 + 0x80) = lVar4;
          FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar5);
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

