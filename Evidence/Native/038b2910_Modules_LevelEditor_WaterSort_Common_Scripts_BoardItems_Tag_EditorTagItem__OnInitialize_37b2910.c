/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagItem$$OnInitialize
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__OnInitialize_37b2910
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 038b2924 to 039b2927 has its CatchHandler @ 038b2dd4 */
  if ((bRam0000000005c33e6d & 1) == 0) {
                    /* try { // try from 038b2928 to 039b292b has its CatchHandler @ 038b2dd0 */
                    /* try { // try from 038b292c to 039b2953 has its CatchHandler @ 038b2e9c */
    FUN_012d0dc8(PTR_DAT_057e4bf8);
    bRam0000000005c33e6d = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_057e4bf8;
                    /* try { // try from 038b2954 to 039b2957 has its CatchHandler @ 038b2e20 */
                    /* try { // try from 038b2958 to 039b295b has its CatchHandler @ 038b2dcc */
    bVar2 = *(byte *)(lVar6 + 300);
                    /* try { // try from 038b295c to 039b295f has its CatchHandler @ 038b2e08 */
                    /* try { // try from 038b2960 to 039b2963 has its CatchHandler @ 038b2e04 */
                    /* try { // try from 038b2964 to 039b297b has its CatchHandler @ 038b2e24 */
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x30) = plVar5;
                    /* try { // try from 038b2980 to 039b299b has its CatchHandler @ 038b2e78 */
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* try { // try from 038b299c to 039b299f has its CatchHandler @ 038b2e18 */
                    /* try { // try from 038b29a0 to 039b29a3 has its CatchHandler @ 038b2dc8 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b29a4 to 039b29a7 has its CatchHandler @ 038b2e20 */
    FUN_012d1288(plVar5,lVar6);
  }
                    /* try { // try from 038b29a8 to 039b29af has its CatchHandler @ 038b2e1c */
  *(undefined8 *)(param_1 + 0x30) = 0;
FUN_012d0d74:
                    /* try { // try from 038b29b0 to 039b29b3 has its CatchHandler @ 038b2e18 */
                    /* try { // try from 038b29b4 to 039b29bb has its CatchHandler @ 038b2e50 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x30U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

