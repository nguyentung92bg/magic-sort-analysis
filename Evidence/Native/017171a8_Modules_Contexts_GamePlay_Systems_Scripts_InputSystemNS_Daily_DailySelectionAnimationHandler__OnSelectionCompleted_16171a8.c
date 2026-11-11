/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$OnSelectionCompleted
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnSelectionCompleted (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$OnSelectionCompleted
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnSelectionCompleted
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnSelectionCompleted_16171a8
               (long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Infrastructure_Common_Scripts_Component_AItemPart__Recycle_40ea4c0
              (*(long *)(param_1 + 0x18),0);
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)plVar1[4];
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,0);
  }
  (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
  (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
  lVar3 = plVar1[3];
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041ea508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),plVar1,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

