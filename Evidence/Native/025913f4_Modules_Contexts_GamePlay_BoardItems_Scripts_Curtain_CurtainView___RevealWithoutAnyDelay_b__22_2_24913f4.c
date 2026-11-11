/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$<RevealWithoutAnyDelay>b__22_2
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView___RevealWithoutAnyDelay_b__22_2 (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$<RevealWithoutAnyDelay>b__22_2
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView___RevealWithoutAnyDelay_b__22_2
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView___RevealWithoutAnyDelay_b__22_2_24913f4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2b2ad & 1) == 0) {
                    /* try { // try from 0259141c to 0269147f has its CatchHandler @ 0259141c
                       catch() { ... } // from try @ 0259141c with catch @ 0259141c
                       catch() { ... } // from try @ 025915d4 with catch @ 0259141c
                       catch() { ... } // from try @ 02591630 with catch @ 0259141c
                       catch() { ... } // from try @ 02591680 with catch @ 0259141c
                       catch() { ... } // from try @ 02591754 with catch @ 0259141c */
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c2b2ad = 1;
  }
  puVar2 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
              (lVar3,9,*(undefined8 *)PTR_DAT_057871c8);
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      if (pcRam0000000005c35e30 == (code *)0x0) {
        pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c35e30)(lVar3,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

