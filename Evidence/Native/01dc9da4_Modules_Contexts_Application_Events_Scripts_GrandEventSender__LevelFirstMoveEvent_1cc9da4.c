/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$LevelFirstMoveEvent
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__LevelFirstMoveEvent (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$LevelFirstMoveEvent
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__LevelFirstMoveEvent
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__LevelFirstMoveEvent_1cc9da4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_057c8a60;
  if ((bRam0000000005c277e2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057818e8);
    bRam0000000005c277e2 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_057a6648;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar7 = *(undefined8 *)PTR_DAT_057818e8;
  if ((bRam0000000005c277a3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c1ba0);
    FUN_012d0dc8(PTR_DAT_057a6648);
    bRam0000000005c277a3 = 1;
  }
  System_Object___ctor_23dfe5c(lVar6,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar5,*(undefined8 *)PTR_DAT_057c1ba0);
    *(long *)(lVar6 + 0x18) = lVar5;
    FUN_012d0d74((long *)(lVar6 + 0x18),lVar5);
    puVar8 = (undefined8 *)(lVar6 + 0x10);
    *puVar8 = uVar7;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

