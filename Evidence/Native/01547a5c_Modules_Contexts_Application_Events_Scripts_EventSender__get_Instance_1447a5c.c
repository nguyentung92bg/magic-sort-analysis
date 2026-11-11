/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$get_Instance
Modules_Contexts_Application_Events_Scripts_EventSender_o* Modules_Contexts_Application_Events_Scripts_EventSender__get_Instance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$get_Instance
   Modules_Contexts_Application_Events_Scripts_EventSender_o*
   Modules_Contexts_Application_Events_Scripts_EventSender__get_Instance (const MethodInfo* method);
    */

undefined8 Modules_Contexts_Application_Events_Scripts_EventSender__get_Instance_1447a5c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_057ece38;
  if ((bRam0000000005c23737 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ece38);
    bRam0000000005c23737 = 1;
  }
  return **(undefined8 **)(*(long *)puVar1 + 0xb8);
}

