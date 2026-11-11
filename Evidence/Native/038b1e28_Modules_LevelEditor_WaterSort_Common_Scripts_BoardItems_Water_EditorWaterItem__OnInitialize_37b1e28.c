/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$OnInitialize
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__OnInitialize_37b1e28
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
                    /* catch() { ... } // from try @ 038b1bf8 with catch @ 038b1e28
                       catch() { ... } // from try @ 038b1df4 with catch @ 038b1e28 */
                    /* catch() { ... } // from try @ 038b1c8c with catch @ 038b1e2c */
                    /* catch() { ... } // from try @ 038b1c48 with catch @ 038b1e30 */
                    /* catch() { ... } // from try @ 038b1c04 with catch @ 038b1e34 */
                    /* catch() { ... } // from try @ 038b1bb4 with catch @ 038b1e38 */
                    /* catch() { ... } // from try @ 038b1b70 with catch @ 038b1e3c */
  if ((bRam0000000005c33e68 & 1) == 0) {
                    /* catch() { ... } // from try @ 038b1ca8 with catch @ 038b1e40
                       catch() { ... } // from try @ 038b1dc8 with catch @ 038b1e40 */
                    /* catch() { ... } // from try @ 038b1c64 with catch @ 038b1e44
                       catch() { ... } // from try @ 038b1d90 with catch @ 038b1e44 */
                    /* catch() { ... } // from try @ 038b1c20 with catch @ 038b1e48
                       catch() { ... } // from try @ 038b1d64 with catch @ 038b1e48 */
    FUN_012d0dc8(PTR_DAT_0579e4e0);
                    /* catch() { ... } // from try @ 038b1bd0 with catch @ 038b1e4c
                       catch() { ... } // from try @ 038b1d38 with catch @ 038b1e4c */
                    /* catch() { ... } // from try @ 038b1b8c with catch @ 038b1e50
                       catch() { ... } // from try @ 038b1d0c with catch @ 038b1e50 */
                    /* catch() { ... } // from try @ 038b1ab0 with catch @ 038b1e54 */
    FUN_012d0dc8(PTR_DAT_057bb430);
                    /* catch() { ... } // from try @ 038b17f4 with catch @ 038b1e60 */
    FUN_012d0dc8(PTR_DAT_057d1440);
                    /* catch() { ... } // from try @ 038b1844 with catch @ 038b1e64 */
                    /* catch() { ... } // from try @ 038b18fc with catch @ 038b1e68 */
                    /* catch() { ... } // from try @ 038b17e4 with catch @ 038b1e6c */
    FUN_012d0dc8(PTR_DAT_0575c5a0);
    FUN_012d0dc8(PTR_DAT_057f0b58);
    bRam0000000005c33e68 = 1;
  }
                    /* try { // try from 038b1e84 to 039b1e87 has its CatchHandler @ 038b2ea0 */
  plVar6 = *(long **)(param_1 + 0x20);
                    /* try { // try from 038b1e88 to 039b1ebf has its CatchHandler @ 038ae800 */
  if (plVar6 != (long *)0x0) {
                    /* catch() { ... } // from try @ 038b16e0 with catch @ 038b1e90 */
                    /* catch() { ... } // from try @ 038b1700 with catch @ 038b1e94 */
                    /* catch() { ... } // from try @ 038b15b8 with catch @ 038b1e98 */
    lVar7 = *(long *)PTR_DAT_0579e4e0;
                    /* catch() { ... } // from try @ 038b15d8 with catch @ 038b1e9c */
                    /* catch() { ... } // from try @ 038b1490 with catch @ 038b1ea0 */
    bVar2 = *(byte *)(lVar7 + 300);
                    /* catch() { ... } // from try @ 038b14b0 with catch @ 038b1ea4 */
                    /* catch() { ... } // from try @ 038b16b4 with catch @ 038b1ea8 */
    if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar7)) {
                    /* try { // try from 038b1ec0 to 039b1ec3 has its CatchHandler @ 038b2eb8 */
                    /* try { // try from 038b1ec4 to 039b1eeb has its CatchHandler @ 038ae800 */
      *(long **)(param_1 + 0x30) = plVar6;
                    /* catch() { ... } // from try @ 038b1368 with catch @ 038b1ecc */
                    /* catch() { ... } // from try @ 038b1388 with catch @ 038b1ed0 */
                    /* catch() { ... } // from try @ 038b158c with catch @ 038b1ed4 */
      if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar7)) goto LAB_038b1efc;
    }
                    /* try { // try from 038b1eec to 039b1eef has its CatchHandler @ 038b2ec8 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b1ef0 to 039b1f17 has its CatchHandler @ 038ae800 */
    FUN_012d1288(plVar6,lVar7);
  }
                    /* catch() { ... } // from try @ 038b1220 with catch @ 038b1ef8 */
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_038b1efc:
                    /* catch() { ... } // from try @ 038b1248 with catch @ 038b1efc */
  puVar5 = PTR_DAT_0575c5a0;
                    /* catch() { ... } // from try @ 038b1464 with catch @ 038b1f00 */
  FUN_012d0d74();
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_057f0b58;
  if (lVar7 != 0) {
                    /* try { // try from 038b1f18 to 039b1f1b has its CatchHandler @ 038b2ed8 */
                    /* try { // try from 038b1f1c to 039b1f3b has its CatchHandler @ 038ae800 */
                    /* catch() { ... } // from try @ 038b133c with catch @ 038b1f24 */
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057bb430);
    *(long *)(param_1 + 0x48) = lVar7;
                    /* try { // try from 038b1f3c to 039b1f3f has its CatchHandler @ 038b2ee8 */
    FUN_012d0d74((long *)(param_1 + 0x48),lVar7);
                    /* try { // try from 038b1f40 to 039b1f5f has its CatchHandler @ 038ae800 */
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 038b11f4 with catch @ 038b1f48 */
    if (lVar7 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057d1440);
                    /* try { // try from 038b1f60 to 039b1f63 has its CatchHandler @ 038b2ef8 */
      plVar6 = (long *)(param_1 + 0x50);
      *plVar6 = lVar7;
                    /* try { // try from 038b1f64 to 039b21e7 has its CatchHandler @ 038ae800 */
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

