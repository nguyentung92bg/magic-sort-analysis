/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$MagicBottleRevealAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MagicBottleRevealAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$MagicBottleRevealAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MagicBottleRevealAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MagicBottleRevealAnimation_249d914
               (long param_1)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar2 = 0;
  if ((*(long *)(lVar1 + 0x30) != 0) &&
     (auVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar1 + 0x30),0),
     uVar2 = auVar3._8_8_, auVar3._0_8_ != 0)) {
    UnityEngine_GameObject__SetActive_408e318(auVar3._0_8_,1,0);
    uVar2 = extraout_x1;
    if ((*(long *)(lVar1 + 0x38) != 0) &&
       (auVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar1 + 0x38),0),
       uVar2 = auVar3._8_8_, auVar3._0_8_ != 0)) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(auVar3._0_8_,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,uVar2);
}

