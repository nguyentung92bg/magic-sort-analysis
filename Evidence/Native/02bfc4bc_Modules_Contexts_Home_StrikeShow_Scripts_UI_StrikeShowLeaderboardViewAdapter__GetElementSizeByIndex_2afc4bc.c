/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$GetElementSizeByIndex
UnityEngine_Vector3_o Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetElementSizeByIndex (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$GetElementSizeByIndex
   UnityEngine_Vector3_o
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetElementSizeByIndex
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, int32_t
   index, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetElementSizeByIndex_2afc4bc
          (long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  
  Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__CacheElementSizes_2afc3f0
            ();
  iVar2 = Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetViewIdByIndex_2afc51c
                    (param_1,param_2);
                    /* try { // try from 02bfc4e4 to 02cfc507 has its CatchHandler @ 02bfc5dc */
  lVar1 = 0x30;
  if (iVar2 == 1) {
    lVar1 = 0x3c;
  }
                    /* try { // try from 02bfc518 to 02cfc51b has its CatchHandler @ 02bfc5d0 */
  return *(undefined4 *)(param_1 + lVar1);
}

