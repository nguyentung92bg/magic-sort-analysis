/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$.ctor
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager___ctor (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* selectionSystem, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_GameplayInputSystem_o* gameplayInputSystem, Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* levelWinOrStuckSystem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$.ctor
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager___ctor
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* selectionSystem,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_GameplayInputSystem_o*
   gameplayInputSystem,
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o*
   levelWinOrStuckSystem, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager___ctor_1e8f618
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
  
  puVar2 = PTR_DAT_057f5cc8;
  if ((bRam0000000005c2813e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d6c0);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0578c968);
    FUN_012d0dc8(PTR_DAT_057aac50);
    FUN_012d0dc8(PTR_DAT_05765140);
    FUN_012d0dc8(PTR_DAT_057e3930);
    FUN_012d0dc8(PTR_DAT_05799708);
    FUN_012d0dc8(PTR_DAT_05784858);
    FUN_012d0dc8(PTR_DAT_057f5cc8);
    FUN_012d0dc8(PTR_DAT_057d7c10);
    FUN_012d0dc8(PTR_DAT_057cfa40);
    FUN_012d0dc8(PTR_DAT_057ced70);
    FUN_012d0dc8(PTR_DAT_057d73c0);
    FUN_012d0dc8(PTR_DAT_057cf748);
    FUN_012d0dc8(PTR_DAT_0579d6e0);
    FUN_012d0dc8(PTR_DAT_05819988);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057f5390);
    bRam0000000005c2813e = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057d7c10;
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(param_1 + 0x30) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x30),lVar5);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_05819988;
    puVar1 = PTR_DAT_057b8520;
    puVar2 = PTR_DAT_0578b048;
    if (lVar5 != 0) {
      System_Object___ctor_23dfe5c(lVar5,0);
      *(long *)(param_1 + 0x38) = lVar5;
      FUN_012d0d74((long *)(param_1 + 0x38),lVar5);
      *(undefined8 *)(param_1 + 0x20) = param_4;
      FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_4);
      *(undefined8 *)(param_1 + 0x28) = param_5;
      FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_5);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05799708,0),
         puVar1 = PTR_DAT_057ced70, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057e3930,0),
           puVar1 = PTR_DAT_057cfa40, lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar6 != 0) &&
             (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05784858,0),
             puVar3 = PTR_DAT_0579d6e0, puVar1 = PTR_DAT_0577d6c0, lVar5 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
            lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar3);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if ((lVar6 != 0) &&
               (System_Action_Int32Enum____ctor_1646b94
                          (lVar6,param_1,*(undefined8 *)PTR_DAT_05765140,0),
               puVar1 = PTR_DAT_057cf748, lVar5 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                        (lVar5,lVar6,*(undefined8 *)PTR_DAT_057f5390);
              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar1);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if ((lVar6 != 0) &&
                 (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057aac50,0),
                 puVar1 = PTR_DAT_057d73c0, lVar5 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                          (lVar5,lVar6,0);
                lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar1);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if ((lVar6 != 0) &&
                   (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_0578c968,0),
                   lVar5 != 0)) {
                  if ((bRam0000000005c3aa34 & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
                    bRam0000000005c3aa34 = 1;
                  }
                  puVar2 = PTR_DAT_0578b048;
                  lVar9 = *(long *)(lVar5 + 0x20);
                  while ((plVar7 = (long *)System_Delegate__Combine_23e3964(lVar9,lVar6,0),
                         plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar2))) {
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

