/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSingleUseBottle
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSingleUseBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0306c954) */
/* WARNING: Removing unreachable block (ram,0x0306c958) */
/* WARNING: Removing unreachable block (ram,0x0306c9dc) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSingleUseBottle
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSingleUseBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSingleUseBottle_2f6c6c4
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
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
                    ();
  uVar9 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                    (param_1,uVar8 & 0xffffffff,uVar8 >> 0x20,1);
  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddChargeableBottleItem_2f697f4
            (param_1,uVar9,1);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  uVar11 = uVar8 >> 0x20;
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
                      (*(undefined8 *)(param_1 + 0x18),uVar11,*(undefined4 *)(param_1 + 0x60),0);
    if (iVar6 < 1) {
      uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle_2f6a814
                        (param_1,uVar11);
      uVar7 = uVar7 & 1;
    }
    else {
      uVar7 = 1;
    }
  }
  iVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                    (param_1);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar9 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
                      (*(long *)(param_1 + 0x40),iVar6 == 3,*(undefined1 *)(param_1 + 0x59),
                       *(undefined1 *)(param_1 + 0x58),0);
    if (uVar7 == 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard_22f9e1c
                (param_1,uVar9,0,
                 *(char *)(param_1 + 0x58) != '\0' || *(char *)(param_1 + 0x59) != '\0',
                 *(char *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0);
    }
    else {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle_22faa54
                (param_1,uVar9,uVar8 & 0xffffffff,uVar11,*(undefined4 *)(param_1 + 0x60),0);
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

