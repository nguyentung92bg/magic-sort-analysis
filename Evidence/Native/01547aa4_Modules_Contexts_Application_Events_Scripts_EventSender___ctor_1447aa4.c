/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$.ctor
void Modules_Contexts_Application_Events_Scripts_EventSender___ctor (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$.ctor
   void Modules_Contexts_Application_Events_Scripts_EventSender___ctor
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender___ctor_1447aa4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_0578d070;
  if ((bRam0000000005c23738 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c6c0);
    FUN_012d0dc8(PTR_DAT_0578d070);
    FUN_012d0dc8(PTR_DAT_057aa3b0);
    FUN_012d0dc8(PTR_DAT_057a3db0);
    FUN_012d0dc8(PTR_DAT_057e8c68);
    bRam0000000005c23738 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_057e8c68;
  if (lVar6 != 0) {
    Modules_Contexts_Application_Events_Scripts_InventoryParametersProvider___ctor_1cc6728(lVar6,0);
    *(long *)(param_1 + 0x20) = lVar6;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar6);
    System_Object___ctor_23dfe5c(param_1,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_0576c6c0;
    if (lVar6 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_057a3db0);
      *(long *)(param_1 + 0x10) = lVar6;
      FUN_012d0d74((long *)(param_1 + 0x10),lVar6);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if (lVar6 != 0) {
        Modules_Contexts_Application_Events_Scripts_FirebaseEventSender___ctor_1cc6698
                  (lVar6,param_2,0);
        plVar10 = (long *)(param_1 + 0x18);
        *plVar10 = lVar6;
        FUN_012d0d74(plVar10,lVar6);
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          lVar7 = *plVar10;
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar9 = *(long *)PTR_DAT_057aa3b0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *plVar10 = lVar7;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x01547c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

