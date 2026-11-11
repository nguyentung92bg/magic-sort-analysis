/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$CanSelectAsTarget
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsTarget (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$CanSelectAsTarget
   bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsTarget
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsTarget_160fdb4
          (long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if ((param_3 != 0) &&
     (uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                        (param_3,0), param_2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0170fdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,param_3,uVar1,*(undefined8 *)(*param_2 + 0x200))
    ;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

