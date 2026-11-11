/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$UseBooster
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseBooster (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$UseBooster
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseBooster
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, int32_t currencyType, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseBooster_1e933b4
               (long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_DAT_058028e0;
  if (param_2 != 6) {
    if (param_2 == 4) {
      if ((bRam0000000005c2813f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058028e0);
        bRam0000000005c2813f = 1;
      }
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      FUN_012d0d74((ulong)&stack0xffffffffffffff90 | 8,0);
      FUN_012d0d74(&stack0xffffffffffffffb8,param_1);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_BoosterManager__Undo_d__14__216b39c
                ((ulong)&stack0xffffffffffffff90 | 8,&stack0xffffffffffffff90,*(undefined8 *)puVar2)
      ;
      return;
    }
    return;
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if (lVar13 != 0) {
    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar13 != 0)) {
      if ((bRam0000000005c30914 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05793328,0);
        FUN_012d0dc8(PTR_DAT_0576aae0);
        FUN_012d0dc8(PTR_DAT_05813f90);
        FUN_012d0dc8(PTR_DAT_05785108);
        FUN_012d0dc8(PTR_DAT_057b43e8);
        FUN_012d0dc8(PTR_DAT_057b0e08);
        bRam0000000005c30914 = 1;
      }
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
                        (lVar13);
      if ((int)uVar8 != -1) {
        uVar15 = uVar8 >> 0x20;
        iVar6 = (int)(uVar8 >> 0x20);
        if (iVar6 != -1) {
          lVar9 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                            (lVar13,uVar8 & 0xffffffff,iVar6,*(undefined4 *)(lVar13 + 0x5c));
          if (lVar9 != 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleRevealAnimation_249d800
                      (0,lVar9,0);
            uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                               (lVar13);
            if ((uVar10 & 1) == 0) {
              uVar7 = 0;
            }
            else {
              iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
                                (*(undefined8 *)(lVar13 + 0x18),uVar15,
                                 *(undefined4 *)(lVar13 + 0x60),0);
              if (iVar6 < 1) {
                uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle_2f6a814
                                  (lVar13,uVar15);
              }
              else {
                uVar7 = 1;
              }
            }
            iVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                              (lVar13);
            Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetMaxBottleCountInRow_2f6a9ac
                      (lVar13);
            if (*(long *)(lVar13 + 0x40) != 0) {
              uVar11 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
                                 (*(long *)(lVar13 + 0x40),iVar6 == 3,*(undefined1 *)(lVar13 + 0x59)
                                  ,*(undefined1 *)(lVar13 + 0x58),0);
              if ((uVar7 & 1) == 0) {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard_22f9e1c
                          (lVar13,uVar11,1,
                           *(char *)(lVar13 + 0x58) != '\0' || *(char *)(lVar13 + 0x59) != '\0',
                           *(char *)(lVar13 + 0x58),*(undefined4 *)(lVar13 + 0x60),0);
              }
              else {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle_22faa54
                          (lVar13,uVar11,uVar8 & 0xffffffff,uVar15,*(undefined4 *)(lVar13 + 0x60),0)
                ;
              }
              puVar5 = PTR_DAT_057b43e8;
              puVar4 = PTR_DAT_057b0e08;
              puVar3 = PTR_DAT_05793328;
              puVar2 = PTR_DAT_0576aae0;
              uVar1 = _UNK_04397c9c;
              lVar9 = *(long *)(lVar13 + 0x18);
              if (lVar9 != 0) {
                iVar14 = 0;
                while (iVar14 < *(int *)(lVar9 + 0x18)) {
                  lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar9,iVar14,*(undefined8 *)puVar4);
                  if (lVar9 == 0) goto LAB_0306a37c;
                  if (0 < *(int *)(lVar9 + 0x18)) {
                    iVar16 = 0;
                    do {
                      lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar9,iVar16,*(undefined8 *)puVar5);
                      if (lVar12 == 0) goto LAB_0306a37c;
                      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveToOrigin_249419c
                                (uVar1,0,lVar12,0);
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < *(int *)(lVar9 + 0x18));
                  }
                  lVar9 = *(long *)(lVar13 + 0x18);
                  iVar14 = iVar14 + 1;
                  if (lVar9 == 0) goto LAB_0306a37c;
                }
                Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
                          (&uStack_88,lVar13);
                if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                   (lVar13 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar13 != 0)) {
                  lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar13,*(undefined8 *)puVar3);
                  uStack_98 = uStack_80;
                  uStack_a0 = uStack_88;
                  uStack_90 = uStack_78;
                  if (lVar13 != 0) {
                    uStack_b8 = uStack_80;
                    uStack_c0 = uStack_88;
                    uStack_b0 = uStack_78;
                    Modules_Infrastructure_Common_Scripts_CameraService__UpdateInGameCamera_40e316c
                              (uVar1,0,lVar13,&uStack_c0,iVar6 == 3,uVar11,0);
                    return;
                  }
                }
              }
            }
          }
LAB_0306a37c:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

