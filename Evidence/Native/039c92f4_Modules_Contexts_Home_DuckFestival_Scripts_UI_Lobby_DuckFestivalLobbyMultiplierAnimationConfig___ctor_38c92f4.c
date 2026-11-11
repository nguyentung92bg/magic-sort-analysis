/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Lobby.DuckFestivalLobbyMultiplierAnimationConfig$$.ctor
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimationConfig___ctor (Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Lobby.DuckFestivalLobbyMultiplierAnimationConfig$$.ctor
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimationConfig___ctor
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimationConfig_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimationConfig___ctor_38c92f4
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_0433c910;
                    /* try { // try from 039c9300 to 03ac9313 has its CatchHandler @ 039c921c */
                    /* try { // try from 039c9314 to 03ac932b has its CatchHandler @ 039c93a8 */
  *(undefined8 *)(param_1 + 0x18) = _UNK_043b4390;
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0x3dcccccd;
                    /* try { // try from 039c932c to 03ac9397 has its CatchHandler @ 039c921c */
  uVar2 = UnityEngine_AnimationCurve__EaseInOut_4084e4c(0,0,0x3f800000,0x3f800000,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_012d0d74();
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if (pcRam0000000005c3a3d8 == (code *)0x0) {
    pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
  }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a3d8)(param_1);
  return;
}

