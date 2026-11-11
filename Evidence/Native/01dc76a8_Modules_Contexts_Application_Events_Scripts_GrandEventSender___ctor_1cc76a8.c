/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$.ctor
void Modules_Contexts_Application_Events_Scripts_GrandEventSender___ctor (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy, Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o* backendEnvironmentConfig, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, Modules_Contexts_Application_Events_Scripts_Sessions_FpsTracker_o* fpsTracker, Modules_Contexts_Application_Events_Scripts_Sessions_SessionTracker_o* sessionTracker, System_String_o* firstInstallAppV, Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$.ctor
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender___ctor
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this,
   Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy,
   Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o*
   backendEnvironmentConfig, Modules_Contexts_Application_Player_Scripts_IPlayerService_o*
   playerService, Modules_Contexts_Application_Events_Scripts_Sessions_FpsTracker_o* fpsTracker,
   Modules_Contexts_Application_Events_Scripts_Sessions_SessionTracker_o* sessionTracker,
   System_String_o* firstInstallAppV,
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender___ctor_1cc76a8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_057c8948;
  if ((bRam0000000005c277ac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8948);
    FUN_012d0dc8(PTR_DAT_0580f020);
    bRam0000000005c277ac = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_0580f020;
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_GrandEventSenderRemoteService___ctor_1cc77ec
              (lVar5,param_2,param_3);
    *(long *)(param_1 + 0x10) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar5);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar5 != 0) {
      Modules_Contexts_Application_Events_Scripts_GrandScreenShotRemoteService___ctor_1cc7830
                (lVar5,param_2,param_3);
      *(long *)(param_1 + 0x18) = lVar5;
      FUN_012d0d74((long *)(param_1 + 0x18),lVar5);
      *(undefined8 *)(param_1 + 0x20) = param_4;
      FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_4);
      *(undefined8 *)(param_1 + 0x30) = param_5;
      FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_5);
      *(undefined8 *)(param_1 + 0x28) = param_6;
      FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_6);
      *(undefined8 *)(param_1 + 0x40) = param_7;
      FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_7);
      puVar6 = (undefined8 *)(param_1 + 0x60);
      *puVar6 = param_8;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

