/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$.ctor
void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats___ctor (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* boosterManager, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* levelAndLevelConfigModel, Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* levelTimer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$.ctor
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats___ctor
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this,
   Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* boosterManager,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   levelAndLevelConfigModel, Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o*
   levelTimer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats___ctor_1f18670
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_5);
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c28648 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05774020);
    FUN_012d0dc8(PTR_DAT_05815cc0);
    FUN_012d0dc8(PTR_DAT_057dc028);
    FUN_012d0dc8(PTR_DAT_05772500);
    FUN_012d0dc8(PTR_DAT_0575dd58);
    FUN_012d0dc8(PTR_DAT_05789ba0);
    FUN_012d0dc8(PTR_DAT_057c3360);
    FUN_012d0dc8(PTR_DAT_05764640);
    FUN_012d0dc8(PTR_DAT_057b3990);
    FUN_012d0dc8(PTR_DAT_057c7680);
    FUN_012d0dc8(PTR_DAT_057f4dd0);
    FUN_012d0dc8(PTR_DAT_057afd10);
    FUN_012d0dc8(PTR_DAT_057aefe8);
    FUN_012d0dc8(PTR_DAT_057f23b0);
    FUN_012d0dc8(PTR_DAT_05791600);
    FUN_012d0dc8(PTR_DAT_05770210);
    FUN_012d0dc8(PTR_DAT_057b7f08);
    FUN_012d0dc8(PTR_DAT_057fd728);
    FUN_012d0dc8(PTR_DAT_057ce538);
    FUN_012d0dc8(PTR_DAT_057b7500);
    FUN_012d0dc8(PTR_DAT_0576b0e0);
    FUN_012d0dc8(PTR_DAT_05781138);
    FUN_012d0dc8(PTR_DAT_057eb630);
    FUN_012d0dc8(PTR_DAT_05767ec8);
    FUN_012d0dc8(PTR_DAT_05775628);
    FUN_012d0dc8(PTR_DAT_057d6390);
    FUN_012d0dc8(PTR_DAT_0581bd48);
    FUN_012d0dc8(PTR_DAT_05803830);
    FUN_012d0dc8(PTR_DAT_057eaff0);
    FUN_012d0dc8(PTR_DAT_057923d0);
    FUN_012d0dc8(PTR_DAT_0579fc20);
    FUN_012d0dc8(PTR_DAT_05802fc0);
    FUN_012d0dc8(PTR_DAT_05815f90);
    FUN_012d0dc8(PTR_DAT_05760f88);
    FUN_012d0dc8(PTR_DAT_05817e28);
    FUN_012d0dc8(PTR_DAT_057884b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c28648 = 1;
  }
  puVar3 = PTR_DAT_0578b048;
  puVar2 = PTR_DAT_05781138;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_0575dd58,0),
     puVar1 = PTR_DAT_057923d0, lVar5 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar6 != 0) &&
       (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057f4dd0,0),
       puVar1 = PTR_DAT_0576b0e0, lVar5 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057dc028,0),
         puVar1 = PTR_DAT_05803830, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057b3990,0),
           puVar1 = PTR_DAT_05760f88, lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if ((lVar6 != 0) &&
             (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05770210,0),
             puVar1 = PTR_DAT_05775628, lVar5 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
            lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if ((lVar6 != 0) &&
               (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057c3360,0),
               puVar1 = PTR_DAT_05767ec8, lVar5 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                        (lVar5,lVar6,0);
              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar1);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              if ((lVar6 != 0) &&
                 (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05789ba0,0),
                 puVar1 = PTR_DAT_057884b8, lVar5 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                          (lVar5,lVar6,0);
                lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar1);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if ((lVar6 != 0) &&
                   (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057fd728,0),
                   puVar1 = PTR_DAT_057b7500, lVar5 != 0)) {
                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                            (lVar5,lVar6,0);
                  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar1);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                  if ((lVar6 != 0) &&
                     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05815cc0,0),
                     puVar1 = PTR_DAT_05817e28, lVar5 != 0)) {
                    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                              (lVar5,lVar6,0);
                    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                      (*(undefined8 *)puVar1);
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    if ((lVar6 != 0) &&
                       (System_Action___ctor_21239bc
                                  (lVar6,param_1,*(undefined8 *)PTR_DAT_057b7f08,0),
                       puVar1 = PTR_DAT_05802fc0, lVar5 != 0)) {
                      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                (lVar5,lVar6,0);
                      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                        (*(undefined8 *)puVar1);
                      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                      if ((lVar6 != 0) &&
                         (System_Action___ctor_21239bc
                                    (lVar6,param_1,*(undefined8 *)PTR_DAT_057aefe8,0),
                         puVar1 = PTR_DAT_057eaff0, lVar5 != 0)) {
                        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                  (lVar5,lVar6,0);
                        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                          (*(undefined8 *)puVar1);
                        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                        if ((lVar6 != 0) &&
                           (System_Action___ctor_21239bc
                                      (lVar6,param_1,*(undefined8 *)PTR_DAT_057c7680,0),
                           puVar1 = PTR_DAT_0581bd48, lVar5 != 0)) {
                          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                    (lVar5,lVar6,0);
                          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                            (*(undefined8 *)puVar1);
                          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if ((lVar6 != 0) &&
                             (System_Action___ctor_21239bc
                                        (lVar6,param_1,*(undefined8 *)PTR_DAT_05764640,0),
                             puVar1 = PTR_DAT_0579fc20, lVar5 != 0)) {
                            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                      (lVar5,lVar6,0);
                            lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                              (*(undefined8 *)puVar1);
                            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                            if ((lVar6 != 0) &&
                               (System_Action___ctor_21239bc
                                          (lVar6,param_1,*(undefined8 *)PTR_DAT_057afd10,0),
                               puVar1 = PTR_DAT_057ce538, lVar5 != 0)) {
                              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                        (lVar5,lVar6,0);
                              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                                (*(undefined8 *)puVar1);
                              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                              if ((lVar6 != 0) &&
                                 (System_Action___ctor_21239bc
                                            (lVar6,param_1,*(undefined8 *)PTR_DAT_05774020,0),
                                 puVar1 = PTR_DAT_057eb630, lVar5 != 0)) {
                                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                          (lVar5,lVar6,0);
                                lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                                  (*(undefined8 *)puVar1);
                                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                                if ((lVar6 != 0) &&
                                   (System_Action___ctor_21239bc
                                              (lVar6,param_1,*(undefined8 *)PTR_DAT_05772500,0),
                                   puVar1 = PTR_DAT_057d6390, lVar5 != 0)) {
                                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                            (lVar5,lVar6,0);
                                  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                                    (*(undefined8 *)puVar1);
                                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                                  if ((lVar6 != 0) &&
                                     (System_Action___ctor_21239bc
                                                (lVar6,param_1,*(undefined8 *)PTR_DAT_05791600,0),
                                     puVar1 = PTR_DAT_05815f90, lVar5 != 0)) {
                                    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                              (lVar5,lVar6,0);
                                    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                                      (*(undefined8 *)puVar1);
                                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                                    if ((lVar6 != 0) &&
                                       (System_Action___ctor_21239bc
                                                  (lVar6,param_1,*(undefined8 *)PTR_DAT_057f23b0,0),
                                       lVar5 != 0)) {
                                      if ((bRam0000000005c3aa34 & 1) == 0) {
                                        FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
                                        bRam0000000005c3aa34 = 1;
                                      }
                                      puVar1 = PTR_DAT_0578b048;
                                      lVar9 = *(long *)(lVar5 + 0x20);
                                      while ((plVar7 = (long *)System_Delegate__Combine_23e3964
                                                                         (lVar9,lVar6,0),
                                             plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar1)))
                                      {
                                        lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar7,lVar9);
                                        bVar4 = lVar9 == lVar8;
                                        lVar9 = lVar8;
                                        if (bVar4) {
                                          return;
                                        }
                                      }
                    /* WARNING: Subroutine does not return */
                                      FUN_012d1288(plVar7);
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

