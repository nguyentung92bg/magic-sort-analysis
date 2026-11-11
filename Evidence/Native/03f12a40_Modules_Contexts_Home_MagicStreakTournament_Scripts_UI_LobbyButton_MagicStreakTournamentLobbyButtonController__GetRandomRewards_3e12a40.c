/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$GetRandomRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__GetRandomRewards (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$GetRandomRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__GetRandomRewards
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__GetRandomRewards_3e12a40
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_05781050;
  if ((bRam0000000005c38094 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05782db8);
    FUN_012d0dc8(PTR_DAT_057783a8);
    FUN_012d0dc8(PTR_DAT_057cfa78);
    FUN_012d0dc8(PTR_DAT_05810900);
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    FUN_012d0dc8(PTR_DAT_0575ece8);
    FUN_012d0dc8(PTR_DAT_0578d3d0);
    bRam0000000005c38094 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0575eb20;
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057994c8);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_05766c50;
    if (lVar6 != 0) {
      Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = _UNK_043e5b80;
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar6;
          FUN_012d0d74(plVar7,lVar6);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar5,lVar6);
        }
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar6 != 0) {
          Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar6,0);
          *(undefined8 *)(lVar6 + 0x10) = _UNK_04339c18;
          uStack_38 = 0;
          System_TimeSpan___ctor_26996d8(&uStack_38,0,0,0x14,0,0);
          *(undefined8 *)(lVar6 + 0x18) = uStack_38;
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar6;
              FUN_012d0d74(plVar7,lVar6);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar5,lVar6);
            }
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar6 != 0) {
              Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar6,0);
              *(undefined8 *)(lVar6 + 0x10) = _UNK_043e5b88;
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar3;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = lVar6;
                  FUN_012d0d74(plVar7,lVar6);
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar5,lVar6);
                }
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar6 != 0) {
                  Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar6,0);
                  *(undefined8 *)(lVar6 + 0x10) = _UNK_043e5b90;
                  lVar8 = *(long *)(lVar5 + 0x10);
                  lVar9 = *(long *)puVar3;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar7 = lVar6;
                      FUN_012d0d74(plVar7,lVar6);
                    }
                    else {
                      (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                                (lVar5,lVar6);
                    }
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar6 != 0) {
                      Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4
                                (lVar6,0);
                      *(undefined8 *)(lVar6 + 0x10) = _UNK_043e5b98;
                      lVar8 = *(long *)(lVar5 + 0x10);
                      lVar9 = *(long *)puVar3;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      puVar2 = PTR_DAT_0578d3d0;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar7 = lVar6;
                          FUN_012d0d74(plVar7,lVar6);
                        }
                        else {
                          (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) +
                                      8))(lVar5,lVar6);
                        }
                        uVar4 = UnityEngine_Random__Range_383a650(1,*(int *)(lVar5 + 0x18) + 1,0);
                        lVar6 = *(long *)puVar2;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_0130472c(lVar6);
                          lVar6 = *(long *)puVar2;
                        }
                        puVar3 = PTR_DAT_05810900;
                        lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_0130472c(lVar6);
                            lVar6 = *(long *)puVar2;
                          }
                          uVar10 = **(undefined8 **)(lVar6 + 0xb8);
                          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if (lVar8 == 0) goto LAB_03f12ed8;
                          System_Func_object__float____ctor_338234c
                                    (lVar8,uVar10,*(undefined8 *)PTR_DAT_0575ece8,0);
                          plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                          *plVar7 = lVar8;
                          FUN_012d0d74(plVar7,lVar8);
                        }
                        puVar3 = PTR_DAT_057cfa78;
                        puVar2 = PTR_DAT_057783a8;
                        uVar10 = System_Linq_Enumerable__OrderBy_object__float__2423864
                                           (lVar5,lVar8,*(undefined8 *)PTR_DAT_05782db8);
                        uVar10 = System_Linq_Enumerable__ToList_object__242f814
                                           (uVar10,*(undefined8 *)puVar3);
                        uVar10 = System_Linq_Enumerable__Take_object__242c058
                                           (uVar10,uVar4,*(undefined8 *)puVar2);
                        System_Linq_Enumerable__ToList_object__242f814(uVar10,*(undefined8 *)puVar3)
                        ;
                        return;
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
LAB_03f12ed8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

