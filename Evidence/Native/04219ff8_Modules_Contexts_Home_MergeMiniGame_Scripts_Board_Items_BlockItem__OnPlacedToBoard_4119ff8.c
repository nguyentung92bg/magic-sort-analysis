/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.BlockItem$$OnPlacedToBoard
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem__OnPlacedToBoard (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.BlockItem$$OnPlacedToBoard
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem__OnPlacedToBoard
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_BlockItem__OnPlacedToBoard_4119ff8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c3ac3c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3ac3c = 1;
  }
  puVar3 = PTR_DAT_057f7f10;
  puVar2 = PTR_DAT_0576d610;
  puVar1 = PTR_DAT_0576c200;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0xa0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,lVar5,*(undefined8 *)PTR_DAT_05818d08);
  puVar4 = PTR_DAT_05805c10;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while( true ) {
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar2);
      lVar5 = lStack_60;
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar3);
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = UnityEngine_Object__op_Inequality_408e110(lVar5,param_1,0);
    } while ((uVar6 & 1) == 0);
    if (lVar5 == 0) break;
    lVar5 = UnityEngine_Component__get_transform_408b444(lVar5,0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(puVar4);
      cRam0000000005c230aa = '\x01';
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    puVar7 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0(*puVar7,puVar7[1],puVar7[2],lVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

