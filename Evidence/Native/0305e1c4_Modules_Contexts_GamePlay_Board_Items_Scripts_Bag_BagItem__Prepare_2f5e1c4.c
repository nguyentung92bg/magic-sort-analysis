/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   requiredAmount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Prepare_2f5e1c4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long *plVar10;
  
                    /* try { // try from 0305e1d4 to 0315e1db has its CatchHandler @ 0305e520 */
  *(undefined8 *)(param_4 + 0x50) = param_7;
  *(undefined4 *)(param_4 + 0x58) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  lVar3 = *(long *)(param_4 + 0x48);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = *(undefined4 *)(param_4 + 0x58);
                    /* try { // try from 0305e238 to 0315e23f has its CatchHandler @ 0305e4fc */
  if ((bRam0000000005c308ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057720e0);
    bRam0000000005c308ee = 1;
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetSorting_2f5fcdc
            (lVar3,param_5,param_6);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__UpdateCountText_2f5fd8c(lVar3,uVar1);
  plVar10 = *(long **)(lVar3 + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
          goto LAB_0305e304;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_0305e304:
    lVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar5 != 0) {
      lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                 *(undefined4 *)(lVar6 + 0x14),lVar5,0);
      lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar3,0);
      if ((lVar5 != 0) &&
         (lVar5 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0), lVar5 != 0)) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,lVar5,0);
        if (*(long *)(lVar3 + 0x48) != 0) {
          UnityEngine_Animation__Stop_1f79e6c(*(long *)(lVar3 + 0x48),0);
          if (*(long *)(lVar3 + 0x48) != 0) {
            UnityEngine_Animation__Play_1f7a100
                      (*(long *)(lVar3 + 0x48),*(undefined8 *)PTR_DAT_057720e0,0);
            if (*(long *)(lVar3 + 0x68) != 0) {
              UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(lVar3 + 0x68),0);
              lVar5 = *(long *)(lVar3 + 0x30);
              *(undefined4 *)(lVar3 + 0x88) = uVar1;
              if (lVar5 != 0) {
                uVar2 = *(uint *)(lVar5 + 0x18);
                if (0 < (int)uVar2) {
                  uVar9 = 0;
                  do {
                    if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef8();
                    }
                    plVar10 = *(long **)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
                    if (plVar10 == (long *)0x0) goto LAB_0305e444;
                    (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                    lVar3 = UnityEngine_Component__get_gameObject_408b480(plVar10,0);
                    if (lVar3 == 0) goto LAB_0305e444;
                    UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                    uVar2 = *(uint *)(lVar5 + 0x18);
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar2);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0305e444:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

