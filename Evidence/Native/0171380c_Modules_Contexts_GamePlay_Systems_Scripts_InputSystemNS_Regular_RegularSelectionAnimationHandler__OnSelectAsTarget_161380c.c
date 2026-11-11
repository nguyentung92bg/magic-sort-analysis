/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$OnSelectAsTarget
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnSelectAsTarget (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$OnSelectAsTarget
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnSelectAsTarget
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnSelectAsTarget_161380c
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c24491 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db8f8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24491 = 1;
  }
  puVar2 = PTR_DAT_057db8f8;
  puVar1 = PTR_DAT_057b8520;
  if (param_2 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnSelectAsTarget_24970b8
              (param_2,param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

