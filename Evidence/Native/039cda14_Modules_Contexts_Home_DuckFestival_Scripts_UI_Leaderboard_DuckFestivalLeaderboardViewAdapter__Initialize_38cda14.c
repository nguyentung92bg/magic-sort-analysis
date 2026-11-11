/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$Initialize
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__Initialize (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$Initialize
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__Initialize
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__Initialize_38cda14
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000005c34b80 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05796648);
    FUN_012d0dc8(PTR_DAT_057f6150);
    bRam0000000005c34b80 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
    puVar1 = PTR_DAT_057f6150;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0576aae0;
      if (lVar4 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar4,*(undefined8 *)PTR_DAT_05796648);
        plVar3 = (long *)(param_1 + 0x40);
        *plVar3 = lVar4;
        FUN_012d0d74(plVar3,lVar4);
        if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
            (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
           (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar4,*(undefined8 *)PTR_DAT_0577fc18), lVar4 != 0)) {
          uVar5 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderboardPlayerViewModels_1b972e4
                            (lVar4,0);
          *(undefined8 *)(param_1 + 0x40) = uVar5;
          FUN_012d0d74(plVar3,uVar5);
          lVar4 = *(long *)(param_1 + 0x38);
          if (lVar4 != 0) {
            lVar6 = *plVar3;
            if ((bRam0000000005c34b7a & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057e6c38);
              bRam0000000005c34b7a = 1;
            }
            puVar1 = PTR_DAT_057e6c38;
            if (lVar6 != 0) {
              lVar7 = *(long *)(lVar4 + 0x18);
              lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar6,0,*(undefined8 *)PTR_DAT_057e6c38);
              if (lVar2 != 0) {
                uVar5 = *(undefined8 *)(lVar2 + 0x40);
                lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar6,0,*(undefined8 *)puVar1);
                if ((lVar2 != 0) && (lVar7 != 0)) {
                  Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOthersProfileImage_297fc40
                            (lVar7,uVar5,*(undefined8 *)(lVar2 + 0x48),0);
                  lVar7 = *(long *)(lVar4 + 0x20);
                  lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar6,1,*(undefined8 *)puVar1);
                  if (lVar2 != 0) {
                    uVar5 = *(undefined8 *)(lVar2 + 0x40);
                    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                      (lVar6,1,*(undefined8 *)puVar1);
                    if ((lVar2 != 0) && (lVar7 != 0)) {
                      Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOthersProfileImage_297fc40
                                (lVar7,uVar5,*(undefined8 *)(lVar2 + 0x48),0);
                      lVar7 = *(long *)(lVar4 + 0x28);
                      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                        (lVar6,2,*(undefined8 *)puVar1);
                      if (lVar2 != 0) {
                        uVar5 = *(undefined8 *)(lVar2 + 0x40);
                        lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                          (lVar6,2,*(undefined8 *)puVar1);
                        if ((lVar2 != 0) && (lVar7 != 0)) {
                          Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOthersProfileImage_297fc40
                                    (lVar7,uVar5,*(undefined8 *)(lVar2 + 0x48),0);
                          plVar3 = *(long **)(lVar4 + 0x30);
                          lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                            (lVar6,0,*(undefined8 *)puVar1);
                          if ((lVar2 != 0) && (plVar3 != (long *)0x0)) {
                            (**(code **)(*plVar3 + 0x558))
                                      (plVar3,*(undefined8 *)(lVar2 + 0x38),
                                       *(undefined8 *)(*plVar3 + 0x560));
                            plVar3 = *(long **)(lVar4 + 0x38);
                            lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                              (lVar6,1,*(undefined8 *)puVar1);
                            if ((lVar2 != 0) && (plVar3 != (long *)0x0)) {
                              (**(code **)(*plVar3 + 0x558))
                                        (plVar3,*(undefined8 *)(lVar2 + 0x38),
                                         *(undefined8 *)(*plVar3 + 0x560));
                              plVar3 = *(long **)(lVar4 + 0x40);
                              lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                (lVar6,2,*(undefined8 *)puVar1);
                              if ((lVar4 != 0) && (plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x039cd68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (**(code **)(*plVar3 + 0x558))
                                          (plVar3,*(undefined8 *)(lVar4 + 0x38),
                                           *(undefined8 *)(*plVar3 + 0x560));
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
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

