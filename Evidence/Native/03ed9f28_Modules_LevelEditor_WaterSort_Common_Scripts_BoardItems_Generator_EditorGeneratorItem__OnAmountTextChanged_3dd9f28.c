/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$OnAmountTextChanged
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__OnAmountTextChanged (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$OnAmountTextChanged
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__OnAmountTextChanged
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this,
   int32_t amount, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__OnAmountTextChanged_3dd9f28
               (long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
                    /* try { // try from 03ed9f28 to 03fd9f33 has its CatchHandler @ 03eda1a0 */
                    /* try { // try from 03ed9f38 to 03fd9f3f has its CatchHandler @ 03eda198 */
                    /* try { // try from 03ed9f44 to 03fd9f4f has its CatchHandler @ 03eda194 */
  if ((bRam0000000005c37e1f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057d47e0);
                    /* try { // try from 03ed9f64 to 03fd9f6b has its CatchHandler @ 03eda188 */
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_057f55a8);
                    /* try { // try from 03ed9f78 to 03fd9f8f has its CatchHandler @ 03eda18c */
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_057fd220);
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* try { // try from 03ed9fa0 to 03fd9fa3 has its CatchHandler @ 03eda208 */
    bRam0000000005c37e1f = 1;
  }
  plVar9 = (long *)(param_1 + 0x40);
  lVar6 = *plVar9;
  if (lVar6 == 0) {
                    /* try { // try from 03ed9fb0 to 03fd9fbf has its CatchHandler @ 03eda200 */
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
    if (lVar6 == 0) goto LAB_03eda0b8;
    System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar6,*(undefined8 *)PTR_DAT_057b99d0)
    ;
                    /* try { // try from 03ed9fd8 to 03fd9fdf has its CatchHandler @ 03eda1c4 */
    *plVar9 = lVar6;
    FUN_012d0d74(plVar9,lVar6);
    lVar6 = *plVar9;
    if (lVar6 == 0) goto LAB_03eda0b8;
  }
  puVar5 = PTR_DAT_05814878;
  puVar4 = PTR_DAT_057d47e0;
  iVar1 = *(int *)(lVar6 + 0x18);
  iVar3 = iVar1 - param_2;
  if (iVar1 < param_2) {
                    /* try { // try from 03ed9ff8 to 03fd9fff has its CatchHandler @ 03eda1c0 */
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
LAB_03eda0bc:
      puVar4 = PTR_DAT_057fd220;
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      if (lVar6 == 0) {
                    /* try { // try from 03eda104 to 03fda11b has its CatchHandler @ 03eda1b0 */
        return;
      }
      lVar7 = *(long *)(lVar6 + 0x20);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),lVar6,0,*(undefined8 *)(lVar7 + 0x28));
      return;
    }
    while (lVar6 != 0) {
                    /* try { // try from 03eda018 to 03fda01f has its CatchHandler @ 03eda1b8 */
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)puVar5;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) break;
                    /* try { // try from 03eda02c to 03fda04b has its CatchHandler @ 03eda1dc */
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 0xffffffff;
      }
      else {
                    /* try { // try from 03eda050 to 03fda057 has its CatchHandler @ 03eda1ac */
                    /* try { // try from 03eda058 to 03fda05f has its CatchHandler @ 03eda1a8 */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar6,0xffffffff);
      }
      param_2 = param_2 + -1;
      if (param_2 == 0) goto LAB_03eda0bc;
      lVar6 = *plVar9;
    }
  }
  else {
    if ((iVar3 == 0 || iVar1 < param_2) || (iVar3 < 1)) goto LAB_03eda0bc;
    while (lVar6 != 0) {
                    /* try { // try from 03eda098 to 03fda09f has its CatchHandler @ 03eda19c */
      if (0 < *(int *)(lVar6 + 0x18)) {
                    /* try { // try from 03eda0a0 to 03fda0ef has its CatchHandler @ 03ed9c54 */
        System_Collections_Generic_List_Int32Enum___RemoveAt_205344c
                  (lVar6,*(int *)(lVar6 + 0x18) + -1,*(undefined8 *)puVar4);
      }
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_03eda0bc;
      lVar6 = *plVar9;
    }
  }
LAB_03eda0b8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

