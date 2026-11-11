/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t requiredAmount, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t requiredAmount, int32_t
   safeType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__Prepare_37b2edc
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 038b1f3c with catch @ 038b2ee8 */
                    /* catch() { ... } // from try @ 038b1f60 with catch @ 038b2ef8 */
  lVar4 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 038b0ae0 with catch @ 038b2f08 */
  if (cRam0000000005c230a9 == '\0') {
                    /* catch() { ... } // from try @ 038b044c with catch @ 038b2f14 */
    FUN_012d0dc8(PTR_DAT_05805c10);
                    /* catch() { ... } // from try @ 038afea0 with catch @ 038b2f20 */
    cRam0000000005c230a9 = '\x01';
  }
  puVar1 = PTR_DAT_05805c10;
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 038b1a6c with catch @ 038b2f2c */
                    /* catch() { ... } // from try @ 038b1b30 with catch @ 038b2f38 */
                    /* catch() { ... } // from try @ 038b1adc with catch @ 038b2f3c */
                    /* catch() { ... } // from try @ 038b17c4 with catch @ 038b2f40 */
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* catch() { ... } // from try @ 038b1778 with catch @ 038b2f44 */
                    /* catch() { ... } // from try @ 038b171c with catch @ 038b2f48 */
                    /* catch() { ... } // from try @ 038b1694 with catch @ 038b2f4c */
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar4,0);
                    /* catch() { ... } // from try @ 038b1648 with catch @ 038b2f50 */
                    /* catch() { ... } // from try @ 038b15f4 with catch @ 038b2f54 */
                    /* catch() { ... } // from try @ 038b156c with catch @ 038b2f58 */
    lVar4 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 038b1520 with catch @ 038b2f5c */
    if (cRam0000000005c230aa == '\0') {
                    /* catch() { ... } // from try @ 038b1444 with catch @ 038b2f60 */
                    /* catch() { ... } // from try @ 038b13f8 with catch @ 038b2f64 */
                    /* catch() { ... } // from try @ 038b14cc with catch @ 038b2f68 */
      FUN_012d0dc8(PTR_DAT_05805c10);
                    /* catch() { ... } // from try @ 038b131c with catch @ 038b2f6c */
                    /* catch() { ... } // from try @ 038b12d0 with catch @ 038b2f70 */
      cRam0000000005c230aa = '\x01';
    }
                    /* catch() { ... } // from try @ 038b13a4 with catch @ 038b2f74 */
                    /* catch() { ... } // from try @ 038b11d4 with catch @ 038b2f78 */
                    /* catch() { ... } // from try @ 038b1188 with catch @ 038b2f7c */
                    /* catch() { ... } // from try @ 038b1264 with catch @ 038b2f80 */
                    /* catch() { ... } // from try @ 038b1b08 with catch @ 038b2f84 */
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
                    /* catch() { ... } // from try @ 038b1b20 with catch @ 038b2f88 */
                    /* catch() { ... } // from try @ 038b175c with catch @ 038b2f8c */
                    /* catch() { ... } // from try @ 038b1748 with catch @ 038b2f90 */
                    /* catch() { ... } // from try @ 038b1624 with catch @ 038b2f94 */
                    /* catch() { ... } // from try @ 038b14fc with catch @ 038b2f98 */
                    /* catch() { ... } // from try @ 038b13d4 with catch @ 038b2f9c */
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              (*pfVar3 * _UNK_04339bec,pfVar3[1] * _UNK_04339bec,pfVar3[2] * _UNK_04339bec,0);
                    /* catch() { ... } // from try @ 038b1290 with catch @ 038b2fa0 */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 038b12ac with catch @ 038b2fa4 */
                    /* catch() { ... } // from try @ 038b10fc with catch @ 038b2fa8 */
                    /* catch() { ... } // from try @ 038b1164 with catch @ 038b2fac */
      UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
                    /* catch() { ... } // from try @ 038b109c with catch @ 038b2fb0 */
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(param_1 + 0x28),0)
        ;
                    /* try { // try from 038b2fd4 to 039b2fd7 has its CatchHandler @ 038b2ffc */
                    /* try { // try from 038b2fd8 to 039b300b has its CatchHandler @ 038ae800 */
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__SetSorting_37b35fc
                  (param_1,param_2,param_3);
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
                    /* catch() { ... } // from try @ 038b2fd4 with catch @ 038b2ffc */
            cRam0000000005c230a9 = '\x01';
          }
          if (lVar4 != 0) {
                    /* try { // try from 038b300c to 039b301f has its CatchHandler @ 038b374c */
            lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
                    /* catch() { ... } // from try @ 038b07dc with catch @ 038b3020
                       try { // try from 038b3020 to 039b3113 has its CatchHandler @ 038ae800 */
            UnityEngine_Transform__set_localScale_40932d0
                      (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                       *(undefined4 *)(lVar2 + 0x14),lVar4,0);
                    /* catch() { ... } // from try @ 038af8fc with catch @ 038b3024 */
                    /* catch() { ... } // from try @ 038b0660 with catch @ 038b3028 */
                    /* catch() { ... } // from try @ 038b06ac with catch @ 038b302c */
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeView__SetRequiredAmount_37b315c
                      (param_1,param_4);
                    /* catch() { ... } // from try @ 038b073c with catch @ 038b3030 */
                    /* catch() { ... } // from try @ 038b00b0 with catch @ 038b3034 */
                    /* catch() { ... } // from try @ 038b00fc with catch @ 038b3038 */
                    /* catch() { ... } // from try @ 038b018c with catch @ 038b303c */
                    /* catch() { ... } // from try @ 038b1114 with catch @ 038b3040 */
            switch(param_5) {
            case 1:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 2:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 3:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 4:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 5:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 6:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 7:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            case 8:
              lVar4 = *(long *)(param_1 + 0x40);
              break;
            default:
              return;
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (pcRam0000000005c3a788 == (code *)0x0) {
              pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
            }
            (*pcRam0000000005c3a788)(lVar4,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

