/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$GetTargets
System_Collections_Generic_List_Transform__o* Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__GetTargets (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$GetTargets
   System_Collections_Generic_List_Transform__o*
   Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__GetTargets
   (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__GetTargets_20e9660
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0579fb28;
  if ((bRam0000000005c2971e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b6828);
                    /* try { // try from 021e9690 to 022e969b has its CatchHandler @ 021e96b0 */
    FUN_012d0dc8(PTR_DAT_0579fb28);
                    /* try { // try from 021e969c to 022e96c7 has its CatchHandler @ 021e95f4 */
    bRam0000000005c2971e = 1;
  }
  Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__FindChargeableBottleItem_20e94b8
            (param_1);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021e9690 with catch @ 021e96b0
                        */
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_057b6828);
                    /* try { // try from 021e96c8 to 022e96df has its CatchHandler @ 021e9758 */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

