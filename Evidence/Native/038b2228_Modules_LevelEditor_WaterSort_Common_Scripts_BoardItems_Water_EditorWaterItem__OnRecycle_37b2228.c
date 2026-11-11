/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$OnRecycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__OnRecycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$OnRecycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__OnRecycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__OnRecycle_37b2228
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar7;
  
                    /* try { // try from 038b2234 to 039b224f has its CatchHandler @ 038b3498 */
  if ((bRam0000000005c33e6a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9b18);
                    /* try { // try from 038b2254 to 039b225f has its CatchHandler @ 038b30e8 */
    FUN_012d0dc8(PTR_DAT_057cb7f0);
    FUN_012d0dc8(PTR_DAT_057b88c0);
                    /* try { // try from 038b2268 to 039b2273 has its CatchHandler @ 038b30f0 */
    FUN_012d0dc8(PTR_DAT_057b1718);
    FUN_012d0dc8(PTR_DAT_057f8600);
    FUN_012d0dc8(PTR_DAT_057e2950);
                    /* try { // try from 038b2290 to 039b22a7 has its CatchHandler @ 038b349c */
    bRam0000000005c33e6a = 1;
  }
  puVar2 = PTR_DAT_057f8600;
  puVar7 = PTR_DAT_057e2950;
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(lVar8 + 0x18);
                    /* try { // try from 038b22b4 to 039b22d3 has its CatchHandler @ 038b3494 */
      if (iVar1 <= iVar3) {
                    /* try { // try from 038b22e8 to 039b22f3 has its CatchHandler @ 038b3058 */
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
                    /* try { // try from 038b2304 to 039b230f has its CatchHandler @ 038b3054 */
        lVar8 = *(long *)(param_1 + 0x50);
        if (lVar8 != 0) {
          iVar3 = 0;
          goto LAB_038b2310;
        }
        break;
      }
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar8,iVar3,*(undefined8 *)puVar2);
      if (lVar8 == 0) break;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
      lVar8 = *(long *)(param_1 + 0x48);
      iVar3 = iVar3 + 1;
    } while (lVar8 != 0);
  }
  goto LAB_038b233c;
  while( true ) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
                    /* try { // try from 038b2330 to 039b23e7 has its CatchHandler @ 038ae800 */
    lVar8 = *(long *)(param_1 + 0x50);
    iVar3 = iVar3 + 1;
    if (lVar8 == 0) break;
LAB_038b2310:
    iVar1 = *(int *)(lVar8 + 0x18);
    if (iVar1 <= iVar3) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (iVar1 < 1) {
        return;
      }
      puVar9 = *(undefined8 **)(lVar8 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        thunk_FUN_0136d790(PTR_DAT_057c1ad0,0,iVar1,0);
        uVar5 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar6 = thunk_FUN_0136d790(PTR_DAT_057b5798);
        System_ArgumentNullException___ctor_211d594(uVar5,uVar6,0);
      }
      else {
        if (iVar1 < 0) {
          thunk_FUN_0136d790(PTR_DAT_0577cad0,0,iVar1,0);
          uVar5 = thunk_FUN_01320e48();
          FUN_0103b554();
          puVar7 = PTR_DAT_057a0520;
        }
        else {
          iVar3 = FUN_0133d04c(puVar9,0);
          if (iVar3 < 1) {
            iVar4 = System_Array__get_Length_269b654(puVar9);
            if (-iVar3 <= iVar4 - iVar1) {
              iVar4 = il2cpp_array_element_size(*puVar9);
              (*(code *)PTR_memset_057579a8)
                        ((long)puVar9 + (long)iVar4 * (long)-iVar3 + 0x20,0,(long)(iVar4 * iVar1));
              return;
            }
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar5 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar7 = PTR_DAT_057d40f8;
          }
          else {
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar5 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar7 = PTR_DAT_057f4438;
          }
        }
        uVar6 = thunk_FUN_0136d790(puVar7);
        System_IndexOutOfRangeException___ctor_26c73a0(uVar5,uVar6,0);
      }
      uVar6 = thunk_FUN_0136d790(PTR_DAT_057b9a70);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar5,uVar6);
    }
    lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar8,iVar3,*(undefined8 *)puVar7);
                    /* try { // try from 038b2328 to 039b232f has its CatchHandler @ 038b30ec */
    if (lVar8 == 0) break;
  }
LAB_038b233c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

