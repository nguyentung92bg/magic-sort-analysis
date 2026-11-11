/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EndGameOfferButtonController$$WaitForButtonResponse
System_Threading_Tasks_Task_bool__o* Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EndGameOfferButtonController__WaitForButtonResponse (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EndGameOfferButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EndGameOfferButtonController$$WaitForButtonResponse
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EndGameOfferButtonController__WaitForButtonResponse
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EndGameOfferButtonController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EndGameOfferButtonController__WaitForButtonResponse_16f2534
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_05766da0;
  if ((bRam0000000005c24b64 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_05769e70);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
                    /* try { // try from 017f258c to 018f259b has its CatchHandler @ 017f25a0 */
    bRam0000000005c24b64 = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_0577b428;
  puVar2 = PTR_DAT_05769e70;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* catch() { ... } // from try @ 017f2504 with catch @ 017f25a0
                       catch() { ... } // from try @ 017f258c with catch @ 017f25a0 */
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 017f25a4 to 018f25a7 has its CatchHandler @ 017f27a0 */
                    /* try { // try from 017f25a8 to 018f25c7 has its CatchHandler @ 017f2284 */
                    /* catch() { ... } // from try @ 017f23a0 with catch @ 017f25ac */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 017f25c8 to 018f25df has its CatchHandler @ 017f26d4 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_98,*(undefined8 *)puVar3);
  uVar5 = (ulong)&uStack_60 | 8;
                    /* try { // try from 017f25e8 to 018f25eb has its CatchHandler @ 017f26c8 */
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
                    /* try { // try from 017f25fc to 018f2607 has its CatchHandler @ 017f26c4 */
  FUN_012d0d74(uVar5,0);
  uStack_40 = param_1;
                    /* try { // try from 017f260c to 018f2623 has its CatchHandler @ 017f26d0 */
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_EndGameOfferButtonController__WaitForButtonResponse_d__1__3c5f2c8
            (uVar5,&uStack_60,*(undefined8 *)puVar2);
                    /* try { // try from 017f2628 to 018f263f has its CatchHandler @ 017f26cc */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
                    /* try { // try from 017f2644 to 018f264b has its CatchHandler @ 017f26c0 */
  return;
}

