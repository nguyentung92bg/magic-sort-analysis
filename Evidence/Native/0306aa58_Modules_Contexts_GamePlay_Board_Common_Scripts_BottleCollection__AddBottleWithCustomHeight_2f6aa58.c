/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBottleWithCustomHeight
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleWithCustomHeight (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, float delay, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBottleWithCustomHeight
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleWithCustomHeight
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, float delay, int32_t
   height, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleWithCustomHeight_2f6aa58
               (undefined8 param_1,long param_2,int param_3)

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
  int iVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000005c30915 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30915 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
                    (param_2);
  if (0 < param_3) {
    uVar14 = uVar8 >> 0x20;
    iVar6 = (int)(uVar8 >> 0x20);
    if ((iVar6 != -1) && ((int)uVar8 != -1)) {
      lVar9 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                        (param_2,uVar8 & 0xffffffff,iVar6,param_3);
      if (lVar9 != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleRevealAnimation_249d800
                  (param_1,lVar9,0);
        uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                           (param_2);
        if ((uVar10 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
                            (*(undefined8 *)(param_2 + 0x18),uVar14,*(undefined4 *)(param_2 + 0x60),
                             0);
          if (iVar6 < 1) {
            uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle_2f6a814
                              (param_2,uVar14);
          }
          else {
            uVar7 = 1;
          }
        }
        iVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                          (param_2);
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetMaxBottleCountInRow_2f6a9ac
                  (param_2);
        if (*(long *)(param_2 + 0x40) != 0) {
          uVar11 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
                             (*(long *)(param_2 + 0x40),iVar6 == 3,*(undefined1 *)(param_2 + 0x59),
                              *(undefined1 *)(param_2 + 0x58),0);
          if ((uVar7 & 1) == 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard_22f9e1c
                      (param_2,uVar11,1,
                       *(char *)(param_2 + 0x58) != '\0' || *(char *)(param_2 + 0x59) != '\0',
                       *(char *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x60),0);
          }
          else {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle_22faa54
                      (param_2,uVar11,uVar8 & 0xffffffff,uVar14,*(undefined4 *)(param_2 + 0x60),0);
          }
          puVar5 = PTR_DAT_057b43e8;
          puVar4 = PTR_DAT_057b0e08;
          puVar3 = PTR_DAT_05793328;
          puVar2 = PTR_DAT_0576aae0;
          uVar1 = _UNK_04397c9c;
          lVar9 = *(long *)(param_2 + 0x18);
          if (lVar9 != 0) {
            iVar13 = 0;
            while (iVar13 < *(int *)(lVar9 + 0x18)) {
              lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar9,iVar13,*(undefined8 *)puVar4);
              if (lVar9 == 0) goto LAB_0306ad40;
              if (0 < *(int *)(lVar9 + 0x18)) {
                iVar15 = 0;
                do {
                  lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar9,iVar15,*(undefined8 *)puVar5);
                  if (lVar12 == 0) goto LAB_0306ad40;
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveToOrigin_249419c
                            (uVar1,param_1,lVar12,0);
                  iVar15 = iVar15 + 1;
                } while (iVar15 < *(int *)(lVar9 + 0x18));
              }
              lVar9 = *(long *)(param_2 + 0x18);
              iVar13 = iVar13 + 1;
              if (lVar9 == 0) goto LAB_0306ad40;
            }
            Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
                      (&uStack_88,param_2);
            if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
               (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) {
              lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar9,*(undefined8 *)puVar3);
              uStack_98 = uStack_80;
              uStack_a0 = uStack_88;
              uStack_90 = uStack_78;
              if (lVar9 != 0) {
                uStack_b8 = uStack_80;
                uStack_c0 = uStack_88;
                uStack_b0 = uStack_78;
                Modules_Infrastructure_Common_Scripts_CameraService__UpdateInGameCamera_40e316c
                          (uVar1,param_1,lVar9,&uStack_c0,iVar6 == 3,uVar11,0);
                return;
              }
            }
          }
        }
      }
LAB_0306ad40:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return;
}

