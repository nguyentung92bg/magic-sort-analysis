/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$PlayParticleAtIndex
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__PlayParticleAtIndex (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$PlayParticleAtIndex
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__PlayParticleAtIndex
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__PlayParticleAtIndex_274ebe8
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((bRam0000000005c2c6e2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8f98);
    bRam0000000005c2c6e2 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x58),param_2,*(undefined8 *)PTR_DAT_057d8f98),
     lVar1 != 0)) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

