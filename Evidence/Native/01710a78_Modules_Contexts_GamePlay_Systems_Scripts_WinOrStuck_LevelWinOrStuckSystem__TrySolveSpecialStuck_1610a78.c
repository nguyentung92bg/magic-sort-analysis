/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$TrySolveSpecialStuck
void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__TrySolveSpecialStuck (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$TrySolveSpecialStuck
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__TrySolveSpecialStuck
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__TrySolveSpecialStuck_1610a78
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2446b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0578c708);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2446b = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
    uVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSingleColored_2f6c238
                      (lVar4,0);
    puVar3 = PTR_DAT_057a7f80;
    puVar2 = PTR_DAT_0578c708;
    puVar1 = PTR_DAT_057605b8;
    if ((uVar5 & 1) != 0) {
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_01710be4;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_057b7918);
      while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_48,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
        plVar6 = (long *)thunk_FUN_01320d5c(uStack_38,*(undefined8 *)puVar2);
        if (plVar6 != (long *)0x0) {
          lVar8 = *plVar6;
          lVar4 = *(long *)puVar2;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_01710bb4;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plVar6,lVar4,0);
LAB_01710bb4:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar1);
    }
    return;
  }
LAB_01710be4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

