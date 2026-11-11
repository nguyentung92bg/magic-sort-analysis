/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$.ctor
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection___ctor (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$.ctor
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection___ctor
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, bool
   isDaily, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection___ctor_1612708
               (long param_1,undefined8 param_2,uint param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((bRam0000000005c2447e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05809f00);
    FUN_012d0dc8(PTR_DAT_057823f8);
    bRam0000000005c2447e = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_2);
  puVar5 = (undefined8 *)PTR_DAT_057823f8;
  if ((param_3 & 1) != 0) {
    puVar5 = (undefined8 *)PTR_DAT_05809f00;
  }
  lVar4 = thunk_FUN_01320e48(*puVar5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Object___ctor_23dfe5c(lVar4,0);
  plVar6 = (long *)(param_1 + 0x40);
  *plVar6 = lVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

