/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$.ctor
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___ctor (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$.ctor
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___ctor
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___ctor_3e1c440
          (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_0579fb28;
                    /* try { // try from 03f1c448 to 0401c44f has its CatchHandler @ 03f1c83c */
                    /* try { // try from 03f1c458 to 0401c45f has its CatchHandler @ 03f1c838 */
  if ((bRam0000000005c380ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b6828);
                    /* try { // try from 03f1c470 to 0401c493 has its CatchHandler @ 03f1c884 */
    FUN_012d0dc8(PTR_DAT_0579fb28);
    bRam0000000005c380ee = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_057b6828);
    *(long *)(param_1 + 0x78) = lVar2;
                    /* try { // try from 03f1c4ac to 0401c4e3 has its CatchHandler @ 03f1c86c */
    FUN_012d0d74((long *)(param_1 + 0x78),lVar2);
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    puVar1 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a2b8 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a2b8 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

