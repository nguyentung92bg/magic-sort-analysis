/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorItemGenerator$$Generate
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator__Generate (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorItemGenerator$$Generate
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator__Generate
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator_o* __this, const
   MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator__Generate_37b15a8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0576c200;
                    /* try { // try from 038b15b8 to 039b15c7 has its CatchHandler @ 038b1e98 */
  if ((bRam0000000005c33e65 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fc4e0);
                    /* try { // try from 038b15d8 to 039b15db has its CatchHandler @ 038b1e9c */
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c33e65 = 1;
  }
  puVar2 = PTR_DAT_057fc4e0;
                    /* try { // try from 038b15f4 to 039b15fb has its CatchHandler @ 038b2f54 */
  lVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemPairs__GenerateItem_3ddcde0
                    (*(undefined4 *)(param_1 + 0x10),0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
                    /* try { // try from 038b1624 to 039b162b has its CatchHandler @ 038b2f94 */
  uVar5 = UnityEngine_Object__Instantiate_object__2aac7c0(uVar5,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    FUN_012d0d74();
    *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 038b1648 to 039b164f has its CatchHandler @ 038b2f50 */
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850
              (lVar3,*(undefined8 *)(param_1 + 0x20));
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
              (*puVar4,puVar4[1],puVar4[2],lVar3);
                    /* try { // try from 038b1694 to 039b169b has its CatchHandler @ 038b2f4c */
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Initialize_37ae1f4(lVar3);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

