/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$get_Obj
System_Nullable_OBIMObject__o magicsort_schemas_v1_level_OverBoardItemModel__get_Obj (magicsort_schemas_v1_level_OverBoardItemModel_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$get_Obj
   System_Nullable_OBIMObject__o magicsort_schemas_v1_level_OverBoardItemModel__get_Obj
   (magicsort_schemas_v1_level_OverBoardItemModel_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_level_OverBoardItemModel__get_Obj_1600898
               (undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 01700898 to 0180089b has its CatchHandler @ 017008e0 */
                    /* try { // try from 017008a0 to 018008a3 has its CatchHandler @ 017008dc */
                    /* try { // try from 017008a8 to 018008ab has its CatchHandler @ 017008d8 */
                    /* try { // try from 017008b0 to 018008b3 has its CatchHandler @ 017008d4 */
  if ((bRam0000000005c243ab & 1) == 0) {
                    /* try { // try from 017008b8 to 018008bb has its CatchHandler @ 017008fc */
                    /* try { // try from 017008c0 to 018008c3 has its CatchHandler @ 017008d0 */
    FUN_012d0dc8(PTR_DAT_057daeb0);
                    /* try { // try from 017008c8 to 018008cb has its CatchHandler @ 017008e4 */
    bRam0000000005c243ab = 1;
  }
                    /* try { // try from 017008cc to 01800927 has its CatchHandler @ 017004d0 */
                    /* catch() { ... } // from try @ 017008c0 with catch @ 017008d0 */
                    /* catch() { ... } // from try @ 017008b0 with catch @ 017008d4 */
                    /* catch() { ... } // from try @ 017008a8 with catch @ 017008d8 */
  uStack_30 = 0;
  uStack_28 = 0;
                    /* catch() { ... } // from try @ 017008a0 with catch @ 017008dc */
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,6,0);
  puVar1 = PTR_DAT_057daeb0;
                    /* catch() { ... } // from try @ 01700898 with catch @ 017008e0 */
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
                    /* catch() { ... } // from try @ 01700870 with catch @ 017008e4
                       catch() { ... } // from try @ 017008c8 with catch @ 017008e4 */
    uStack_30 = 0;
    uStack_28 = 0;
                    /* catch() { ... } // from try @ 017007e8 with catch @ 017008e8 */
                    /* catch() { ... } // from try @ 01700840 with catch @ 017008ec */
                    /* catch() { ... } // from try @ 0170078c with catch @ 017008f0 */
                    /* catch() { ... } // from try @ 017007a4 with catch @ 017008f4 */
                    /* catch() { ... } // from try @ 01700768 with catch @ 017008f8 */
                    /* catch() { ... } // from try @ 01700800 with catch @ 017008fc
                       catch() { ... } // from try @ 017008b8 with catch @ 017008fc */
                    /* catch() { ... } // from try @ 017006e4 with catch @ 01700900 */
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,*param_2 + iVar2,0);
                    /* catch() { ... } // from try @ 017005cc with catch @ 01700904 */
                    /* catch() { ... } // from try @ 017005b8 with catch @ 01700908 */
                    /* catch() { ... } // from try @ 017006b8 with catch @ 0170090c */
                    /* catch() { ... } // from try @ 01700640 with catch @ 01700910 */
    auVar5 = magicsort_schemas_v1_level_OBIMObject____assign_1600440
                       (&uStack_30,uVar3,*(undefined8 *)(param_2 + 2));
    uVar4 = *(undefined8 *)puVar1;
                    /* try { // try from 01700928 to 0180092b has its CatchHandler @ 01700974 */
                    /* try { // try from 0170092c to 0180097f has its CatchHandler @ 017004d0 */
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_OBIMObject____ctor_203ed2c(param_1,auVar5._0_8_,auVar5._8_8_,uVar4);
  }
  return;
}

