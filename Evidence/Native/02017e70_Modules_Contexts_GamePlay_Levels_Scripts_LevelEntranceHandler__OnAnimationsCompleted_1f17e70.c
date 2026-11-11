/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$OnAnimationsCompleted
void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__OnAnimationsCompleted (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$OnAnimationsCompleted
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__OnAnimationsCompleted
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__OnAnimationsCompleted_1f17e70
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2863f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7fb8);
    FUN_012d0dc8(PTR_DAT_057eb990);
    FUN_012d0dc8(PTR_DAT_0576eb40);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2863f = 1;
  }
  puVar1 = PTR_DAT_057f7fb8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057eb990;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
      uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__IsSnitchActive_1f17da4
                        (param_1);
      puVar1 = PTR_DAT_0576eb40;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + 0x20);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
        lVar5 = *(long *)(lVar3 + 0x10);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),lVar3,0,*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

