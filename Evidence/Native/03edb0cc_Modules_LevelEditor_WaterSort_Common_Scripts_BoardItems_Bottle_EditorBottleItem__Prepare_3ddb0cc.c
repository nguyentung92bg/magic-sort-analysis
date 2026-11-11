/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, int32_t height, bool isCompletable, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   int32_t height, bool isCompletable,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o*
   bottleCollection, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__Prepare_3ddb0cc
               (long *param_1,undefined4 param_2,byte param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong extraout_x1;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
                    /* try { // try from 03edb0dc to 03fdb0e3 has its CatchHandler @ 03edb1a4 */
                    /* try { // try from 03edb0f0 to 03fdb10f has its CatchHandler @ 03edb1a8 */
  if ((bRam0000000005c37e48 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805a58);
    FUN_012d0dc8(PTR_DAT_0578b8d8);
    bRam0000000005c37e48 = 1;
  }
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(byte *)((long)param_1 + 0x2c) = param_3 & 1;
  FUN_012d0d74(param_1 + 0xf,param_4);
  puVar3 = PTR_DAT_05805a58;
  puVar2 = PTR_DAT_0578b8d8;
                    /* try { // try from 03edb134 to 03fdb13b has its CatchHandler @ 03edb1bc */
                    /* try { // try from 03edb13c to 03fdb16f has its CatchHandler @ 03edaf8c */
  if (0 < (int)param_1[5]) {
    iVar9 = 0;
    do {
      lVar8 = param_1[0xc];
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 03edb170 to 03fdb173 has its CatchHandler @ 03edb1a0 */
                    /* try { // try from 03edb174 to 03fdb177 has its CatchHandler @ 03edb19c */
                    /* try { // try from 03edb178 to 03fdb17b has its CatchHandler @ 03edb198 */
                    /* try { // try from 03edb17c to 03fdb17f has its CatchHandler @ 03edb194 */
      if ((lVar4 == 0) ||
         (Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell___ctor_37a379c
                    (0,(float)iVar9,0,lVar4,0), lVar8 == 0)) goto LAB_03edb274;
                    /* try { // try from 03edb180 to 03fdb183 has its CatchHandler @ 03edb190 */
                    /* try { // try from 03edb184 to 03fdb187 has its CatchHandler @ 03edb18c */
      lVar6 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 03edb188 to 03fdb18b has its CatchHandler @ 03edb1b4 */
      lVar7 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 03edb184 with catch @ 03edb18c
                       try { // try from 03edb18c to 03fdb1d7 has its CatchHandler @ 03edaf8c */
                    /* catch() { ... } // from try @ 03edb180 with catch @ 03edb190 */
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 03edb17c with catch @ 03edb194 */
      if (lVar6 == 0) goto LAB_03edb274;
                    /* catch() { ... } // from try @ 03edb178 with catch @ 03edb198 */
      uVar1 = *(uint *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 03edb174 with catch @ 03edb19c */
                    /* catch() { ... } // from try @ 03edb170 with catch @ 03edb1a0 */
                    /* catch() { ... } // from try @ 03edb0dc with catch @ 03edb1a4 */
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    /* catch() { ... } // from try @ 03edb0f0 with catch @ 03edb1a8 */
                    /* catch() { ... } // from try @ 03edb0c0 with catch @ 03edb1ac */
                    /* catch() { ... } // from try @ 03edb0ac with catch @ 03edb1b0 */
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 03edb094 with catch @ 03edb1b4
                       catch() { ... } // from try @ 03edb188 with catch @ 03edb1b4 */
        plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = lVar4;
                    /* catch() { ... } // from try @ 03edb080 with catch @ 03edb1b8 */
                    /* catch() { ... } // from try @ 03edb134 with catch @ 03edb1bc */
        FUN_012d0d74(plVar5,lVar4);
                    /* catch() { ... } // from try @ 03edb04c with catch @ 03edb1c0 */
      }
      else {
                    /* try { // try from 03edb1d8 to 03fdb1ef has its CatchHandler @ 03edb250 */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))(lVar8,lVar4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_1[5]);
  }
                    /* try { // try from 03edb1f0 to 03fdb23f has its CatchHandler @ 03edaf8c */
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    auVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                        (lVar4,0,0);
    Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSorting_4002868
              (lVar4,auVar10._0_8_,auVar10._8_8_,1,0);
    if (param_1[6] != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateBounds_3dde690
                (param_1);
                    /* try { // try from 03edb240 to 03fdb24f has its CatchHandler @ 03edb250 */
      if (param_1[6] != 0) {
                    /* catch() { ... } // from try @ 03edb1d8 with catch @ 03edb250
                       catch() { ... } // from try @ 03edb240 with catch @ 03edb250 */
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Prepare_3dde9ac
                  (param_1[6],(int)param_1[5],param_2,extraout_x1 & 0xffffffff);
                    /* try { // try from 03edb254 to 03fdb257 has its CatchHandler @ 03edb260 */
                    /* try { // try from 03edb258 to 03fdb263 has its CatchHandler @ 03edaf8c */
                    /* catch() { ... } // from try @ 03edb254 with catch @ 03edb260 */
                    /* WARNING: Could not recover jumptable at 0x03edb270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        return;
      }
    }
  }
LAB_03edb274:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

