/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardRemoteService$$.ctor
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService___ctor (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService_o* __this, Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy, Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o* backendEnvironmentConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardRemoteService$$.ctor
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService___ctor
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService_o* __this,
   Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy,
   Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o*
   backendEnvironmentConfig, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService___ctor_2aeb634
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
                    /* try { // try from 02beb65c to 02ceb65f has its CatchHandler @ 02beb668 */
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
                    /* try { // try from 02beb660 to 02ceb687 has its CatchHandler @ 02beb3b8 */
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_3;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beb65c with catch @ 02beb668
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beb608 with catch @ 02beb66c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beb570 with catch @ 02beb670
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beb52c with catch @ 02beb674
                        */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

