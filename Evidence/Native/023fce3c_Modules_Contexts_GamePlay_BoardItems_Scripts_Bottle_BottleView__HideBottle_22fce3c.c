/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$HideBottle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__HideBottle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$HideBottle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__HideBottle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__HideBottle_22fce3c
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
       lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
      if ((*(long *)(param_1 + 0x100) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
        UnityEngine_Renderer__set_material_4082930
                  (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x100) + 0x38),0);
        if ((*(long *)(param_1 + 0x100) != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x38);
          if (pcRam0000000005c39b70 == (code *)0x0) {
            pcRam0000000005c39b70 = (code *)FUN_012d0d84(&UNK_043ea959);
          }
                    /* WARNING: Could not recover jumptable at 0x04182970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c39b70)(lVar1,uVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

