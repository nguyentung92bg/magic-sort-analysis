/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$add_OnPlayOnUsed
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__add_OnPlayOnUsed (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$add_OnPlayOnUsed
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__add_OnPlayOnUsed
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, System_Action_o*
   value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__add_OnPlayOnUsed_16f2ba4
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 017f2ba4 to 018f2ba7 has its CatchHandler @ 017f2c40 */
                    /* try { // try from 017f2bb8 to 018f2bc3 has its CatchHandler @ 017f2c3c */
  if ((bRam0000000005c24b9e & 1) == 0) {
                    /* try { // try from 017f2bc8 to 018f2bdf has its CatchHandler @ 017f2c48 */
    FUN_012d0dc8(PTR_DAT_0578b048);
    bRam0000000005c24b9e = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  lVar5 = *(long *)(param_1 + 0x30);
                    /* try { // try from 017f2be4 to 018f2bfb has its CatchHandler @ 017f2c44 */
                    /* try { // try from 017f2c00 to 018f2c07 has its CatchHandler @ 017f2c38 */
  while ((plVar3 = (long *)System_Delegate__Combine_23e3964(lVar5,param_2,0), plVar3 == (long *)0x0
         || (*plVar3 == *(long *)puVar1))) {
                    /* try { // try from 017f2c0c to 018f2c0f has its CatchHandler @ 017f2c34 */
                    /* try { // try from 017f2c10 to 018f2c1f has its CatchHandler @ 017f29f8 */
    lVar4 = FUN_01351224((long *)(param_1 + 0x30),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
                    /* try { // try from 017f2c20 to 018f2c2f has its CatchHandler @ 017f2c54 */
    if (bVar2) {
                    /* catch() { ... } // from try @ 017f2c0c with catch @ 017f2c34 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 017f2c00 with catch @ 017f2c38 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 017f2bb8 with catch @ 017f2c3c */
  FUN_012d1288(plVar3);
}

