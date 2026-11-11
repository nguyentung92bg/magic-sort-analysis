/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$Start
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Start (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* levelAndLevelConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$Start
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Start
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   levelAndLevelConfigModel, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__Start_1f1c634
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2865c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a1b8);
    FUN_012d0dc8(PTR_DAT_05758128);
    FUN_012d0dc8(PTR_DAT_05809298);
    FUN_012d0dc8(PTR_DAT_0580af90);
    FUN_012d0dc8(PTR_DAT_057851b8);
    FUN_012d0dc8(PTR_DAT_05761608);
    FUN_012d0dc8(PTR_DAT_057f1040);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057f4358);
    FUN_012d0dc8(PTR_DAT_057d1d20);
    FUN_012d0dc8(PTR_DAT_05764cc8);
    FUN_012d0dc8(PTR_DAT_05803768);
    FUN_012d0dc8(PTR_DAT_057ef370);
    FUN_012d0dc8(PTR_DAT_0577b9e0);
    FUN_012d0dc8(PTR_DAT_057d8788);
    FUN_012d0dc8(PTR_DAT_057e57f8);
    FUN_012d0dc8(PTR_DAT_0576f8d0);
    bRam0000000005c2865c = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_05809298), param_2 != 0)) {
    if (*(long *)(param_2 + 0x28) != 0) {
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_0201cc94;
      Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetLevelId_160ce84
                (*(long *)(lVar4 + 0x58),*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20),0);
    }
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057851b8);
      puVar10 = (undefined8 *)(param_1 + 0x50);
      *puVar10 = uVar6;
      FUN_012d0d74(puVar10,uVar6);
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
        uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_05761608);
        puVar11 = (undefined8 *)(param_1 + 0x80);
        *puVar11 = uVar6;
        FUN_012d0d74(puVar11,uVar6);
        if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
           (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
          lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar5,*(undefined8 *)PTR_DAT_057f1040);
          plVar14 = (long *)(param_1 + 0x88);
          *plVar14 = lVar5;
          FUN_012d0d74(plVar14,lVar5);
          puVar1 = PTR_DAT_05758128;
          if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
             (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
            uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar5,*(undefined8 *)PTR_DAT_0580af90);
            *(undefined8 *)(param_1 + 0x48) = uVar6;
            FUN_012d0d74();
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections___ctor_2d954f0
                        (lVar5,0);
              plVar9 = (long *)(param_1 + 0x40);
              *plVar9 = lVar5;
              FUN_012d0d74(plVar9,lVar5);
              puVar2 = PTR_DAT_057d1d20;
              if (*plVar9 != 0) {
                Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollections_2d94694
                          (*plVar9,param_2,0,0);
                lVar18 = *plVar9;
                uVar16 = *puVar10;
                uVar6 = *puVar11;
                lVar17 = *plVar14;
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                puVar2 = PTR_DAT_057ef370;
                if (lVar5 != 0) {
                  Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler___ctor_1f17428
                            (lVar5,lVar18,param_2,uVar16,uVar6,lVar17);
                  plVar12 = (long *)(param_1 + 0x70);
                  *plVar12 = lVar5;
                  FUN_012d0d74(plVar12,lVar5);
                  uVar6 = *(undefined8 *)(param_1 + 0x40);
                  lVar17 = *plVar12;
                  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  puVar2 = PTR_DAT_057d8788;
                  if (lVar5 != 0) {
                    Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem___ctor_1610008
                              (lVar5,uVar6,lVar17,0,0);
                    plVar12 = (long *)(param_1 + 0x10);
                    *plVar12 = lVar5;
                    FUN_012d0d74(plVar12,lVar5);
                    lVar17 = *plVar12;
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar5 != 0) {
                      Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem___ctor_16130c8
                                (lVar5,lVar17,0,0);
                      plVar13 = (long *)(param_1 + 0x30);
                      *plVar13 = lVar5;
                      FUN_012d0d74(plVar13,lVar5);
                      if (*(long *)(param_1 + 0x10) != 0) {
                        *(long *)(*(long *)(param_1 + 0x10) + 0x10) = *plVar13;
                        FUN_012d0d74();
                        if (*plVar14 != 0) {
                          *(long *)(*plVar14 + 0x48) = *plVar12;
                          FUN_012d0d74();
                          puVar2 = PTR_DAT_057f4358;
                          if (*plVar14 != 0) {
                            *(long *)(*plVar14 + 0x50) = *plVar13;
                            FUN_012d0d74();
                            lVar17 = *plVar9;
                            lVar18 = *plVar13;
                            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                            if (lVar5 != 0) {
                              Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_GameplayInputSystem___ctor_16117c4
                                        (lVar5,lVar17,lVar18,0);
                              plVar14 = (long *)(param_1 + 0x58);
                              *plVar14 = lVar5;
                              FUN_012d0d74(plVar14,lVar5);
                              puVar2 = PTR_DAT_05803768;
                              if (*(long *)(param_1 + 0x48) != 0) {
                                *(long *)(*(long *)(param_1 + 0x48) + 0x10) = *plVar14;
                                FUN_012d0d74();
                                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                if (lVar5 != 0) {
                                  Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker___ctor_1610f3c
                                            (lVar5,0);
                                  *(long *)(param_1 + 0x28) = lVar5;
                                  FUN_012d0d74((long *)(param_1 + 0x28),lVar5);
                                  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
                                    Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetLevelName_160ceb0
                                              (*(long *)(lVar4 + 0x58),
                                               *(undefined8 *)(param_2 + 0x10),0);
                                    if (*(long *)(param_2 + 0x18) != 0) {
                                      uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                                                        (*(long *)(param_2 + 0x18),0);
                                      Modules_Contexts_GamePlay_UI_Common_Scripts_GamePlayUI__SetSpritesByDifficulty_160c714
                                                (lVar4,uVar3,0);
                                      if (*(long *)(param_2 + 0x18) == 0) goto LAB_0201cc94;
                                      lVar5 = *(long *)(lVar4 + 0x58);
                                      uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                                                        (*(long *)(param_2 + 0x18),0);
                                      if (lVar5 == 0) goto LAB_0201cc94;
                                      Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTextView__SetBackgroundType_160cedc
                                                (lVar5,uVar3,0);
                                      if (*(long *)(lVar4 + 0x80) == 0) goto LAB_0201cc94;
                                      Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsController__Init_16f6e78
                                                (*(long *)(lVar4 + 0x80),0);
                                      if (*(long *)(param_2 + 0x18) == 0) goto LAB_0201cc94;
                                      lVar4 = *(long *)(lVar4 + 0x60);
                                      uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                                                        (*(long *)(param_2 + 0x18),0);
                                      if (lVar4 == 0) goto LAB_0201cc94;
                                      Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelBackgroundController__SetBackground_160cd54
                                                (lVar4,uVar3,0);
                                      if ((*(long *)(param_2 + 0x18) != 0) &&
                                         (*(char *)(*(long *)(param_2 + 0x18) + 0x44) != '\0')) {
                                        lVar5 = *plVar9;
                                        lVar17 = *plVar13;
                                        lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576f8d0);
                                        puVar2 = PTR_DAT_057e57f8;
                                        if (lVar4 == 0) goto LAB_0201cc94;
                                        Modules_Contexts_GamePlay_Tutorial_Scripts_TutorialSystem___ctor_160eba0
                                                  (lVar4,lVar5,lVar17,0);
                                        *(long *)(param_1 + 0x60) = lVar4;
                                        FUN_012d0d74((long *)(param_1 + 0x60),lVar4);
                                        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                        if (lVar4 == 0) goto LAB_0201cc94;
                                        Modules_Contexts_Application_Events_Scripts_TutorialEventHandler___ctor_1ccafd0
                                                  (lVar4,0);
                                        *(long *)(param_1 + 0x68) = lVar4;
                                        FUN_012d0d74((long *)(param_1 + 0x68),lVar4);
                                      }
                                    }
                                    lVar18 = *plVar13;
                                    lVar5 = *plVar9;
                                    lVar15 = *plVar14;
                                    lVar17 = *plVar12;
                                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577a1b8);
                                    puVar2 = PTR_DAT_05764cc8;
                                    if (lVar4 != 0) {
                                      Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager___ctor_1e8f618
                                                (lVar4,lVar18,lVar5,lVar15,lVar17,0);
                                      plVar14 = (long *)(param_1 + 0x18);
                                      *plVar14 = lVar4;
                                      FUN_012d0d74(plVar14,lVar4);
                                      lVar5 = *plVar14;
                                      uVar6 = *(undefined8 *)(param_1 + 0x40);
                                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                      if (lVar4 != 0) {
                                        Modules_Contexts_GamePlay_Levels_Scripts_LevelStats___ctor_1f18670
                                                  (lVar4,lVar5,uVar6,param_2,0);
                                        plVar14 = (long *)(param_1 + 0x20);
                                        *plVar14 = lVar4;
                                        FUN_012d0d74(plVar14,lVar4);
                                        puVar2 = PTR_DAT_0577b9e0;
                                        if (*(long *)(param_1 + 0x30) != 0) {
                                          *(long *)(*(long *)(param_1 + 0x30) + 0x10) = *plVar14;
                                          FUN_012d0d74();
                                          lVar5 = *plVar14;
                                          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                          if (lVar4 != 0) {
                                            Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnManager___ctor_2147cbc
                                                      (lVar4,lVar5,0);
                                            *(long *)(param_1 + 0x38) = lVar4;
                                            FUN_012d0d74((long *)(param_1 + 0x38),lVar4);
                                            if (*(long *)(param_1 + 0x70) != 0) {
                                              Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__EnterTheLevel_1f17540
                                                        ();
                                              puVar2 = PTR_DAT_057cfb88;
                                              lVar4 = *plVar14;
                                              if (lVar4 != 0) {
                                                if ((bRam0000000005c2864a & 1) == 0) {
                                                  FUN_012d0dc8(PTR_DAT_057a1e60);
                                                  FUN_012d0dc8(PTR_DAT_057fe590);
                                                  FUN_012d0dc8(PTR_DAT_057f67a8);
                                                  FUN_012d0dc8(PTR_DAT_0576aae0);
                                                  FUN_012d0dc8(PTR_DAT_057636d0);
                                                  FUN_012d0dc8(PTR_DAT_057c4090);
                                                  FUN_012d0dc8(PTR_DAT_057e5848);
                                                  FUN_012d0dc8(PTR_DAT_057cfb88);
                                                  FUN_012d0dc8(PTR_DAT_057c8bb0);
                                                  bRam0000000005c2864a = 1;
                                                }
                                                uVar3 = 
                                                  UnityEngine_Time__get_realtimeSinceStartup_40862bc
                                                            (0);
                                                *(undefined4 *)(lVar4 + 0x108) = uVar3;
                                                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                                puVar2 = PTR_DAT_057c8bb0;
                                                if (lVar5 != 0) {
                                                  System_Collections_Generic_List_int____ctor_204e880
                                                            (lVar5,*(undefined8 *)PTR_DAT_057c4090);
                                                  *(long *)(lVar4 + 0x100) = lVar5;
                                                  FUN_012d0d74(lVar4 + 0x100,lVar5);
                                                  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                                  if (lVar5 != 0) {
                                                                                                        
                                                  System_Collections_Generic_List_LevelStats_RainbowUsage____ctor_284363c
                                                            (lVar5,*(undefined8 *)PTR_DAT_057e5848);
                                                  *(long *)(lVar4 + 0x110) = lVar5;
                                                  FUN_012d0d74(lVar4 + 0x110,lVar5);
                                                  if (*(long *)(lVar4 + 0x18) != 0) {
                                                    lVar5 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10
                                                                     );
                                                    uVar6 = 
                                                  Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelType_1f19570
                                                            (lVar4);
                                                  *(undefined8 *)(lVar4 + 0x40) = uVar6;
                                                  FUN_012d0d74((undefined8 *)(lVar4 + 0x40),uVar6);
                                                  if (*(long *)(lVar4 + 0x20) != 0) {
                                                    lVar17 = *(long *)(*(long *)(lVar4 + 0x20) +
                                                                      0x18);
                                                    if (lVar17 == 0) {
                                                      uVar3 = 0xffffffff;
                                                    }
                                                    else {
                                                      uVar3 = *(undefined4 *)(lVar17 + 0x40);
                                                    }
                                                    *(undefined4 *)(lVar4 + 0x48) = uVar3;
                                                    if (lVar5 != 0) {
                                                      uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetQuestionMarkCount_2f6b3d0
                                                            (lVar5,0);
                                                  *(undefined4 *)(lVar4 + 0x58) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,6,0);
                                                  *(undefined4 *)(lVar4 + 0x5c) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,5,0);
                                                  *(undefined4 *)(lVar4 + 0x60) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,4,0);
                                                  *(undefined4 *)(lVar4 + 100) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,7,0);
                                                  *(undefined4 *)(lVar4 + 0x68) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,8,0);
                                                  *(undefined4 *)(lVar4 + 0x6c) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,9,0);
                                                  *(undefined4 *)(lVar4 + 0x70) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,10,0);
                                                  *(undefined4 *)(lVar4 + 0x74) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,0xc,0);
                                                  *(undefined4 *)(lVar4 + 0x78) = uVar3;
                                                  uVar3 = 
                                                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
                                                            (lVar5,0xe,0);
                                                  *(undefined4 *)(lVar4 + 0x7c) = uVar3;
                                                  puVar2 = PTR_DAT_0576aae0;
                                                  if (*(long *)(lVar4 + 0x20) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x50) =
                                                         *(undefined8 *)
                                                          (*(long *)(lVar4 + 0x20) + 0x38);
                                                    FUN_012d0d74();
                                                    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0)
                                                        && (lVar5 = *(long *)(**(long **)(*(long *)
                                                  puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
                                                  (plVar14 = (long *)
                                                  Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                            (lVar5,*(undefined8 *)PTR_DAT_057a1e60),
                                                  puVar1 = PTR_DAT_057636d0, plVar14 != (long *)0x0)
                                                  ) {
                                                    lVar5 = *plVar14;
                                                    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
                                                    if (uVar7 != 0) {
                                                      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar8 + -2) ==
                                                            *(long *)PTR_DAT_057636d0) {
                                                          puVar10 = (undefined8 *)
                                                                    (lVar5 + (long)(*piVar8 + 1) *
                                                                             0x10 + 0x138);
                                                          goto LAB_02019380;
                                                        }
                                                        uVar7 = uVar7 - 1;
                                                        piVar8 = piVar8 + 4;
                                                      } while (uVar7 != 0);
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_0131971c(plVar14,*(long *)
                                                  PTR_DAT_057636d0,1);
LAB_02019380:
                                                  uVar3 = (*(code *)*puVar10)(plVar14,puVar10[1]);
                                                  *(undefined4 *)(lVar4 + 0x30) = uVar3;
                                                  lVar17 = *plVar14;
                                                  lVar5 = *(long *)puVar1;
                                                  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12a);
                                                  if (uVar7 != 0) {
                                                    piVar8 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar8 + -2) == lVar5) {
                                                        puVar10 = (undefined8 *)
                                                                  (lVar17 + (long)(*piVar8 + 0x21) *
                                                                            0x10 + 0x138);
                                                        goto LAB_020193e0;
                                                      }
                                                      uVar7 = uVar7 - 1;
                                                      piVar8 = piVar8 + 4;
                                                    } while (uVar7 != 0);
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_0131971c(plVar14,lVar5,0x21);
LAB_020193e0:
                                                  uVar3 = (*(code *)*puVar10)(plVar14,puVar10[1]);
                                                  *(undefined4 *)(lVar4 + 0x34) = uVar3;
                                                  lVar17 = *plVar14;
                                                  lVar5 = *(long *)puVar1;
                                                  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12a);
                                                  if (uVar7 != 0) {
                                                    piVar8 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar8 + -2) == lVar5) {
                                                        puVar10 = (undefined8 *)
                                                                  (lVar17 + (long)(*piVar8 + 0x19) *
                                                                            0x10 + 0x138);
                                                        goto LAB_02019440;
                                                      }
                                                      uVar7 = uVar7 - 1;
                                                      piVar8 = piVar8 + 4;
                                                    } while (uVar7 != 0);
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_0131971c(plVar14,lVar5,0x19);
LAB_02019440:
                                                  uVar3 = (*(code *)*puVar10)(plVar14,puVar10[1]);
                                                  *(undefined4 *)(lVar4 + 0x38) = uVar3;
                                                  *(undefined4 *)(lVar4 + 0xd4) = 0;
                                                  *(undefined1 *)(lVar4 + 0x10c) = 0;
                                                  if (*(long *)(lVar4 + 0x20) != 0) {
                                                    *(undefined1 *)(lVar4 + 0xe8) =
                                                         *(undefined1 *)
                                                          (*(long *)(lVar4 + 0x20) + 0x48);
                                                    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0)
                                                        && (lVar5 = *(long *)(**(long **)(*(long *)
                                                  puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
                                                  (lVar5 = 
                                                  Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                            (lVar5,*(undefined8 *)PTR_DAT_057fe590),
                                                  lVar5 != 0)) {
                                                    uVar7 = 
                                                  Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsEligible_375d358
                                                            (lVar5,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    uVar3 = 0;
                                                  }
                                                  else {
                                                    uVar3 = 
                                                  Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                                                            (lVar5,0);
                                                  }
                                                  *(undefined4 *)(lVar4 + 0xe4) = uVar3;
                                                  if (*(long *)(lVar4 + 0x20) != 0) {
                                                    *(undefined8 *)(lVar4 + 0xf8) =
                                                         *(undefined8 *)
                                                          (*(long *)(lVar4 + 0x20) + 0x4c);
                                                    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0)
                                                        && (lVar5 = *(long *)(**(long **)(*(long *)
                                                  puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
                                                  (lVar5 = 
                                                  Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                            (lVar5,*(undefined8 *)PTR_DAT_057f67a8),
                                                  lVar5 != 0)) {
                                                    uVar7 = 
                                                  Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsEligible_246d454
                                                            (lVar5,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    uVar3 = 0xffffffff;
                                                  }
                                                  else {
                                                    uVar3 = 
                                                  Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528
                                                            (lVar5,0);
                                                  }
                                                  lVar5 = *(long *)(lVar4 + 0x20);
                                                  *(undefined4 *)(lVar4 + 0xec) = uVar3;
                                                  if (lVar5 != 0) {
                                                    if (*(long *)(lVar5 + 0x20) == 0) {
                                                      if (*(char *)(lVar4 + 0xe0) == '\0') {
                                                        return;
                                                      }
                                                    }
                                                    else {
                                                      uVar6 = *(undefined8 *)(lVar5 + 0x40);
                                                      *(undefined1 *)(lVar4 + 0xe0) = 1;
                                                      *(undefined8 *)(lVar4 + 0xd8) = uVar6;
                                                    }
                                                    if (*(long *)(lVar5 + 0x20) != 0) {
                                                      *(undefined8 *)(lVar4 + 0xcc) =
                                                           *(undefined8 *)
                                                            (*(long *)(lVar5 + 0x20) + 0x1c);
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
                                                  }
                                                }
                    /* WARNING: Subroutine does not return */
                                                FUN_012d0ef0();
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
      }
    }
  }
LAB_0201cc94:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

