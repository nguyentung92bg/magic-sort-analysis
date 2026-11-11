/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$Initialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__Initialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$Initialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__Initialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__Initialize_2752af4
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_057c6be8;
  if ((bRam0000000005c2c708 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1cf0);
    FUN_012d0dc8(PTR_DAT_057c6be8);
    bRam0000000005c2c708 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057a1cf0);
    plVar6 = (long *)(param_1 + 0x10);
    *plVar6 = lVar5;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

