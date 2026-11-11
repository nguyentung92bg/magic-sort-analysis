/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$Recycle
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__Recycle (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$Recycle
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__Recycle
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__Recycle_410ca20(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x88),0);
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__StopHint_410a584(param_1);
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4(param_1);
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar1,0,0);
      lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                   *(undefined4 *)(lVar2 + 0x14),lVar1,0);
        lVar1 = *(long *)(param_1 + 0x18);
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0420caf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

