/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$GetTrailTargetPositions
System_Collections_Generic_List_Vector3__o* Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__GetTrailTargetPositions (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$GetTrailTargetPositions
   System_Collections_Generic_List_Vector3__o*
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__GetTrailTargetPositions
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__GetTrailTargetPositions_20eec8c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar2 = PTR_DAT_0577bf88;
                    /* try { // try from 021eeca4 to 022eeca7 has its CatchHandler @ 021eecc4 */
                    /* try { // try from 021eeca8 to 022eecb3 has its CatchHandler @ 021eecc8 */
  if ((bRam0000000005c29745 & 1) == 0) {
                    /* try { // try from 021eecb4 to 022eecdf has its CatchHandler @ 021eec20 */
    FUN_012d0dc8(PTR_DAT_05809010);
    FUN_012d0dc8(PTR_DAT_05807d20);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021eeca4 with catch @ 021eecc4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021eeca8 with catch @ 021eecc8
                        */
    FUN_012d0dc8(PTR_DAT_0577bf88);
    bRam0000000005c29745 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 021eece0 to 022eecf7 has its CatchHandler @ 021eed24 */
  if (lVar3 != 0) {
    System_Collections_Generic_List_Vector3____ctor_2275524(lVar3,*(undefined8 *)PTR_DAT_05807d20);
    puVar2 = PTR_DAT_05809010;
                    /* try { // try from 021eecf8 to 022eed13 has its CatchHandler @ 021eec20 */
    if ((*(long *)(param_4 + 0x20) != 0) &&
       (plVar4 = *(long **)(*(long *)(param_4 + 0x20) + 0x10), plVar4 != (long *)0x0)) {
                    /* try { // try from 021eed14 to 022eed23 has its CatchHandler @ 021eed24 */
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      lVar5 = *(long *)(lVar3 + 0x10);
                    /* catch() { ... } // from try @ 021eece0 with catch @ 021eed24
                       catch() { ... } // from try @ 021eed14 with catch @ 021eed24 */
      lVar6 = *(long *)puVar2;
                    /* try { // try from 021eed28 to 022eed2b has its CatchHandler @ 021eed34 */
                    /* try { // try from 021eed2c to 022eed37 has its CatchHandler @ 021eec20 */
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021eed28 with catch @ 021eed34
                        */
        uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 021eed38 to 022eed77 has its CatchHandler @ 021eed38
                       catch() { ... } // from try @ 021eed38 with catch @ 021eed38
                       catch() { ... } // from try @ 021eed88 with catch @ 021eed38
                       catch() { ... } // from try @ 021eedc8 with catch @ 021eed38
                       catch() { ... } // from try @ 021eee30 with catch @ 021eed38 */
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar5 + 0x20) = uVar7;
          *(undefined4 *)(lVar5 + 0x24) = param_2;
          *(undefined4 *)(lVar5 + 0x28) = param_3;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))(lVar3);
        }
                    /* try { // try from 021eed78 to 022eed7b has its CatchHandler @ 021eed94 */
                    /* try { // try from 021eed7c to 022eed87 has its CatchHandler @ 021eed98 */
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 021eed88 to 022eedaf has its CatchHandler @ 021eed38 */
  FUN_012d0ef0();
}

