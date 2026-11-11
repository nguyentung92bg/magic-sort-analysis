/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$FindMaxBottleHeight
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__FindMaxBottleHeight (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, System_Collections_Generic_List_List_BottleItemModel___o* bottleModelRows, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$FindMaxBottleHeight
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__FindMaxBottleHeight
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   System_Collections_Generic_List_List_BottleItemModel___o* bottleModelRows, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__FindMaxBottleHeight_2f616bc
              (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((bRam0000000005c30901 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774d20);
    FUN_012d0dc8(PTR_DAT_0577c540);
    FUN_012d0dc8(PTR_DAT_05766148);
    FUN_012d0dc8(PTR_DAT_0577e430);
    FUN_012d0dc8(PTR_DAT_057945b8);
    bRam0000000005c30901 = 1;
  }
  puVar2 = PTR_DAT_057945b8;
  puVar1 = PTR_DAT_0577e430;
  if (param_2 == 0) {
LAB_030617d8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(param_2 + 0x18) < 1) {
    iVar5 = 0;
  }
  else {
    iVar7 = 0;
    iVar5 = 0;
    do {
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_2,iVar7,*(undefined8 *)puVar2);
      if (lVar3 == 0) goto LAB_030617d8;
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar8 = 0;
        iVar6 = iVar5;
        do {
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar8,*(undefined8 *)puVar1);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) goto LAB_030617d8;
          iVar5 = *(int *)(*(long *)(lVar4 + 0x20) + 0x18);
          iVar8 = iVar8 + 1;
          if (iVar5 <= iVar6) {
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
        } while (iVar8 < *(int *)(lVar3 + 0x18));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_2 + 0x18));
  }
  return iVar5;
}

