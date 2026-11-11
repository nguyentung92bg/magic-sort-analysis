/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$OnApplicationFocus
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__OnApplicationFocus (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, bool hasFocus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$OnApplicationFocus
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__OnApplicationFocus
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, bool hasFocus, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__OnApplicationFocus_1cc98e4
               (long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    return;
  }
  return;
}

