/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$CanSelectAsOrigin
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsOrigin (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$CanSelectAsOrigin
   bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsOrigin
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsOrigin_16127c8
          (long param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x017127f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

