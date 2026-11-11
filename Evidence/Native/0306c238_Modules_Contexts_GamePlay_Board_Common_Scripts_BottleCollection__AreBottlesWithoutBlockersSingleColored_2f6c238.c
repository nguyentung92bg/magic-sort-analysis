/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AreBottlesWithoutBlockersSingleColored
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSingleColored (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AreBottlesWithoutBlockersSingleColored
   bool 
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSingleColored
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSingleColored_2f6c238
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000005c30934 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30934 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return 1;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar7 = 0;
        do {
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar7,*(undefined8 *)puVar2);
          if (lVar4 == 0) goto LAB_0306c34c;
          uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                            (lVar4,0);
          if (((uVar5 & 1) == 0) &&
             (((*(long *)(lVar4 + 0x88) == 0 || (*(int *)(*(long *)(lVar4 + 0x88) + 0x18) < 1)) &&
              (uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColor_2499a40
                                 (lVar4,0), (uVar5 & 1) == 0)))) {
            return 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar3 + 0x18));
      }
      lVar3 = *(long *)(param_1 + 0x18);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
LAB_0306c34c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

