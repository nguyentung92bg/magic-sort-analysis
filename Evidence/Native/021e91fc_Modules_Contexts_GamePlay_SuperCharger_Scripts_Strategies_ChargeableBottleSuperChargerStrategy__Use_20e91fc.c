/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$Use
void Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__Use (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o* __this, UnityEngine_Transform_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$Use
   void 
   Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__Use
   (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o*
   __this, UnityEngine_Transform_o* source, const MethodInfo* method); */

ulong Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__Use_20e91fc
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar2 = PTR_DAT_057fbce8;
  if ((bRam0000000005c2971c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057dac88);
    FUN_012d0dc8(PTR_DAT_05809010);
    FUN_012d0dc8(PTR_DAT_05807d20);
    FUN_012d0dc8(PTR_DAT_0577bf88);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577bc68);
    FUN_012d0dc8(PTR_DAT_0576ac68);
    FUN_012d0dc8(PTR_DAT_057fbce8);
    bRam0000000005c2971c = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    lVar4 = Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__FindChargeableBottleItem_20e94b8
                      (param_4);
    plVar9 = (long *)(lVar3 + 0x10);
    *plVar9 = lVar4;
    FUN_012d0d74(plVar9,lVar4);
    if (*plVar9 == 0) {
      return 0;
    }
    uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__HasCharge_2f58768
                      (*plVar9,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_021e94ac;
      if (*(char *)(*(long *)(param_4 + 0x10) + 0x21) == '\0') {
        return uVar5;
      }
    }
    if (*plVar9 != 0) {
      lVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__GetTrailTargetTransform_2f59314
                        (*plVar9,0);
      if (((*(long *)(param_4 + 0x18) != 0) &&
          (lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x28), lVar10 != 0)) &&
         (lVar7 = *(long *)(lVar10 + 0x20), lVar7 != 0)) {
        uVar12 = *(undefined4 *)(lVar7 + 0x20);
        uVar13 = *(undefined4 *)(lVar7 + 0x38);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577bf88);
        if ((lVar7 != 0) &&
           (System_Collections_Generic_List_Vector3____ctor_2275524
                      (lVar7,*(undefined8 *)PTR_DAT_05807d20), puVar2 = PTR_DAT_05809010, lVar4 != 0
           )) {
          uVar11 = UnityEngine_Transform__get_position_4092b08(lVar4,0);
          lVar4 = *(long *)(lVar7 + 0x10);
          lVar8 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar2 = PTR_DAT_0578b048;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar4 + 0x20) = uVar11;
              *(undefined4 *)(lVar4 + 0x24) = param_2;
              *(undefined4 *)(lVar4 + 0x28) = param_3;
            }
            else {
                    /* try { // try from 021e93e4 to 022e947f has its CatchHandler @ 021e93e4
                       catch() { ... } // from try @ 021e93e4 with catch @ 021e93e4
                       catch() { ... } // from try @ 021e9488 with catch @ 021e93e4
                       catch() { ... } // from try @ 021e94ec with catch @ 021e93e4
                       catch() { ... } // from try @ 021e9544 with catch @ 021e93e4
                       catch() { ... } // from try @ 021e95dc with catch @ 021e93e4 */
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar7);
            }
            lVar8 = *plVar9;
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar2 = PTR_DAT_057606c8;
            if (lVar4 != 0) {
              System_Action___ctor_21239bc(lVar4,lVar8,*(undefined8 *)PTR_DAT_057dac88,0);
              Modules_Contexts_GamePlay_SuperCharger_UI_SuperChargerTrailAnimationController__PlayTrailAnimation_20e5c74
                        (uVar12,uVar13,lVar10,lVar7,param_5,1,lVar4);
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_0577bc68;
              if (lVar4 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar4,lVar3,*(undefined8 *)PTR_DAT_0576ac68,0);
                    /* try { // try from 021e9480 to 022e9487 has its CatchHandler @ 021e94c0 */
                uVar5 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3f000000,lVar4,1,0);
                    /* try { // try from 021e9488 to 022e94e7 has its CatchHandler @ 021e93e4 */
                uVar6 = *(undefined8 *)puVar2;
                if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
                  *(long *)(uVar5 + 0x30) = param_4;
                  FUN_012d0d74((long *)(uVar5 + 0x30),param_4,uVar6);
                }
                return uVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_021e94ac:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

