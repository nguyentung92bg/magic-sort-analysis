/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchTargetOffsetForItemType
UnityEngine_Vector2_o Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchTargetOffsetForItemType (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchTargetOffsetForItemType
   UnityEngine_Vector2_o
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchTargetOffsetForItemType
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t itemType,
   const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchTargetOffsetForItemType_20fa198
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_05801b90;
                    /* try { // try from 021fa1a8 to 022fa1cf has its CatchHandler @ 021fa118 */
  if ((bRam0000000005c2979a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7048);
                    /* try { // try from 021fa1d0 to 022fa1df has its CatchHandler @ 021fa1e0 */
    FUN_012d0dc8(PTR_DAT_0580cfc0);
                    /* catch() { ... } // from try @ 021fa190 with catch @ 021fa1e0
                       catch() { ... } // from try @ 021fa1d0 with catch @ 021fa1e0 */
    FUN_012d0dc8(PTR_DAT_057a4898);
                    /* try { // try from 021fa1e4 to 022fa1e7 has its CatchHandler @ 021fa1f0 */
                    /* try { // try from 021fa1e8 to 022fa1f3 has its CatchHandler @ 021fa118 */
    FUN_012d0dc8(PTR_DAT_05805c40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021fa1e4 with catch @ 021fa1f0
                        */
    FUN_012d0dc8(PTR_DAT_05801b90);
    bRam0000000005c2979a = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 == 0) {
LAB_021fa2d4:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Object___ctor_23dfe5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = param_2;
  lVar5 = *(long *)(param_1 + 0x220);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0)) {
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0580cfc0);
    puVar1 = PTR_DAT_057f7048;
    if (lVar3 == 0) goto LAB_021fa2d4;
    System_Func_object__bool____ctor_338137c(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805c40,0);
    lVar2 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                      (lVar5,lVar3,*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      puVar4 = (undefined4 *)(lVar2 + 0x14);
      goto LAB_021fa2bc;
    }
  }
  if (cRam0000000005c2345c == '\0') {
    FUN_012d0dc8(PTR_DAT_05803150);
    cRam0000000005c2345c = '\x01';
  }
  puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05803150 + 0xb8);
LAB_021fa2bc:
  return *puVar4;
}

