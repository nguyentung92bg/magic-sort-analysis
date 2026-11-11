/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$IsRewardedButtonEnabled
bool Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__IsRewardedButtonEnabled (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$IsRewardedButtonEnabled
   bool 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__IsRewardedButtonEnabled
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this,
   const MethodInfo* method); */

undefined1
Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__IsRewardedButtonEnabled_16f2878
          (void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 017f2890 to 018f28af has its CatchHandler @ 017f299c */
  if ((bRam0000000005c24b63 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769838);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24b63 = 1;
  }
                    /* try { // try from 017f28cc to 018f28d7 has its CatchHandler @ 017f2994 */
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_05769838), lVar2 != 0)) {
                    /* try { // try from 017f28e8 to 018f2913 has its CatchHandler @ 017f2998 */
    return *(undefined1 *)(lVar2 + 0x54);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

