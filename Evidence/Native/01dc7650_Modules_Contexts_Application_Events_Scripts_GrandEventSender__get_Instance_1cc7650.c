/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$get_Instance
Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* Modules_Contexts_Application_Events_Scripts_GrandEventSender__get_Instance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$get_Instance
   Modules_Contexts_Application_Events_Scripts_GrandEventSender_o*
   Modules_Contexts_Application_Events_Scripts_GrandEventSender__get_Instance (const MethodInfo*
   method); */

undefined8 Modules_Contexts_Application_Events_Scripts_GrandEventSender__get_Instance_1cc7650(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_057edef0;
  if ((bRam0000000005c277ab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057edef0);
    bRam0000000005c277ab = 1;
  }
  return **(undefined8 **)(*(long *)puVar1 + 0xb8);
}

