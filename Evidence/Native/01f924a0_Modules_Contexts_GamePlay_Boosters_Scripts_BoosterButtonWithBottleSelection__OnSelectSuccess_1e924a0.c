/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButtonWithBottleSelection$$OnSelectSuccess
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection__OnSelectSuccess (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButtonWithBottleSelection$$OnSelectSuccess
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection__OnSelectSuccess
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection__OnSelectSuccess_1e924a0
               (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c2813d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cfa40);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057ced70);
    FUN_012d0dc8(PTR_DAT_05819988);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c2813d = 1;
  }
  puVar4 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar4);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
            (lVar5,4,*(undefined8 *)PTR_DAT_057871c8);
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0x13) {
    iVar1 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar2 = (undefined8 *)PTR_DAT_057ced70;
  }
  else if (iVar1 == 0x12) {
    iVar1 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar2 = (undefined8 *)PTR_DAT_057cfa40;
  }
  else {
    if (iVar1 != 5) {
      return;
    }
    iVar1 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar2 = (undefined8 *)PTR_DAT_05819988;
  }
  if (iVar1 == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620(*puVar2);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x20);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  }
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),lVar5,0,*(undefined8 *)(lVar6 + 0x28));
  return;
}

