/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$BeforeAnimationsStart
void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__BeforeAnimationsStart (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$BeforeAnimationsStart
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__BeforeAnimationsStart
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__BeforeAnimationsStart_1f178c8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2863e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057dc480);
    FUN_012d0dc8(PTR_DAT_0581aa60);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05811e40);
    bRam0000000005c2863e = 1;
  }
  puVar2 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0581aa60;
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                          (*(long *)(param_1 + 0x40),0), lVar4 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Invoke_333cfd8
                (lVar4,uVar3,*(undefined8 *)PTR_DAT_05811e40);
      uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__IsSnitchActive_1f17da4
                        (param_1);
      puVar2 = PTR_DAT_057dc480;
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x20);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        }
        lVar6 = *(long *)(lVar4 + 0x10);
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),lVar4,0,*(undefined8 *)(lVar6 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

