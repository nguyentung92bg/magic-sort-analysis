/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetDailyLevelStats
System_Collections_Generic_Dictionary_string__object__o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, int32_t levelState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetDailyLevelStats
   System_Collections_Generic_Dictionary_string__object__o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, int32_t levelState, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_057a6648;
  if ((bRam0000000005c2864c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05812600);
    FUN_012d0dc8(PTR_DAT_057c1ba0);
    FUN_012d0dc8(PTR_DAT_057a6648);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_057a3040);
    FUN_012d0dc8(PTR_DAT_057ef900);
    FUN_012d0dc8(PTR_DAT_057c3218);
    FUN_012d0dc8(PTR_DAT_05787810);
    FUN_012d0dc8(PTR_DAT_0577f918);
    FUN_012d0dc8(PTR_DAT_057e5598);
    FUN_012d0dc8(PTR_DAT_057a8558);
    FUN_012d0dc8(PTR_DAT_058120e8);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_057a3170);
    FUN_012d0dc8(PTR_DAT_057fe5c0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05778280);
    bRam0000000005c2864c = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar6 = PTR_DAT_05812600;
  puVar3 = PTR_DAT_057f16f8;
  puVar2 = PTR_DAT_057ef900;
  puVar4 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057caaf0;
  if (lVar7 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar7,*(undefined8 *)PTR_DAT_057c1ba0);
    uStack_54 = *(undefined4 *)(param_1 + 0x30);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
    uStack_58 = *(undefined4 *)(param_1 + 0x38);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar6);
    uVar9 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x40),0);
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (lVar7,*(undefined8 *)PTR_DAT_05778280,*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)puVar6);
    }
    uStack_54 = *(undefined4 *)(param_1 + 0xc4);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar7,*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar6);
    puVar2 = PTR_DAT_057fe5c0;
    puVar1 = PTR_DAT_057a3170;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar10 != 0)) {
      uStack_58 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetEmptyBottleCount_2f6b5b8
                            (lVar10,0);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
      uStack_5c = *(undefined4 *)(param_1 + 0x48);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_5c);
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (lVar7,*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar6);
      puVar5 = PTR_DAT_058120e8;
      puVar3 = PTR_DAT_057c3218;
      puVar2 = PTR_DAT_057a3040;
      puVar1 = PTR_DAT_05787810;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar10 != 0)) {
        uStack_60 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetCompletedBottleCount_2f6b6bc
                              (lVar10,0);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_60);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
        uVar9 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x50),0);
        if ((uVar9 & 1) == 0) {
          System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                    (lVar7,*(undefined8 *)PTR_DAT_0577f918,*(undefined8 *)(param_1 + 0x50),
                     *(undefined8 *)puVar6);
        }
        uVar8 = Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo__GetFormattedDate_4105c70
                          (param_1 + 0xd8,0);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar5,uVar8,*(undefined8 *)puVar6);
        uStack_54 = *(undefined4 *)(param_1 + 0xd0);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar6);
        uStack_58 = *(undefined4 *)(param_1 + 0xcc);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar6);
        if (((param_2 == 5) || (param_2 == 2)) && (*(int *)(param_1 + 0xf4) == 2)) {
          uStack_54 = *(undefined4 *)(param_1 + 0xf0);
        }
        else {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0201a524;
          uStack_54 = Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__GetRemainingTime_1e90948
                                (*(long *)(param_1 + 0x28),0);
        }
        puVar3 = PTR_DAT_0580a230;
        puVar2 = PTR_DAT_057e5598;
        puVar1 = PTR_DAT_057a8558;
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
        uStack_54 = *(undefined4 *)(param_1 + 0xf8);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar6);
        uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten_1f19f20
                          (param_1);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar6);
        return lVar7;
      }
    }
  }
LAB_0201a524:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

