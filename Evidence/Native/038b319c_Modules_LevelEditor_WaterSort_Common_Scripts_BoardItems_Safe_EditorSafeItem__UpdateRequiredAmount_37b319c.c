/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeItem$$UpdateRequiredAmount
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem__UpdateRequiredAmount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem_o* __this, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeItem$$UpdateRequiredAmount
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem__UpdateRequiredAmount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem_o* __this, int32_t
   requiredAmount, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem__UpdateRequiredAmount_37b319c
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e70 & 1) == 0) {
                    /* try { // try from 038b31cc to 039b3217 has its CatchHandler @ 038b3218 */
    FUN_012d0dc8(PTR_DAT_05811ff8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057a8d60);
    bRam0000000005c33e70 = 1;
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  puVar2 = PTR_DAT_05811ff8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 038b31cc with catch @ 038b3218 */
                    /* catch() { ... } // from try @ 038b3194 with catch @ 038b321c */
                    /* catch() { ... } // from try @ 038b3188 with catch @ 038b3220 */
                    /* catch() { ... } // from try @ 038b3114 with catch @ 038b3224
                       catch() { ... } // from try @ 038b3170 with catch @ 038b3224 */
                    /* try { // try from 038b322c to 039b322f has its CatchHandler @ 038b374c */
                    /* try { // try from 038b3230 to 039b326b has its CatchHandler @ 038ae800 */
                    /* catch() { ... } // from try @ 038b315c with catch @ 038b3238 */
    if (*(long *)(lVar3 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343e0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057a8d60 + 0x20) + 0xc0) + 0x18) +
                  8))(*(long *)(lVar3 + 0x18),*(undefined4 *)(param_1 + 0x44),param_2);
      return;
    }
    return;
  }
                    /* catch() { ... } // from try @ 038b314c with catch @ 038b323c */
                    /* catch() { ... } // from try @ 038b3148 with catch @ 038b3240 */
                    /* catch() { ... } // from try @ 038b21e8 with catch @ 038b3248 */
  return;
}

