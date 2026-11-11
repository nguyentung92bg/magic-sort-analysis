/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetLevelStats
System_Collections_Generic_Dictionary_string__object__o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelStats (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetLevelStats
   System_Collections_Generic_Dictionary_string__object__o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelStats
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelStats_1f196fc(long param_1)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_057a6648;
  if ((bRam0000000005c2864b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05812600);
    FUN_012d0dc8(PTR_DAT_057c1ba0);
    FUN_012d0dc8(PTR_DAT_057a6648);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580bde0);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_057ef900);
    FUN_012d0dc8(PTR_DAT_05787810);
    FUN_012d0dc8(PTR_DAT_0577f918);
    FUN_012d0dc8(PTR_DAT_05795310);
    FUN_012d0dc8(PTR_DAT_05798838);
    FUN_012d0dc8(PTR_DAT_057aeed8);
    FUN_012d0dc8(PTR_DAT_05792a60);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_057f81d8);
    FUN_012d0dc8(PTR_DAT_0575f2a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057fa818);
    FUN_012d0dc8(PTR_DAT_05778280);
    bRam0000000005c2864b = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar6 = PTR_DAT_05812600;
  puVar3 = PTR_DAT_057f16f8;
  puVar4 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_057caaf0;
  puVar1 = PTR_DAT_05798838;
  if (lVar7 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar7,*(undefined8 *)PTR_DAT_057c1ba0);
    uStack_54 = *(undefined4 *)(param_1 + 0x30);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar7,*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar6);
    uStack_58 = *(undefined4 *)(param_1 + 0x34);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar6);
    puVar1 = PTR_DAT_05795310;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar12 != 0)) {
      uStack_68 = *(undefined4 *)(lVar12 + 0x10);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
      puVar1 = PTR_DAT_057fa818;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar12 != 0)) {
        uStack_6c = *(undefined4 *)(lVar12 + 0x14);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
        puVar2 = PTR_DAT_057f81d8;
        puVar1 = PTR_DAT_057ef900;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar12 != 0)) {
          uStack_70 = *(undefined4 *)(lVar12 + 0x18);
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
          System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                    (lVar7,*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar6);
          uVar9 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x40),0);
          if ((uVar9 & 1) == 0) {
            System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                      (lVar7,*(undefined8 *)PTR_DAT_05778280,*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)puVar6);
          }
          uStack_54 = *(undefined4 *)(param_1 + 0xc4);
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
          System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                    (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
          puVar2 = PTR_DAT_0580bde0;
          puVar1 = PTR_DAT_05787810;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar12 != 0)) {
            uStack_58 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetCompletedBottleCount_2f6b6bc
                                  (lVar12,0);
            uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
            System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                      (lVar7,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar6);
            uVar9 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x50),0);
            if ((uVar9 & 1) == 0) {
              System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                        (lVar7,*(undefined8 *)PTR_DAT_0577f918,*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)puVar6);
            }
            plVar10 = (long *)FUN_012d0e38(*(undefined8 *)puVar2,0xd);
            uStack_54 = *(undefined4 *)(param_1 + 0x84);
            lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
            if (plVar10 != (long *)0x0) {
              if ((lVar12 != 0) &&
                 (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)
                 ) {
LAB_02019f14:
                uVar8 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
                FUN_012d0eb8(uVar8,0);
              }
              if ((int)plVar10[3] != 0) {
                plVar10[4] = lVar12;
                FUN_012d0d74(plVar10 + 4,lVar12);
                uStack_58 = *(undefined4 *)(param_1 + 0x88);
                lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
                if ((lVar12 != 0) &&
                   (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                   lVar11 == 0)) goto LAB_02019f14;
                if (1 < *(uint *)(plVar10 + 3)) {
                  plVar10[5] = lVar12;
                  FUN_012d0d74(plVar10 + 5,lVar12);
                  uStack_64 = *(undefined4 *)(param_1 + 0x80);
                  lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
                  if ((lVar12 != 0) &&
                     (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar11 == 0)) goto LAB_02019f14;
                  if (2 < *(uint *)(plVar10 + 3)) {
                    plVar10[6] = lVar12;
                    FUN_012d0d74(plVar10 + 6,lVar12);
                    uStack_68 = *(undefined4 *)(param_1 + 0x8c);
                    lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
                    if ((lVar12 != 0) &&
                       (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar11 == 0)) goto LAB_02019f14;
                    if (3 < *(uint *)(plVar10 + 3)) {
                      plVar10[7] = lVar12;
                      FUN_012d0d74(plVar10 + 7,lVar12);
                      uStack_6c = *(undefined4 *)(param_1 + 0x94);
                      lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
                      if ((lVar12 != 0) &&
                         (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar11 == 0)) goto LAB_02019f14;
                      if (4 < *(uint *)(plVar10 + 3)) {
                        plVar10[8] = lVar12;
                        FUN_012d0d74(plVar10 + 8,lVar12);
                        uStack_70 = *(undefined4 *)(param_1 + 0x98);
                        lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
                        if ((lVar12 != 0) &&
                           (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar11 == 0)) goto LAB_02019f14;
                        if (5 < *(uint *)(plVar10 + 3)) {
                          plVar10[9] = lVar12;
                          FUN_012d0d74(plVar10 + 9,lVar12);
                          uStack_74 = *(undefined4 *)(param_1 + 0x9c);
                          lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
                          if ((lVar12 != 0) &&
                             (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                             lVar11 == 0)) goto LAB_02019f14;
                          if (6 < *(uint *)(plVar10 + 3)) {
                            plVar10[10] = lVar12;
                            FUN_012d0d74(plVar10 + 10,lVar12);
                            uStack_78 = *(undefined4 *)(param_1 + 0xa0);
                            lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_78);
                            if ((lVar12 != 0) &&
                               (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar10 + 0x40))
                               , lVar11 == 0)) goto LAB_02019f14;
                            if (7 < *(uint *)(plVar10 + 3)) {
                              plVar10[0xb] = lVar12;
                              FUN_012d0d74(plVar10 + 0xb,lVar12);
                              uStack_7c = *(undefined4 *)(param_1 + 0xa4);
                              lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
                              if ((lVar12 != 0) &&
                                 (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)
                                                                      (*plVar10 + 0x40)),
                                 lVar11 == 0)) goto LAB_02019f14;
                              if (8 < *(uint *)(plVar10 + 3)) {
                                plVar10[0xc] = lVar12;
                                FUN_012d0d74(plVar10 + 0xc,lVar12);
                                uStack_80 = *(undefined4 *)(param_1 + 0xa8);
                                lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
                                if ((lVar12 != 0) &&
                                   (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)
                                                                        (*plVar10 + 0x40)),
                                   lVar11 == 0)) goto LAB_02019f14;
                                if (9 < *(uint *)(plVar10 + 3)) {
                                  plVar10[0xd] = lVar12;
                                  FUN_012d0d74(plVar10 + 0xd,lVar12);
                                  uStack_84 = *(undefined4 *)(param_1 + 0xac);
                                  lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_84);
                                  if ((lVar12 != 0) &&
                                     (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)
                                                                          (*plVar10 + 0x40)),
                                     lVar11 == 0)) goto LAB_02019f14;
                                  if (10 < *(uint *)(plVar10 + 3)) {
                                    plVar10[0xe] = lVar12;
                                    FUN_012d0d74(plVar10 + 0xe,lVar12);
                                    uStack_88 = *(undefined4 *)(param_1 + 0xb0);
                                    lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
                                    if ((lVar12 != 0) &&
                                       (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)
                                                                            (*plVar10 + 0x40)),
                                       lVar11 == 0)) goto LAB_02019f14;
                                    if (0xb < *(uint *)(plVar10 + 3)) {
                                      plVar10[0xf] = lVar12;
                                      FUN_012d0d74(plVar10 + 0xf,lVar12);
                                      uStack_8c = *(undefined4 *)(param_1 + 0xb4);
                                      lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_8c);
                                      if ((lVar12 != 0) &&
                                         (lVar11 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)
                                                                              (*plVar10 + 0x40)),
                                         lVar11 == 0)) goto LAB_02019f14;
                                      puVar5 = PTR_DAT_0580a230;
                                      puVar3 = PTR_DAT_057aeed8;
                                      puVar2 = PTR_DAT_05792a60;
                                      puVar1 = PTR_DAT_0575f2a0;
                                      if (0xc < *(uint *)(plVar10 + 3)) {
                                        plVar10[0x10] = lVar12;
                                        FUN_012d0d74(plVar10 + 0x10,lVar12);
                                        uVar8 = System_String__Format_1ed1640
                                                          (*(undefined8 *)puVar1,plVar10,0);
                                        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                                                  (lVar7,*(undefined8 *)puVar2,uVar8,
                                                   *(undefined8 *)puVar6);
                                        uStack_90 = *(undefined4 *)(param_1 + 0xf8);
                                        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90)
                                        ;
                                        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                                                  (lVar7,*(undefined8 *)puVar5,uVar8,
                                                   *(undefined8 *)puVar6);
                                        uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten_1f19f20
                                                          (param_1);
                                        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                                                  (lVar7,*(undefined8 *)puVar3,uVar8,
                                                   *(undefined8 *)puVar6);
                                        return lVar7;
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
              FUN_012d0ef8();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

