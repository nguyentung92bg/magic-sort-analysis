/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$Start
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__Start (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* levelAndLevelConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$Start
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__Start
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   levelAndLevelConfigModel, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__Start_1e8f014
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c28123 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a1b8);
    FUN_012d0dc8(PTR_DAT_05758128);
    FUN_012d0dc8(PTR_DAT_057f1238);
    FUN_012d0dc8(PTR_DAT_05809298);
    FUN_012d0dc8(PTR_DAT_0580af90);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057f4358);
    FUN_012d0dc8(PTR_DAT_057d1d20);
    FUN_012d0dc8(PTR_DAT_05764cc8);
    FUN_012d0dc8(PTR_DAT_05803768);
    FUN_012d0dc8(PTR_DAT_057d60f0);
    FUN_012d0dc8(PTR_DAT_057ef370);
    FUN_012d0dc8(PTR_DAT_0577b9e0);
    FUN_012d0dc8(PTR_DAT_057d8788);
    bRam0000000005c28123 = 1;
  }
  puVar1 = PTR_DAT_057d60f0;
  lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar4,*(undefined8 *)PTR_DAT_057f1238);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      System_Object___ctor_23dfe5c(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar3;
      FUN_012d0d74((undefined8 *)(lVar4 + 0x10),uVar3);
      plVar5 = (long *)(param_1 + 0x60);
      *plVar5 = lVar4;
      FUN_012d0d74(plVar5,lVar4);
      if (((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) && (*plVar5 != 0)) {
        Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Start_1e8f54c
                  (*plVar5,*(undefined4 *)(*(long *)(param_2 + 0x20) + 0x18));
        puVar1 = PTR_DAT_05758128;
        lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
          uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar4,*(undefined8 *)PTR_DAT_0580af90);
          *(undefined8 *)(param_1 + 0x48) = uVar3;
          FUN_012d0d74();
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections___ctor_2d954f0(lVar4,0)
            ;
            plVar6 = (long *)(param_1 + 0x40);
            *plVar6 = lVar4;
            FUN_012d0d74(plVar6,lVar4);
            puVar2 = PTR_DAT_057d1d20;
            if (*plVar6 != 0) {
              Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollections_2d94694
                        (*plVar6,param_2,1,0);
              lVar7 = *plVar6;
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_057ef370;
              if (lVar4 != 0) {
                Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler___ctor_1f17428
                          (lVar4,lVar7,param_2,0,0,0,0);
                plVar11 = (long *)(param_1 + 0x58);
                *plVar11 = lVar4;
                FUN_012d0d74(plVar11,lVar4);
                uVar8 = *(undefined8 *)(param_1 + 0x40);
                lVar4 = *plVar11;
                uVar3 = *(undefined8 *)(param_1 + 0x60);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                puVar2 = PTR_DAT_057d8788;
                if (lVar7 != 0) {
                  Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem___ctor_1610008
                            (lVar7,uVar8,lVar4,uVar3,0);
                  plVar11 = (long *)(param_1 + 0x10);
                  *plVar11 = lVar7;
                  FUN_012d0d74(plVar11,lVar7);
                  lVar7 = *plVar11;
                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar4 != 0) {
                    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem___ctor_16130c8
                              (lVar4,lVar7,1,0);
                    plVar11 = (long *)(param_1 + 0x30);
                    *plVar11 = lVar4;
                    FUN_012d0d74(plVar11,lVar4);
                    puVar2 = PTR_DAT_057f4358;
                    if (*(long *)(param_1 + 0x10) != 0) {
                      *(long *)(*(long *)(param_1 + 0x10) + 0x10) = *plVar11;
                      FUN_012d0d74();
                      lVar7 = *plVar6;
                      lVar12 = *plVar11;
                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                      if (lVar4 != 0) {
                        Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_GameplayInputSystem___ctor_16117c4
                                  (lVar4,lVar7,lVar12,0);
                        plVar9 = (long *)(param_1 + 0x50);
                        *plVar9 = lVar4;
                        FUN_012d0d74(plVar9,lVar4);
                        puVar2 = PTR_DAT_05803768;
                        if (*(long *)(param_1 + 0x48) != 0) {
                          *(long *)(*(long *)(param_1 + 0x48) + 0x10) = *plVar9;
                          FUN_012d0d74();
                          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                          puVar2 = PTR_DAT_0577a1b8;
                          if (lVar4 != 0) {
                            Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker___ctor_1610f3c
                                      (lVar4,0);
                            *(long *)(param_1 + 0x28) = lVar4;
                            FUN_012d0d74((long *)(param_1 + 0x28),lVar4);
                            uVar3 = *(undefined8 *)(param_1 + 0x30);
                            uVar8 = *(undefined8 *)(param_1 + 0x40);
                            uVar13 = *(undefined8 *)(param_1 + 0x50);
                            uVar14 = *(undefined8 *)(param_1 + 0x10);
                            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                            if (lVar4 != 0) {
                              Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager___ctor_1e8f618
                                        (lVar4,uVar3,uVar8,uVar13,uVar14);
                              plVar9 = (long *)(param_1 + 0x18);
                              *plVar9 = lVar4;
                              FUN_012d0d74(plVar9,lVar4);
                              puVar2 = PTR_DAT_05764cc8;
                              if (*(long *)(param_1 + 0x58) != 0) {
                                Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__EnterTheLevel_1f17540
                                          (*(long *)(param_1 + 0x58),0);
                                lVar12 = *plVar9;
                                lVar10 = *plVar6;
                                lVar7 = *plVar5;
                                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                puVar1 = PTR_DAT_0577b9e0;
                                puVar2 = PTR_DAT_0576aae0;
                                if (lVar4 != 0) {
                                  Modules_Contexts_GamePlay_Levels_Scripts_LevelStats___ctor_1f18670
                                            (lVar4,lVar12,lVar10,param_2,lVar7,0);
                                  plVar5 = (long *)(param_1 + 0x20);
                                  *plVar5 = lVar4;
                                  FUN_012d0d74(plVar5,lVar4);
                                  lVar7 = *plVar5;
                                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                  if (lVar4 != 0) {
                                    Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnManager___ctor_2147cbc
                                              (lVar4,lVar7,0);
                                    *(long *)(param_1 + 0x38) = lVar4;
                                    FUN_012d0d74((long *)(param_1 + 0x38),lVar4);
                                    if (*(long *)(param_1 + 0x20) != 0) {
                                      Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__SetInitialValues_1f190bc
                                                (*(long *)(param_1 + 0x20),0);
                                      if (*plVar11 != 0) {
                                        *(long *)(*plVar11 + 0x10) = *plVar5;
                                        FUN_012d0d74();
                                        if (*(long *)(param_2 + 0x28) == 0) {
                                          return;
                                        }
                                        if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                                            (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) +
                                                              0x18), lVar4 != 0)) &&
                                           ((lVar4 = 
                                                  Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                            (lVar4,*(undefined8 *)PTR_DAT_05809298),
                                            lVar4 != 0 &&
                                            ((*(long *)(param_2 + 0x28) != 0 &&
                                             (*(long *)(lVar4 + 0x68) != 0)))))) {
                                          uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20);
                                          plVar5 = *(long **)(*(long *)(lVar4 + 0x68) + 0x28);
                                          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0170bddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                            (**(code **)(*plVar5 + 0x558))
                                                      (plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560)
                                                      );
                                            return;
                                          }
                    /* WARNING: Subroutine does not return */
                                          FUN_012d0ef0(0,uVar3,0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

