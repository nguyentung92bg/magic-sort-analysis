/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameStageLevelsData$$GetRandomLevel
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData__GetRandomLevel (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameStageLevelsData$$GetRandomLevel
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData__GetRandomLevel
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData__GetRandomLevel_218c92c
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_05791040;
  if ((bRam0000000005c29d93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7f20);
    FUN_012d0dc8(PTR_DAT_05791040);
    bRam0000000005c29d93 = 1;
  }
  puVar2 = PTR_DAT_057a7f20;
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar7 = *(long *)puVar2;
  if ((bRam0000000005c2bdac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791040);
    bRam0000000005c2bdac = 1;
  }
  if ((lVar8 != 0) &&
     (iVar3 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 8) + 8))(lVar8),
     puVar1 = PTR_DAT_05791040, iVar3 != 0)) {
    lVar5 = *(long *)PTR_DAT_05791040;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar1;
    }
    plVar9 = (long *)**(undefined8 **)(lVar5 + 0xb8);
    uVar4 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 8) + 8))(lVar8);
    if (plVar9 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar9 + 0x198))(plVar9,0,uVar4,*(undefined8 *)(*plVar9 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x02777990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 8))(lVar8,uVar4);
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

