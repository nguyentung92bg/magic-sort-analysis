/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$UnregisterButtons
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__UnregisterButtons (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$UnregisterButtons
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__UnregisterButtons
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__UnregisterButtons_16f2cdc
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((bRam0000000005c24b62 & 1) == 0) {
                    /* try { // try from 017f2d00 to 018f2d0f has its CatchHandler @ 017f2d14 */
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a3940);
                    /* catch() { ... } // from try @ 017f2c78 with catch @ 017f2d14
                       catch() { ... } // from try @ 017f2d00 with catch @ 017f2d14 */
                    /* try { // try from 017f2d18 to 018f2d1b has its CatchHandler @ 017f2f14 */
    FUN_012d0dc8(PTR_DAT_05799350);
                    /* try { // try from 017f2d1c to 018f2d3b has its CatchHandler @ 017f29f8 */
                    /* catch() { ... } // from try @ 017f2b14 with catch @ 017f2d20 */
    bRam0000000005c24b62 = 1;
  }
  puVar2 = PTR_DAT_05799350;
  puVar1 = PTR_DAT_0578b048;
  uVar4 = Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__IsRewardedButtonEnabled_16f2878
                    ();
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 017f2db8 to 018f2dbf has its CatchHandler @ 017f2e34 */
                    /* try { // try from 017f2dc0 to 018f2e03 has its CatchHandler @ 017f2e58 */
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2e5c;
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__remove_OnPlayOnUsed_16f2e60
              (lVar8,lVar5);
    lVar8 = *(long *)(param_1 + 0x50);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2e5c;
                    /* try { // try from 017f2e08 to 018f2e0b has its CatchHandler @ 017f2e30 */
                    /* try { // try from 017f2e0c to 018f2e1b has its CatchHandler @ 017f29f8 */
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__remove_OnPlayOnUsed_16f2e60
              (lVar8,lVar5);
  }
  else {
                    /* try { // try from 017f2d3c to 018f2d53 has its CatchHandler @ 017f2e48 */
    lVar8 = *(long *)(param_1 + 0x40);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 017f2d5c to 018f2d5f has its CatchHandler @ 017f2e3c */
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2e5c;
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__remove_OnPlayOnUsed_16f2e60
              (lVar8,lVar5);
                    /* try { // try from 017f2d70 to 018f2d7b has its CatchHandler @ 017f2e38 */
    lVar8 = *(long *)(param_1 + 0x48);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 017f2d80 to 018f2d97 has its CatchHandler @ 017f2e44 */
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2e5c;
                    /* try { // try from 017f2d9c to 018f2db3 has its CatchHandler @ 017f2e40 */
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__remove_OnPlayOnUsed_16f2efc
              (lVar8,lVar5);
  }
  lVar8 = *(long *)(param_1 + 0x58);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 017f2e1c to 018f2e2b has its CatchHandler @ 017f2e48 */
                    /* catch() { ... } // from try @ 017f2e08 with catch @ 017f2e30 */
                    /* catch() { ... } // from try @ 017f2db8 with catch @ 017f2e34 */
                    /* catch() { ... } // from try @ 017f2d70 with catch @ 017f2e38 */
                    /* catch() { ... } // from try @ 017f2d5c with catch @ 017f2e3c */
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057a3940,0), lVar8 != 0)) {
    if ((bRam0000000005c39420 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar5,0);
      bRam0000000005c39420 = 1;
    }
    puVar1 = PTR_DAT_0578b048;
    plVar9 = (long *)(lVar8 + 0x38);
    lVar8 = *plVar9;
    while ((plVar6 = (long *)System_Delegate__Remove_23e3b70(lVar8,lVar5,0), plVar6 == (long *)0x0
           || (*plVar6 == *(long *)puVar1))) {
      lVar7 = FUN_01351224(plVar9,plVar6,lVar8);
      bVar3 = lVar8 == lVar7;
      lVar8 = lVar7;
      if (bVar3) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar6);
  }
LAB_017f2e5c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

