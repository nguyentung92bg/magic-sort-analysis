/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$remove_OnPlayOnUsed
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__remove_OnPlayOnUsed (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$remove_OnPlayOnUsed
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__remove_OnPlayOnUsed
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this,
   System_Action_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__remove_OnPlayOnUsed_16f2efc
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 017f2e78 with catch @ 017f2f04
                       catch() { ... } // from try @ 017f2ef4 with catch @ 017f2f04 */
                    /* try { // try from 017f2f08 to 018f2f0b has its CatchHandler @ 017f2f14 */
                    /* try { // try from 017f2f0c to 018f2f17 has its CatchHandler @ 017f29f8 */
                    /* catch() { ... } // from try @ 017f2c5c with catch @ 017f2f14
                       catch() { ... } // from try @ 017f2d18 with catch @ 017f2f14
                       catch() { ... } // from try @ 017f2e50 with catch @ 017f2f14
                       catch() { ... } // from try @ 017f2f08 with catch @ 017f2f14 */
                    /* try { // try from 017f2f18 to 018f3003 has its CatchHandler @ 017f2f18
                       catch() { ... } // from try @ 017f2f18 with catch @ 017f2f18
                       catch() { ... } // from try @ 017f30b0 with catch @ 017f2f18
                       catch() { ... } // from try @ 017f3100 with catch @ 017f2f18
                       catch() { ... } // from try @ 017f3154 with catch @ 017f2f18 */
  if ((bRam0000000005c24baa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    bRam0000000005c24baa = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  lVar5 = *(long *)(param_1 + 0x58);
  while ((plVar3 = (long *)System_Delegate__Remove_23e3b70(lVar5,param_2,0), plVar3 == (long *)0x0
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

