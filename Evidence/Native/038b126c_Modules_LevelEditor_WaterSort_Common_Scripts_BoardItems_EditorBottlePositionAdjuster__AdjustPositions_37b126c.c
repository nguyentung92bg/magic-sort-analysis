/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottlePositionAdjuster$$AdjustPositions
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottlePositionAdjuster__AdjustPositions (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* bottleCollection, Modules_Infrastructure_Common_Scripts_CameraService_o* cameraService, Modules_LevelEditor_WaterSort_Common_GridRenderer_o* gridRenderer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottlePositionAdjuster$$AdjustPositions
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottlePositionAdjuster__AdjustPositions
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o*
   bottleCollection, Modules_Infrastructure_Common_Scripts_CameraService_o* cameraService,
   Modules_LevelEditor_WaterSort_Common_GridRenderer_o* gridRenderer, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottlePositionAdjuster__AdjustPositions_37b126c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c33e63 & 1) == 0) {
                    /* try { // try from 038b1290 to 039b1293 has its CatchHandler @ 038b2fa0 */
    FUN_012d0dc8(PTR_DAT_05773de8);
    FUN_012d0dc8(PTR_DAT_0581b968);
                    /* try { // try from 038b12ac to 039b12b3 has its CatchHandler @ 038b2fa4 */
    FUN_012d0dc8(PTR_DAT_0578d650);
    FUN_012d0dc8(PTR_DAT_0580df18);
    FUN_012d0dc8(PTR_DAT_05784928);
                    /* try { // try from 038b12d0 to 039b12d7 has its CatchHandler @ 038b2f70 */
    FUN_012d0dc8(PTR_DAT_057b4dd0);
    FUN_012d0dc8(PTR_DAT_0580c250);
    FUN_012d0dc8(PTR_DAT_057d9738);
    FUN_012d0dc8(PTR_DAT_057f44c8);
    FUN_012d0dc8(PTR_DAT_05780418);
    bRam0000000005c33e63 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
                    /* try { // try from 038b131c to 039b1323 has its CatchHandler @ 038b2f6c */
  if ((param_2 != 0) &&
     (Modules_Infrastructure_Common_Scripts_CameraService__GetWidth_40e2fe0(param_2,0),
     puVar1 = PTR_DAT_05780418, param_1 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(long *)PTR_DAT_05780418;
                    /* try { // try from 038b133c to 039b1343 has its CatchHandler @ 038b1f24 */
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_0580c250;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 038b1368 to 039b1377 has its CatchHandler @ 038b1ecc */
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_038b145c;
                    /* try { // try from 038b1388 to 039b138b has its CatchHandler @ 038b1ed0 */
      System_Func_object__object____ctor_33820ac(lVar7,uVar8,*(undefined8 *)PTR_DAT_057f44c8,0);
                    /* try { // try from 038b13a4 to 039b13ab has its CatchHandler @ 038b2f74 */
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar7;
      FUN_012d0d74(plVar4,lVar7);
    }
    puVar2 = PTR_DAT_0578d650;
    puVar1 = PTR_DAT_05773de8;
                    /* try { // try from 038b13d4 to 039b13db has its CatchHandler @ 038b2f9c */
    uVar6 = System_Linq_Enumerable__Select_object__object__2427df8
                      (uVar6,lVar7,*(undefined8 *)PTR_DAT_0581b968);
    uVar6 = System_Linq_Enumerable__ToList_object__242f814(uVar6,*(undefined8 *)puVar2);
    System_Linq_Enumerable__ToList_object__242f814(uVar6,*(undefined8 *)puVar2);
                    /* try { // try from 038b13f8 to 039b13ff has its CatchHandler @ 038b2f64 */
    uVar6 = System_Linq_Enumerable__Distinct_object__241f5b0(uVar6,*(undefined8 *)puVar1);
    lVar3 = System_Linq_Enumerable__ToList_object__242f814(uVar6,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_0580df18;
    puVar1 = PTR_DAT_05784928;
    if (lVar3 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_057d9738);
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_48,*(undefined8 *)puVar1);
      } while ((uVar5 & 1) != 0);
                    /* try { // try from 038b1444 to 039b144b has its CatchHandler @ 038b2f60 */
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar2);
      return;
    }
  }
LAB_038b145c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

