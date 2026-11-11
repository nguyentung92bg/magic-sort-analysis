/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$TryCancelAllSelections
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__TryCancelAllSelections (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$TryCancelAllSelections
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__TryCancelAllSelections
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__TryCancelAllSelections_1612034
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if ((bRam0000000005c2448d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057df868);
    FUN_012d0dc8(PTR_DAT_057dac98);
    FUN_012d0dc8(PTR_DAT_057e1a68);
    bRam0000000005c2448d = 1;
  }
  puVar5 = PTR_DAT_057e1a68;
  puVar4 = PTR_DAT_057df868;
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    iVar8 = *(int *)(lVar6 + 0x18) + -1;
    if (iVar8 < 0) {
FUN_012d0d74:
      puVar7 = (undefined8 *)(param_1 + 0x18);
      *puVar7 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    do {
      lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar6,iVar8,*(undefined8 *)puVar5);
      if (lVar6 == 0) break;
      if (*(long *)(lVar6 + 0x10) == 0) {
LAB_017120c4:
        if (*(long *)(param_1 + 0x20) == 0) break;
        System_Collections_Generic_List_object___RemoveAt_21fe320
                  (*(long *)(param_1 + 0x20),iVar8,*(undefined8 *)puVar4);
      }
      else if (*(char *)(lVar6 + 0x20) == '\0') {
        Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__Deselect_1612d38();
        goto LAB_017120c4;
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) goto FUN_012d0d74;
      lVar6 = *(long *)(param_1 + 0x20);
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

