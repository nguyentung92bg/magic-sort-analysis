/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$SetText
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetText (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, int32_t inputMode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$SetText
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetText
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, int32_t
   inputMode, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetText_1e971a4
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_057bc5e8;
  if ((bRam0000000005c2815d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0578b2e0);
    FUN_012d0dc8(PTR_DAT_0580c470);
    FUN_012d0dc8(PTR_DAT_0579c638);
    bRam0000000005c2815d = 1;
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_0580c470;
  puVar3 = (undefined8 *)PTR_DAT_0578b2e0;
  if (param_2 == 3) {
    puVar3 = (undefined8 *)PTR_DAT_0579c638;
  }
  uVar2 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(*puVar3,0);
  uVar2 = System_String__Concat_1ec3580(uVar2,*(undefined8 *)puVar1,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x01f97278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
  return;
}

