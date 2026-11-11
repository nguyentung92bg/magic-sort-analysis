/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$HasDifferentBottleWithClayAndSameColor
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithClayAndSameColor (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$HasDifferentBottleWithClayAndSameColor
   bool 
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithClayAndSameColor
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithClayAndSameColor_2f6b7d8
          (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  if ((bRam0000000005c30927 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30927 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        return 0;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar8,*(undefined8 *)puVar1);
      if (lVar5 == 0) break;
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar9 = 0;
        do {
          lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,iVar9,*(undefined8 *)puVar2);
          if ((lVar6 != param_2) && (lVar6 != param_3)) {
            if (lVar6 == 0) goto LAB_0306b918;
            uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                              (lVar6,5,0);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                                  (lVar6,0), (uVar7 & 1) == 0)) {
              iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                (lVar6,0);
              if (param_2 == 0) goto LAB_0306b918;
              iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                (param_2,0);
              if (iVar3 == iVar4) {
                return 1;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar5 + 0x18));
      }
      lVar5 = *(long *)(param_1 + 0x18);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
LAB_0306b918:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

