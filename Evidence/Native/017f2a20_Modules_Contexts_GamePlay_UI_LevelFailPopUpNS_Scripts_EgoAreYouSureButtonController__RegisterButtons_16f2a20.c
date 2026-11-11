/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$RegisterButtons
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__RegisterButtons (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$RegisterButtons
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__RegisterButtons
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__RegisterButtons_16f2a20
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
  
  if ((bRam0000000005c24b61 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a3940);
    FUN_012d0dc8(PTR_DAT_05799350);
    bRam0000000005c24b61 = 1;
  }
  puVar2 = PTR_DAT_05799350;
  puVar1 = PTR_DAT_0578b048;
  uVar4 = Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__IsRewardedButtonEnabled_16f2878
                    ();
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2ba0;
                    /* try { // try from 017f2b14 to 018f2b23 has its CatchHandler @ 017f2d20 */
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__add_OnPlayOnUsed_16f2ba4
              (lVar8,lVar5);
    lVar8 = *(long *)(param_1 + 0x50);
                    /* try { // try from 017f2b28 to 018f2b2f has its CatchHandler @ 017f2b68 */
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 017f2b30 to 018f2b3f has its CatchHandler @ 017f2b6c */
                    /* try { // try from 017f2b44 to 018f2b4b has its CatchHandler @ 017f2b64 */
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2ba0;
                    /* try { // try from 017f2b4c to 018f2b87 has its CatchHandler @ 017f29f8 */
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__add_OnPlayOnUsed_16f2ba4
              (lVar8,lVar5);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x40);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2ba0;
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__add_OnPlayOnUsed_16f2ba4
              (lVar8,lVar5);
    lVar8 = *(long *)(param_1 + 0x48);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 == 0) ||
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
    goto LAB_017f2ba0;
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__add_OnPlayOnUsed_16f2c40
              (lVar8,lVar5);
  }
  lVar8 = *(long *)(param_1 + 0x58);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 017f2b44 with catch @ 017f2b64 */
                    /* catch() { ... } // from try @ 017f2b28 with catch @ 017f2b68 */
                    /* catch() { ... } // from try @ 017f2b30 with catch @ 017f2b6c */
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057a3940,0), lVar8 != 0)) {
    if ((bRam0000000005c3941f & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar5,0);
      bRam0000000005c3941f = 1;
    }
    puVar1 = PTR_DAT_0578b048;
    plVar9 = (long *)(lVar8 + 0x38);
    lVar8 = *plVar9;
    while ((plVar6 = (long *)System_Delegate__Combine_23e3964(lVar8,lVar5,0), plVar6 == (long *)0x0
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
LAB_017f2ba0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

