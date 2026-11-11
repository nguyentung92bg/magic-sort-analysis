/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$Initialize
void Modules_Contexts_Application_Events_Scripts_EventSender__Initialize (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$Initialize
   void Modules_Contexts_Application_Events_Scripts_EventSender__Initialize
   (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseInitializer_o* firebaseInitializer,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__Initialize_1447c34(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar4 = PTR_DAT_057ece38;
  if ((bRam0000000005c23739 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ece38);
    bRam0000000005c23739 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_EventSender___ctor_1447aa4(lVar5,param_1);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar5;
    uVar6 = *(ulong *)(*(long *)puVar4 + 0xb8);
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)((uVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

