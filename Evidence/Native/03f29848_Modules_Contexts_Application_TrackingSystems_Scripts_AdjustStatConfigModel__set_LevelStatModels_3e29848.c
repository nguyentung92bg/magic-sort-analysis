/* IL2CPP: Modules.Contexts.Application.TrackingSystems.Scripts.AdjustStatConfigModel$$set_LevelStatModels
void Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel__set_LevelStatModels (Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel_o* __this, System_Collections_Generic_List_AdjustLevelStatModel__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.TrackingSystems.Scripts.AdjustStatConfigModel$$set_LevelStatModels
   void 
   Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel__set_LevelStatModels
   (Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel_o* __this,
   System_Collections_Generic_List_AdjustLevelStatModel__o* value, const MethodInfo* method); */

void Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatConfigModel__set_LevelStatModels_3e29848
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 03f29848 to 040299ef has its CatchHandler @ 03f29848
                       catch() { ... } // from try @ 03f29848 with catch @ 03f29848
                       catch() { ... } // from try @ 03f29a0c with catch @ 03f29848
                       catch() { ... } // from try @ 03f29a68 with catch @ 03f29848
                       catch() { ... } // from try @ 03f29a98 with catch @ 03f29848 */
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

