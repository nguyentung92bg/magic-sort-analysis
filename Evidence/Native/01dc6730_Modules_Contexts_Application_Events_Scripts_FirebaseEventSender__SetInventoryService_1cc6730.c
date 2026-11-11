/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$SetInventoryService
void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SetInventoryService (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this, Modules_Contexts_Application_Inventory_Scripts_InventoryService_o* inventoryService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$SetInventoryService
   void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SetInventoryService
   (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this,
   Modules_Contexts_Application_Inventory_Scripts_InventoryService_o* inventoryService, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SetInventoryService_1cc6730
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

