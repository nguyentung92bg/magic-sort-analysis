/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$<RevealWithoutAnyDelay>b__22_0
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView___RevealWithoutAnyDelay_b__22_0 (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$<RevealWithoutAnyDelay>b__22_0
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView___RevealWithoutAnyDelay_b__22_0
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView___RevealWithoutAnyDelay_b__22_0_24912a4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2b2ab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c2b2ab = 1;
  }
  puVar2 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
              (lVar3,0xc,*(undefined8 *)PTR_DAT_057871c8);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar4,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar3,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

