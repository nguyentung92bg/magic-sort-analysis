/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$CacheElementSizes
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__CacheElementSizes (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$CacheElementSizes
   void 
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__CacheElementSizes
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__CacheElementSizes_2afc3f0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_4 + 0x48) != '\0') {
    return;
  }
  plVar1 = *(long **)(param_4 + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    plVar2 = *(long **)(param_4 + 0x20);
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0)),
       plVar1 != (long *)0x0)) {
      uVar3 = Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView__get_Size_2afc018
                        (plVar1);
      *(undefined4 *)(param_4 + 0x30) = uVar3;
      *(undefined4 *)(param_4 + 0x34) = param_2;
      *(undefined4 *)(param_4 + 0x38) = param_3;
      if (plVar2 != (long *)0x0) {
        uVar3 = Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView__get_Size_2afc018
                          (plVar2);
        *(undefined4 *)(param_4 + 0x3c) = uVar3;
        *(undefined4 *)(param_4 + 0x40) = param_2;
        *(undefined4 *)(param_4 + 0x44) = param_3;
        (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
                    /* try { // try from 02bfc47c to 02cfc4e3 has its CatchHandler @ 02bfc47c
                       catch() { ... } // from try @ 02bfc47c with catch @ 02bfc47c
                       catch() { ... } // from try @ 02bfc58c with catch @ 02bfc47c
                       catch() { ... } // from try @ 02bfc5c4 with catch @ 02bfc47c
                       catch() { ... } // from try @ 02bfc61c with catch @ 02bfc47c */
        (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        *(undefined1 *)(param_4 + 0x48) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

