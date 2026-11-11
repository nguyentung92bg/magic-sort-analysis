/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$TryCancel
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__TryCancel (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$TryCancel
   bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__TryCancel
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__TryCancel_1612fe0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      return 0;
    }
    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__Deselect_1612d38();
  }
  return 1;
}

