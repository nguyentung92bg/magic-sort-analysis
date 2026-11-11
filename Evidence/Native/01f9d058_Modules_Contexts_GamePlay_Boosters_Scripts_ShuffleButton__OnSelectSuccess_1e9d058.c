/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ShuffleButton$$OnSelectSuccess
void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton__OnSelectSuccess (Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ShuffleButton$$OnSelectSuccess
   void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton__OnSelectSuccess
   (Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleButton__OnSelectSuccess_1e9d058(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2818d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_05819988);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c2818d = 1;
  }
  puVar2 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_05819988;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
            (lVar3,4,*(undefined8 *)PTR_DAT_057871c8);
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28))
    ;
    return;
  }
  return;
}

