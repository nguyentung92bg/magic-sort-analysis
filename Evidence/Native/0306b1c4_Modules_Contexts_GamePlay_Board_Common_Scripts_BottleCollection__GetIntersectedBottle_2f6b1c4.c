/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetIntersectedBottle
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIntersectedBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, UnityEngine_Vector2_o worldPosition, int32_t inputMode, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o** intersectedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetIntersectedBottle
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIntersectedBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, UnityEngine_Vector2_o
   worldPosition, int32_t inputMode,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o** intersectedBottle, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIntersectedBottle_2f6b1c4
          (undefined8 param_1,undefined8 param_2,long param_3,int param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000005c3091e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c3091e = 1;
  }
  *param_5 = 0;
  FUN_012d0d74(param_5,0);
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  lVar3 = *(long *)(param_3 + 0x18);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return 0;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar7 = 0;
        do {
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar7,*(undefined8 *)puVar2);
          if (lVar4 == 0) goto LAB_0306b31c;
          uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsIntersect_24944ec
                            (param_1,param_2,0,lVar4,0);
          if ((uVar5 & 1) != 0) {
            if (param_4 == 2) {
              uVar5 = Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseShuffleBooster_1e92c00
                                (lVar4,0);
            }
            else {
              if (param_4 != 3) {
                if (param_4 == 1) goto LAB_0306b320;
                goto LAB_0306b300;
              }
              uVar5 = Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__CanUseRevealBooster_1e92c14
                                (lVar4,0);
            }
            if ((uVar5 & 1) != 0) {
LAB_0306b320:
              *param_5 = lVar4;
              FUN_012d0d74(param_5,lVar4);
              return 1;
            }
          }
LAB_0306b300:
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar3 + 0x18));
      }
      lVar3 = *(long *)(param_3 + 0x18);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
LAB_0306b31c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

