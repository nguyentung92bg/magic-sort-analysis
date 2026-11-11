/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.RequestedIAP$$.ctor
void Modules_Contexts_Application_IAP_Scripts_RequestedIAP___ctor (Modules_Contexts_Application_IAP_Scripts_RequestedIAP_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.RequestedIAP$$.ctor
   void Modules_Contexts_Application_IAP_Scripts_RequestedIAP___ctor
   (Modules_Contexts_Application_IAP_Scripts_RequestedIAP_o* __this, System_String_o* productId,
   const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_RequestedIAP___ctor_1388b48
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_057c1590;
  if ((bRam0000000005c2308c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576f3b8);
    FUN_012d0dc8(PTR_DAT_057c1590);
    bRam0000000005c2308c = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Threading_Tasks_TaskCompletionSource_object____ctor_1db5e94
              (lVar5,*(undefined8 *)PTR_DAT_0576f3b8);
    *(long *)(param_1 + 0x10) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar5);
    puVar6 = (undefined8 *)(param_1 + 0x18);
    *puVar6 = param_2;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

