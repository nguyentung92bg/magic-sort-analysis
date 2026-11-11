/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleStopperView$$PlayStopperAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__PlayStopperAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView_o* __this, bool isNewAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleStopperView$$PlayStopperAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__PlayStopperAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView_o* __this, bool
   isNewAnimation, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__PlayStopperAnimation_22fba28
               (long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c2a5f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a5f4 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = 0x28;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x20;
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar1);
    lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
        if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x38), lVar1 != 0)) {
          if (pcRam0000000005c28c10 == (code *)0x0) {
            pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar3,0);
          }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c28c10)(lVar1,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

