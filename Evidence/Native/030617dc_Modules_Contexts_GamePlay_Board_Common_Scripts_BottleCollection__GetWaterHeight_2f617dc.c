/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetWaterHeight
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetWaterHeight (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_Serialization_BottleItemModel_o* bottleItemModel, int32_t i, int32_t currentColorId, bool isQuestionMark, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetWaterHeight
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetWaterHeight
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_Serialization_BottleItemModel_o*
   bottleItemModel, int32_t i, int32_t currentColorId, bool isQuestionMark, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetWaterHeight_2f617dc
              (undefined8 param_1,long param_2,int param_3,int param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  if ((bRam0000000005c30902 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766e18);
    FUN_012d0dc8(PTR_DAT_0577c540);
    FUN_012d0dc8(PTR_DAT_057a95a8);
    bRam0000000005c30902 = 1;
  }
  puVar2 = PTR_DAT_057a95a8;
  puVar1 = PTR_DAT_05766e18;
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x20), lVar4 != 0)) {
    iVar10 = 1;
    do {
      param_3 = param_3 + 1;
      if (*(int *)(lVar4 + 0x18) <= param_3) {
        return iVar10;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,param_3,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      lVar4 = *(long *)(lVar4 + 0x20);
      plVar5 = (long *)thunk_FUN_01320d5c(lVar4,*(undefined8 *)puVar1);
      if (plVar5 != (long *)0x0) {
        if ((param_5 & 1) == 0) {
          if (lVar4 == 0) break;
          if (*(int *)(lVar4 + 0x10) == 3) {
            return iVar10;
          }
        }
        else {
          if (lVar4 == 0) break;
          if (*(int *)(lVar4 + 0x10) != 3) {
            return iVar10;
          }
        }
        lVar7 = *plVar5;
        lVar4 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03061904;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,lVar4,0);
LAB_03061904:
        iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (iVar3 != param_4) {
          return iVar10;
        }
        iVar10 = iVar10 + 1;
      }
      lVar4 = *(long *)(param_2 + 0x20);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

