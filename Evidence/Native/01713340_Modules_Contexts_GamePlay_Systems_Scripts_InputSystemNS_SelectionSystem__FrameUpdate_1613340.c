/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$FrameUpdate
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__FrameUpdate (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, float elapsedSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$FrameUpdate
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__FrameUpdate
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, float
   elapsedSeconds, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__FrameUpdate_1613340
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam0000000005c2448c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057df868);
    FUN_012d0dc8(PTR_DAT_057dac98);
    FUN_012d0dc8(PTR_DAT_057e1a68);
    FUN_012d0dc8(PTR_DAT_05802fc0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2448c = 1;
  }
  puVar4 = PTR_DAT_05802fc0;
  puVar3 = PTR_DAT_057e1a68;
  puVar2 = PTR_DAT_057df868;
  puVar1 = PTR_DAT_057b8520;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x18) + -1;
    if (iVar6 < 0) {
      return;
    }
    do {
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar6,*(undefined8 *)puVar3);
      if (lVar5 == 0) break;
      if (*(char *)(lVar5 + 0x38) != '\0') {
        if (*(long *)(param_1 + 0x20) == 0) break;
        System_Collections_Generic_List_object___RemoveAt_21fe320
                  (*(long *)(param_1 + 0x20),iVar6,*(undefined8 *)puVar2);
        if (*(long *)(lVar5 + 0x30) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar4);
          if (lVar5 == 0) break;
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
          if (*(long *)(param_1 + 0x30) == 0) break;
          *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x48) = 1;
          Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyLevelWinOrHasNoMove_16102f8
                    ();
        }
      }
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        return;
      }
      lVar5 = *(long *)(param_1 + 0x20);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

