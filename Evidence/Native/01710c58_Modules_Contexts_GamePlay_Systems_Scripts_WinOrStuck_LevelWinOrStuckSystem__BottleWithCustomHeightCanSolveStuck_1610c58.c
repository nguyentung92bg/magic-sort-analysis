/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$BottleWithCustomHeightCanSolveStuck
bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__BottleWithCustomHeightCanSolveStuck (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01710ea0) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$BottleWithCustomHeightCanSolveStuck
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__BottleWithCustomHeightCanSolveStuck
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, int32_t
   bottleHeight, const MethodInfo* method); */

byte Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__BottleWithCustomHeightCanSolveStuck_1610c58
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2446c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057a2960);
    FUN_012d0dc8(PTR_DAT_058066c8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_057be708);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057db558);
    bRam0000000005c2446c = 1;
  }
  puVar5 = PTR_DAT_058066c8;
  puVar4 = PTR_DAT_057d0ba8;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_057a2960;
  puVar1 = PTR_DAT_05768d80;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (((*(long *)(param_1 + 0x18) == 0) ||
      (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 == 0)) ||
     (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_a8,lVar7,*(undefined8 *)PTR_DAT_057db558);
  bVar8 = 0;
  uStack_68 = uStack_a0;
  uStack_70 = uStack_a8;
  lStack_60 = lStack_98;
  do {
    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_70,*(undefined8 *)puVar5);
    if ((uVar6 & 1) == 0) {
      uVar9 = 7;
      break;
    }
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a8,lStack_60,*(undefined8 *)puVar1);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    lStack_80 = lStack_98;
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_90,*(undefined8 *)puVar3);
      lVar7 = lStack_80;
      if ((uVar6 & 1) == 0) {
        uVar9 = 2;
        goto LAB_01710df4;
      }
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                        (lStack_80,0);
    } while ((((uVar6 & 1) == 0) ||
             (lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                (lVar7,0), lVar7 == 0)) || (param_2 < *(int *)(lVar7 + 0x40)));
    bVar8 = 1;
    uVar9 = 6;
LAB_01710df4:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_90,*(undefined8 *)puVar4);
  } while ((uVar9 | 2) == 2);
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar2);
  return uVar9 == 6 & bVar8;
}

