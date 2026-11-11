/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.CoinTextRevealAnimation$$UpdateText
void Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation__UpdateText (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.CoinTextRevealAnimation$$UpdateText
   void Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation__UpdateText
   (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation_o* __this,
   int32_t value, const MethodInfo* method); */

void Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation__UpdateText_400dff0
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  if ((bRam0000000005c393d3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c393d3 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
  puVar2 = PTR_DAT_057ec790;
  puVar1 = PTR_DAT_057b8520;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                (lVar4,0x57,*(undefined8 *)PTR_DAT_057871c8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

