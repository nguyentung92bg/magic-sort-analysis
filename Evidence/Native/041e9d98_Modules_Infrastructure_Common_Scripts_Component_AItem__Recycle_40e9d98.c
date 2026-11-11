/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$Recycle
void Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$Recycle
   void Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  lVar2 = param_1[2];
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e9de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}

