/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottleIndex
System_ValueTuple_int__int__o Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleIndex (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottleIndex
   System_ValueTuple_int__int__o
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleIndex
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleIndex_2f6bb38
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uStack_48;
  
  if ((bRam0000000005c3092e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_05815980);
    bRam0000000005c3092e = 1;
  }
  puVar3 = PTR_DAT_05815980;
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar7) {
        uVar6 = *(undefined8 *)puVar3;
        iVar8 = -1;
        iVar7 = -1;
LAB_0306bc44:
        uStack_48 = 0;
        System_ValueTuple_int__int____ctor_2b8bfd0(&uStack_48,iVar8,iVar7,uVar6);
        return uStack_48;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar7,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar8 = 0;
        do {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar4,iVar8,*(undefined8 *)puVar2);
          if (lVar5 == param_2) {
            uVar6 = *(undefined8 *)puVar3;
            goto LAB_0306bc44;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(param_1 + 0x18);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

