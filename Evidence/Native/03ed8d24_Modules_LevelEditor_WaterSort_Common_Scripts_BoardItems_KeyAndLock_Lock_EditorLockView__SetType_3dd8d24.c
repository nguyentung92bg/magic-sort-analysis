/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Lock.EditorLockView$$SetType
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView__SetType (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView_o* __this, int32_t keyLockType, bool isDouble, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Lock.EditorLockView$$SetType
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView__SetType
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView_o*
   __this, int32_t keyLockType, bool isDouble, int32_t bottleHeight, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_KeyAndLock_Lock_EditorLockView__SetType_3dd8d24
               (long param_1,int param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
                    /* try { // try from 03ed8d30 to 03fd8d37 has its CatchHandler @ 03ed8e30 */
  lVar2 = 0x28;
  if ((param_3 & 1) == 0) {
    lVar2 = 0x20;
  }
  if (param_1 == 0) {
LAB_03ed8e44:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03ed8c50 with catch @ 03ed8e44 */
    FUN_012d0ef0();
  }
                    /* try { // try from 03ed8d4c to 03fd8d53 has its CatchHandler @ 03ed8e28 */
  plVar7 = (long *)(param_1 + 0x38);
  *plVar7 = *(long *)(param_1 + lVar2);
                    /* try { // try from 03ed8d60 to 03fd8d7f has its CatchHandler @ 03ed8e2c */
  FUN_012d0d74(plVar7);
  if ((*plVar7 == 0) ||
     (lVar2 = UnityEngine_Component__get_gameObject_408b480(*plVar7,0), lVar2 == 0))
  goto LAB_03ed8e44;
  UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
  if (param_2 == 1) {
    if (((*plVar7 == 0) || (lVar2 = *(long *)(param_1 + 0x30), lVar2 == 0)) ||
       (lVar3 = *(long *)(*plVar7 + 0x20), lVar3 == 0)) goto LAB_03ed8e44;
    puVar6 = (undefined8 *)(lVar2 + 0x30);
    puVar5 = (undefined8 *)(lVar2 + 0x28);
  }
  else if (param_2 == 2) {
                    /* try { // try from 03ed8df8 to 03fd8dfb has its CatchHandler @ 03ed8e50 */
    if (((*plVar7 == 0) || (lVar2 = *(long *)(param_1 + 0x30), lVar2 == 0)) ||
       (lVar3 = *(long *)(*plVar7 + 0x20), lVar3 == 0)) goto LAB_03ed8e44;
                    /* try { // try from 03ed8dfc to 03fd8dff has its CatchHandler @ 03ed8e20 */
    puVar6 = (undefined8 *)(lVar2 + 0x40);
                    /* try { // try from 03ed8e00 to 03fd8e03 has its CatchHandler @ 03ed8e1c */
    puVar5 = (undefined8 *)(lVar2 + 0x38);
  }
  else {
    if (param_2 != 3) goto LAB_03ed8e18;
                    /* try { // try from 03ed8da8 to 03fd8dab has its CatchHandler @ 03ed8e48 */
                    /* try { // try from 03ed8dac to 03fd8df7 has its CatchHandler @ 03ed8b64 */
    if (((*plVar7 == 0) || (lVar2 = *(long *)(param_1 + 0x30), lVar2 == 0)) ||
       (lVar3 = *(long *)(*plVar7 + 0x20), lVar3 == 0)) goto LAB_03ed8e44;
    puVar6 = (undefined8 *)(lVar2 + 0x20);
    puVar5 = (undefined8 *)(lVar2 + 0x18);
  }
                    /* try { // try from 03ed8e04 to 03fd8e07 has its CatchHandler @ 03ed8e18 */
                    /* try { // try from 03ed8e08 to 03fd8e0b has its CatchHandler @ 03ed8e4c */
  if ((param_3 & 1) == 0) {
    puVar6 = puVar5;
  }
                    /* try { // try from 03ed8e0c to 03fd8e0f has its CatchHandler @ 03ed8e14 */
                    /* try { // try from 03ed8e10 to 03fd8e13 has its CatchHandler @ 03ed8e38 */
                    /* catch() { ... } // from try @ 03ed8e0c with catch @ 03ed8e14
                       try { // try from 03ed8e14 to 03fd8e6b has its CatchHandler @ 03ed8b64 */
  UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88(lVar3,*puVar6,0);
LAB_03ed8e18:
                    /* catch() { ... } // from try @ 03ed8e04 with catch @ 03ed8e18 */
  lVar2 = *plVar7;
                    /* catch() { ... } // from try @ 03ed8e00 with catch @ 03ed8e1c */
  if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 03ed8d1c with catch @ 03ed8e34 */
                    /* catch() { ... } // from try @ 03ed8cdc with catch @ 03ed8e38
                       catch() { ... } // from try @ 03ed8e10 with catch @ 03ed8e38 */
                    /* catch() { ... } // from try @ 03ed8c7c with catch @ 03ed8e3c */
                    /* catch() { ... } // from try @ 03ed8c60 with catch @ 03ed8e40 */
    return;
  }
  if ((bRam0000000005c2b28f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057719c0,0);
    bRam0000000005c2b28f = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)PTR_DAT_057719c0;
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar4,0,0);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar4);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

