/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t frogType, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__Prepare_2751ff8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((bRam0000000005c2c702 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c2c702 = 1;
  }
  *(long *)(param_4 + 0x60) = param_7;
  *(undefined4 *)(param_4 + 0x78) = param_8;
  FUN_012d0d74((long *)(param_4 + 0x60),param_7);
  if (param_7 != 0) {
    uVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_7,0,*(undefined8 *)PTR_DAT_057b43e8);
    *(undefined8 *)(param_4 + 0x50) = uVar1;
    FUN_012d0d74((undefined8 *)(param_4 + 0x50),uVar1);
    lVar2 = *(long *)(param_4 + 0x48);
    *(undefined4 *)(param_4 + 0x58) = 0;
    *(undefined4 *)(param_4 + 0x34) = param_1;
    *(undefined4 *)(param_4 + 0x38) = param_2;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    if (lVar2 != 0) {
      if ((bRam0000000005c2c707 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575a2d8);
        bRam0000000005c2c707 = 1;
      }
      plVar8 = *(long **)(lVar2 + 0x18);
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
              goto LAB_02852170;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02852170:
        lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar4 != 0) {
          lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                     *(undefined4 *)(lVar5 + 0x14),lVar4,0);
          Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__SetSorting_27528d0
                    (lVar2,param_5,param_6);
          switch(param_8) {
          case 1:
            lVar2 = *(long *)(lVar2 + 0x28);
            break;
          case 2:
            lVar2 = *(long *)(lVar2 + 0x28);
            break;
          case 3:
            lVar2 = *(long *)(lVar2 + 0x28);
            break;
          case 4:
            lVar2 = *(long *)(lVar2 + 0x28);
            break;
          case 5:
            lVar2 = *(long *)(lVar2 + 0x28);
            break;
          case 6:
            lVar2 = *(long *)(lVar2 + 0x28);
            break;
          default:
            return;
          }
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (pcRam0000000005c3a788 == (code *)0x0) {
            pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
          }
          (*pcRam0000000005c3a788)(lVar2,&stack0xffffffffffffffd0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

