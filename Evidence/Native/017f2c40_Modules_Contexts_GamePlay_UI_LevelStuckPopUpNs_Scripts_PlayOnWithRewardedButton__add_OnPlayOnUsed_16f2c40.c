/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$add_OnPlayOnUsed
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__add_OnPlayOnUsed (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$add_OnPlayOnUsed
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__add_OnPlayOnUsed
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this,
   System_Action_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__add_OnPlayOnUsed_16f2c40
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 017f2ba4 with catch @ 017f2c40 */
                    /* catch() { ... } // from try @ 017f2be4 with catch @ 017f2c44 */
                    /* catch() { ... } // from try @ 017f2bc8 with catch @ 017f2c48 */
                    /* catch() { ... } // from try @ 017f2b88 with catch @ 017f2c54
                       catch() { ... } // from try @ 017f2c20 with catch @ 017f2c54 */
                    /* try { // try from 017f2c5c to 018f2c5f has its CatchHandler @ 017f2f14 */
  if ((bRam0000000005c24ba9 & 1) == 0) {
                    /* try { // try from 017f2c60 to 018f2c77 has its CatchHandler @ 017f29f8 */
    FUN_012d0dc8(PTR_DAT_0578b048);
    bRam0000000005c24ba9 = 1;
  }
  puVar1 = PTR_DAT_0578b048;
                    /* try { // try from 017f2c78 to 018f2c8f has its CatchHandler @ 017f2d14 */
  lVar5 = *(long *)(param_1 + 0x58);
                    /* try { // try from 017f2c90 to 018f2cff has its CatchHandler @ 017f29f8 */
  while ((plVar3 = (long *)System_Delegate__Combine_23e3964(lVar5,param_2,0), plVar3 == (long *)0x0
         || (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_01351224((long *)(param_1 + 0x58),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d1288(plVar3);
}

