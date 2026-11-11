/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$Initialize
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__Initialize (Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy, Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o* backendEnvironmentConfig, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, Modules_Contexts_Application_Events_Scripts_Sessions_FpsTracker_o* fpsTracker, Modules_Contexts_Application_Events_Scripts_Sessions_SessionTracker_o* sessionTracker, System_String_o* firstInstallAppV, Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$Initialize
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__Initialize
   (Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy,
   Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o*
   backendEnvironmentConfig, Modules_Contexts_Application_Player_Scripts_IPlayerService_o*
   playerService, Modules_Contexts_Application_Events_Scripts_Sessions_FpsTracker_o* fpsTracker,
   Modules_Contexts_Application_Events_Scripts_Sessions_SessionTracker_o* sessionTracker,
   System_String_o* firstInstallAppV,
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__Initialize_1cc7874
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057edef0;
  if ((bRam0000000005c277ad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057edef0);
    bRam0000000005c277ad = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_Contexts_Application_Events_Scripts_GrandEventSender___ctor_1cc76a8
              (lVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
    FUN_012d0d74(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar2);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (*(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x10) != 0)) {
      Modules_Contexts_Application_Events_Scripts_GrandEventSenderRemoteService__Initialize_1cc798c
                ();
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (*(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18) != 0)) {
        Modules_Contexts_Application_Events_Scripts_GrandScreenShotRemoteService__Initialize_1cc79f4
                  ();
        if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x58) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

