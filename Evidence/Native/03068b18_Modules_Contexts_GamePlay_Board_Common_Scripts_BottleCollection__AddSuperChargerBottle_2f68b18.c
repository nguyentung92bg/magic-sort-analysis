/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSuperChargerBottle
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSuperChargerBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0306c954) */
/* WARNING: Removing unreachable block (ram,0x0306c958) */
/* WARNING: Removing unreachable block (ram,0x0306c9dc) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSuperChargerBottle
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSuperChargerBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSuperChargerBottle_2f68b18
               (long param_1)

{
  undefined *puVar1;
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
  ulong uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c30936 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c30936 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = UnityEngine_Object__op_Equality_407f288(uVar11,0,0);
  if (((uVar8 & 1) == 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
       ((lVar9 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar9 == 0 ||
        (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar9,*(undefined8 *)PTR_DAT_057a0c88), lVar9 == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar8 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                      (lVar9,0);
    if ((uVar8 & 1) != 0) {
      iVar6 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetSuperChargerType_2970118
                        (lVar9,0);
      puVar1 = PTR_DAT_0576aae0;
      if (iVar6 == 1) {
        uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
                          ();
        uVar11 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                           (param_1,uVar8 & 0xffffffff,uVar8 >> 0x20,1);
        *(undefined8 *)(param_1 + 0x68) = uVar11;
        FUN_012d0d74();
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      else {
        if (iVar6 != 4) {
          if (iVar6 != 3) {
            return;
          }
          if ((bRam0000000005c30937 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057d9070);
            FUN_012d0dc8(PTR_DAT_0576aae0);
            bRam0000000005c30937 = 1;
          }
          if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
               (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) &&
              (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar9,*(undefined8 *)PTR_DAT_057d9070), lVar9 != 0)) &&
             (*(long *)(lVar9 + 0x18) != 0)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + 0x1d0);
            uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
                              (param_1);
            uVar11 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                               (param_1,uVar8 & 0xffffffff,uVar8 >> 0x20,1);
            if (lVar9 != 0) {
              Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddChargeableBottleItem_2f697f4
                        (param_1,uVar11,*(undefined1 *)(lVar9 + 0x22));
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              goto 
              Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AdjustBoardForSuperChargerBottle_2f6c71c
              ;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
                          ();
        uVar11 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                           (param_1,uVar8 & 0xffffffff,uVar8 >> 0x20,1);
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddChargeableBottleItem_2f697f4
                  (param_1,uVar11,1);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }

      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AdjustBoardForSuperChargerBottle_2f6c71c
      :
      uVar12 = uVar8 >> 0x20;
      if ((bRam0000000005c30938 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057d0ba8);
        FUN_012d0dc8(PTR_DAT_057a2960);
        FUN_012d0dc8(PTR_DAT_058066c8);
        FUN_012d0dc8(PTR_DAT_057b41c8);
        FUN_012d0dc8(PTR_DAT_057be708);
        FUN_012d0dc8(PTR_DAT_058093f0);
        FUN_012d0dc8(PTR_DAT_05768d80);
        FUN_012d0dc8(PTR_DAT_057db558);
        bRam0000000005c30938 = 1;
      }
      uStack_68 = 0;
      plStack_60 = (long *)0x0;
      uStack_70 = 0;
      uStack_88 = 0;
      plStack_80 = (long *)0x0;
      uStack_90 = 0;
      uVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                         (param_1);
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
                          (*(undefined8 *)(param_1 + 0x18),uVar12,*(undefined4 *)(param_1 + 0x60),0)
        ;
        if (iVar6 < 1) {
          uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle_2f6a814
                            (param_1,uVar12);
          uVar7 = uVar7 & 1;
        }
        else {
          uVar7 = 1;
        }
      }
      iVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                        (param_1);
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar11 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
                           (*(long *)(param_1 + 0x40),iVar6 == 3,*(undefined1 *)(param_1 + 0x59),
                            *(undefined1 *)(param_1 + 0x58),0);
        if (uVar7 == 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard_22f9e1c
                    (param_1,uVar11,0,
                     *(char *)(param_1 + 0x58) != '\0' || *(char *)(param_1 + 0x59) != '\0',
                     *(char *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0);
        }
        else {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle_22faa54
                    (param_1,uVar11,uVar8 & 0xffffffff,uVar12,*(undefined4 *)(param_1 + 0x60),0);
        }
        puVar5 = PTR_DAT_058066c8;
        puVar4 = PTR_DAT_057d0ba8;
        puVar3 = PTR_DAT_057b41c8;
        puVar2 = PTR_DAT_057a2960;
        puVar1 = PTR_DAT_05768d80;
        if (*(long *)(param_1 + 0x18) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_a8,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057db558);
          uStack_68 = uStack_a0;
          uStack_70 = uStack_a8;
          plStack_60 = plStack_98;
          while( true ) {
            uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_70,*(undefined8 *)puVar5);
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_70,*(undefined8 *)puVar2);
              return;
            }
            if (plStack_60 == (long *)0x0) break;
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_a8,plStack_60,*(undefined8 *)puVar1);
            uStack_88 = uStack_a0;
            uStack_90 = uStack_a8;
            plStack_80 = plStack_98;
            while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_90,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
              if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              (**(code **)(*plStack_80 + 0x1c8))(plStack_80,*(undefined8 *)(*plStack_80 + 0x1d0));
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_90,*(undefined8 *)puVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return;
}

