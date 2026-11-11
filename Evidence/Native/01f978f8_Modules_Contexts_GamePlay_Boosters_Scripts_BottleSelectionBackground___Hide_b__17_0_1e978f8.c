/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$<Hide>b__17_0
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground___Hide_b__17_0 (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$<Hide>b__17_0
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground___Hide_b__17_0
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground___Hide_b__17_0_1e978f8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c28161 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d73c0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c28161 = 1;
  }
  puVar2 = PTR_DAT_057d73c0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

