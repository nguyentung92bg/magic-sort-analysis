/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameStageLevelsData$$GetLevel
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData__GetLevel (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameStageLevelsData$$GetLevel
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData__GetLevel
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData_o* __this, int32_t index,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData__GetLevel_218c8a8
          (long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  if ((bRam0000000005c29d92 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057767b0);
    FUN_012d0dc8(PTR_DAT_057f2b80);
    bRam0000000005c29d92 = 1;
  }
  puVar1 = PTR_DAT_05791040;
  if (-1 < (int)param_2) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((int)param_2 < *(int *)(lVar5 + 0x18)) {
      if (*(uint *)(lVar5 + 0x18) <= param_2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,param_2,*(undefined8 *)PTR_DAT_057f2b80);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        if (param_2 < *(uint *)(lVar5 + 0x18)) {
          return *(undefined8 *)(lVar5 + (long)(int)param_2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  if ((bRam0000000005c29d93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7f20);
    FUN_012d0dc8(PTR_DAT_05791040);
    bRam0000000005c29d93 = 1;
  }
  puVar2 = PTR_DAT_057a7f20;
  lVar5 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar8 = *(long *)puVar2;
  if ((bRam0000000005c2bdac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791040);
    bRam0000000005c2bdac = 1;
  }
  if ((lVar5 != 0) &&
     (iVar3 = (**(code **)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 8))(lVar5),
     puVar1 = PTR_DAT_05791040, iVar3 != 0)) {
    lVar6 = *(long *)PTR_DAT_05791040;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar1;
    }
    plVar9 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    uVar4 = (**(code **)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 8))(lVar5);
    if (plVar9 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar9 + 0x198))(plVar9,0,uVar4,*(undefined8 *)(*plVar9 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x02777990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 8))(lVar5,uVar4);
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

