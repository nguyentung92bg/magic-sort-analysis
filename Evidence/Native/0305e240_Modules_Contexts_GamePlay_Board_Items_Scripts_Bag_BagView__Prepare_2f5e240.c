/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t requiredAmount, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Prepare_2f5e240
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  long *plVar8;
  
                    /* try { // try from 0305e25c to 0315e263 has its CatchHandler @ 0305e51c */
  if ((bRam0000000005c308ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057720e0);
    bRam0000000005c308ee = 1;
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetSorting_2f5fcdc
            (param_1,param_2,param_3);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__UpdateCountText_2f5fd8c
            (param_1,param_4);
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
                    /* try { // try from 0305e2b8 to 0315e2bf has its CatchHandler @ 0305e4f8 */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
          goto LAB_0305e304;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 0305e2dc to 0315e2e3 has its CatchHandler @ 0305e518 */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_0305e304:
    lVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar3 != 0) {
                    /* try { // try from 0305e338 to 0315e33f has its CatchHandler @ 0305e4f4 */
      lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar3,0);
                    /* try { // try from 0305e35c to 0315e363 has its CatchHandler @ 0305e514 */
      lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if ((lVar3 != 0) &&
         (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 != 0)) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,lVar3,0);
        if (*(long *)(param_1 + 0x48) != 0) {
          UnityEngine_Animation__Stop_1f79e6c(*(long *)(param_1 + 0x48),0);
          if (*(long *)(param_1 + 0x48) != 0) {
            UnityEngine_Animation__Play_1f7a100
                      (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_057720e0,0);
                    /* try { // try from 0305e3bc to 0315e3c3 has its CatchHandler @ 0305e4f0 */
            if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 0305e3c4 to 0315e41b has its CatchHandler @ 0305da88 */
              UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(param_1 + 0x68),0);
              lVar3 = *(long *)(param_1 + 0x30);
              *(undefined4 *)(param_1 + 0x88) = param_4;
              if (lVar3 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (0 < (int)uVar1) {
                  uVar7 = 0;
                  do {
                    if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0305e448 to 0315e44b has its CatchHandler @ 0305e4dc */
                      FUN_012d0ef8();
                    }
                    plVar8 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
                    if (plVar8 == (long *)0x0) goto LAB_0305e444;
                    (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                    lVar4 = UnityEngine_Component__get_gameObject_408b480(plVar8,0);
                    if (lVar4 == 0) goto LAB_0305e444;
                    /* try { // try from 0305e41c to 0315e41f has its CatchHandler @ 0305e4e8 */
                    /* try { // try from 0305e420 to 0315e427 has its CatchHandler @ 0305e510 */
                    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 0305e428 to 0315e42f has its CatchHandler @ 0305e534 */
                    uVar7 = uVar7 + 1;
                    /* try { // try from 0305e430 to 0315e433 has its CatchHandler @ 0305e4e4 */
                  } while ((int)uVar7 < (int)uVar1);
                }
                    /* try { // try from 0305e434 to 0315e43b has its CatchHandler @ 0305e530 */
                    /* try { // try from 0305e43c to 0315e43f has its CatchHandler @ 0305e4e0 */
                    /* try { // try from 0305e440 to 0315e447 has its CatchHandler @ 0305e52c */
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

