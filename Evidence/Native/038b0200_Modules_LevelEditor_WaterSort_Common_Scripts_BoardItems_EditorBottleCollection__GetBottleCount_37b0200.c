/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetBottleCount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetBottleCount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetBottleCount
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetBottleCount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const
   MethodInfo* method); */

int Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetBottleCount_37b0200
              (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
                    /* try { // try from 038b0218 to 039b0223 has its CatchHandler @ 038b32e8 */
  if ((bRam0000000005c33e51 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05777528);
    FUN_012d0dc8(PTR_DAT_05795a80);
                    /* try { // try from 038b0238 to 039b0243 has its CatchHandler @ 038b32f0 */
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    bRam0000000005c33e51 = 1;
  }
  puVar1 = PTR_DAT_057c3bb8;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
                    /* try { // try from 038b0258 to 039b0263 has its CatchHandler @ 038b32f4 */
    iVar4 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
                    /* try { // try from 038b0294 to 039b029f has its CatchHandler @ 038b32c4 */
        return iVar4;
      }
                    /* try { // try from 038b0274 to 039b027f has its CatchHandler @ 038b32f8 */
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar5,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      lVar2 = *(long *)(param_1 + 0x18);
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(lVar3 + 0x18) + iVar4;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

