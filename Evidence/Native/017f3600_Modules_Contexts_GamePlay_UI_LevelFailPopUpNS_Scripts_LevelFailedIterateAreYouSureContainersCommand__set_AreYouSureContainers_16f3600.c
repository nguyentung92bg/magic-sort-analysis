/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$set_AreYouSureContainers
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__set_AreYouSureContainers (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o* __this, System_Collections_Generic_List_AreYouSureContainer__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$set_AreYouSureContainers
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__set_AreYouSureContainers
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o*
   __this, System_Collections_Generic_List_AreYouSureContainer__o* value, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__set_AreYouSureContainers_16f3600
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
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

