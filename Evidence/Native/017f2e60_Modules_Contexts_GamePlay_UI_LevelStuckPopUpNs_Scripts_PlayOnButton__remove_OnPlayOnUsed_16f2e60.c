/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$remove_OnPlayOnUsed
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__remove_OnPlayOnUsed (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$remove_OnPlayOnUsed
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__remove_OnPlayOnUsed
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, System_Action_o*
   value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__remove_OnPlayOnUsed_16f2e60
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 017f2e78 to 018f2e8f has its CatchHandler @ 017f2f04 */
  if ((bRam0000000005c24b9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* try { // try from 017f2e90 to 018f2ef3 has its CatchHandler @ 017f29f8 */
    bRam0000000005c24b9f = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  lVar5 = *(long *)(param_1 + 0x30);
  while ((plVar3 = (long *)System_Delegate__Remove_23e3b70(lVar5,param_2,0), plVar3 == (long *)0x0
         || (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_01351224((long *)(param_1 + 0x30),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* try { // try from 017f2ef4 to 018f2f03 has its CatchHandler @ 017f2f04 */
                    /* WARNING: Subroutine does not return */
  FUN_012d1288(plVar3);
}

