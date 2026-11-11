/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$ResetRotation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__ResetRotation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$ResetRotation
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__ResetRotation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__ResetRotation_2492e08
               (long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 02592e0c to 02692f1b has its CatchHandler @ 02592e0c
                       catch() { ... } // from try @ 02592e0c with catch @ 02592e0c
                       catch() { ... } // from try @ 02592fc8 with catch @ 02592e0c
                       catch() { ... } // from try @ 02593054 with catch @ 02592e0c
                       catch() { ... } // from try @ 025930f4 with catch @ 02592e0c */
  lVar2 = *(long *)(param_1 + 0x38);
  if (cRam0000000005c25812 == '\0') {
    FUN_012d0dc8(PTR_DAT_057f4aa8);
    cRam0000000005c25812 = '\x01';
  }
  if (lVar2 != 0) {
    puVar1 = *(undefined4 **)(*(long *)PTR_DAT_057f4aa8 + 0xb8);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    uStack_24 = puVar1[3];
    if (pcRam0000000005c3a640 == (code *)0x0) {
      pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
    }
    (*pcRam0000000005c3a640)(lVar2,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

