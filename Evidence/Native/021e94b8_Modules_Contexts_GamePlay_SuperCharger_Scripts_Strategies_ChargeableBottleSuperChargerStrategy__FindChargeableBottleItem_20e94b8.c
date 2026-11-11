/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$FindChargeableBottleItem
Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__FindChargeableBottleItem (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$FindChargeableBottleItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o*
   Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__FindChargeableBottleItem
   (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__FindChargeableBottleItem_20e94b8
                 (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021e9480 with catch @ 021e94c0
                        */
  if ((bRam0000000005c2971d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8328);
                    /* try { // try from 021e94e8 to 022e94eb has its CatchHandler @ 021e95c4 */
                    /* try { // try from 021e94ec to 022e9503 has its CatchHandler @ 021e93e4 */
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
                    /* try { // try from 021e9504 to 022e951b has its CatchHandler @ 021e95a8 */
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2971d = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
                    /* try { // try from 021e9524 to 022e9527 has its CatchHandler @ 021e95a4 */
                    /* try { // try from 021e9528 to 022e9543 has its CatchHandler @ 021e95b8 */
  if (((*(long *)(param_1 + 0x18) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar5 == 0)) ||
     (lVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GetBlockers_2d95288
                        (lVar5,0), puVar4 = PTR_DAT_057d8328, puVar3 = PTR_DAT_057a7f80,
     puVar2 = PTR_DAT_057605b8, lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 021e95e8 to 022e95ef has its CatchHandler @ 021e95f0 */
    FUN_012d0ef0();
  }
                    /* try { // try from 021e9544 to 022e955f has its CatchHandler @ 021e93e4 */
                    /* try { // try from 021e9560 to 022e956f has its CatchHandler @ 021e95a8 */
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,lVar5,*(undefined8 *)PTR_DAT_057b7918);
  do {
    do {
                    /* try { // try from 021e9570 to 022e95a3 has its CatchHandler @ 021e95b8 */
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021e9528 with catch @ 021e95b8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 021e9570 with catch @ 021e95b8
                        */
        plVar7 = (long *)0x0;
        iVar8 = 5;
        goto LAB_021e95c0;
      }
    } while (plStack_38 == (long *)0x0);
    bVar1 = *(byte *)(*(long *)puVar4 + 300);
  } while ((*(byte *)(*plStack_38 + 300) < bVar1) ||
          (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021e9524 with catch @ 021e95a4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021e9504 with catch @ 021e95a8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 021e9560 with catch @ 021e95a8
                        */));
                    /* try { // try from 021e95b0 to 022e95db has its CatchHandler @ 021e95f0 */
  iVar8 = 4;
  plVar7 = plStack_38;
LAB_021e95c0:
                    /* catch() { ... } // from try @ 021e94e8 with catch @ 021e95c4 */
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar2);
  if (iVar8 != 4) {
    plVar7 = (long *)0x0;
  }
                    /* try { // try from 021e95dc to 022e95e7 has its CatchHandler @ 021e93e4 */
  return plVar7;
}

