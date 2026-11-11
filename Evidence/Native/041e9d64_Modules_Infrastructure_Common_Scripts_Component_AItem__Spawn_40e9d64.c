/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$Spawn
void Modules_Infrastructure_Common_Scripts_Component_AItem__Spawn (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$Spawn
   void Modules_Infrastructure_Common_Scripts_Component_AItem__Spawn
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__Spawn_40e9d64(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x041e9d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

