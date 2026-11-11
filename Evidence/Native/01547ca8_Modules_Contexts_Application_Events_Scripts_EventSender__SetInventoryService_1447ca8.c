/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SetInventoryService
void Modules_Contexts_Application_Events_Scripts_EventSender__SetInventoryService (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_Inventory_Scripts_InventoryService_o* inventoryService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SetInventoryService
   void Modules_Contexts_Application_Events_Scripts_EventSender__SetInventoryService
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_Inventory_Scripts_InventoryService_o* inventoryService, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SetInventoryService_1447ca8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((bRam0000000005c2373a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795c40);
    FUN_012d0dc8(PTR_DAT_05794148);
    FUN_012d0dc8(PTR_DAT_057e08f8);
    bRam0000000005c2373a = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SetInventoryService_1cc6730
              (*(long *)(param_1 + 0x18),param_2,0);
    puVar4 = PTR_DAT_05794148;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      *puVar5 = param_2;
      FUN_012d0d74(puVar5,param_2);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_05795c40;
      if (lVar6 != 0) {
        System_Func_object____ctor_3378e44(lVar6,uVar9,*(undefined8 *)PTR_DAT_057e08f8,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c238a2 == '\0') {
          FUN_012d0dc8(PTR_DAT_05795c40);
          cRam0000000005c238a2 = '\x01';
        }
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar7 = *(long *)puVar4;
        }
        plVar8 = (long *)(*(long *)(lVar7 + 0xb8) + 0x60);
        *plVar8 = lVar6;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

