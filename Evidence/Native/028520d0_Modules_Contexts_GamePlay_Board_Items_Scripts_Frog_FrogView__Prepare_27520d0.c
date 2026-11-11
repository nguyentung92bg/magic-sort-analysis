/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t frogType, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__Prepare_27520d0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000005c2c707 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2c707 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
          goto LAB_02852170;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02852170:
    lVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                 *(undefined4 *)(lVar3 + 0x14),lVar2,0);
      Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__SetSorting_27528d0
                (param_1,param_2,param_3);
      switch(param_4) {
      case 1:
        lVar2 = *(long *)(param_1 + 0x28);
        break;
      case 2:
        lVar2 = *(long *)(param_1 + 0x28);
        break;
      case 3:
        lVar2 = *(long *)(param_1 + 0x28);
        break;
      case 4:
        lVar2 = *(long *)(param_1 + 0x28);
        break;
      case 5:
        lVar2 = *(long *)(param_1 + 0x28);
        break;
      case 6:
        lVar2 = *(long *)(param_1 + 0x28);
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

