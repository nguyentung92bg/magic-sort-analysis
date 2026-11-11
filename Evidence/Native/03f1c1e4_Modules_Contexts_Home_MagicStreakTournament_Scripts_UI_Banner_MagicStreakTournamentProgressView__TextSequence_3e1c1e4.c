/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$TextSequence
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__TextSequence (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, bool isWin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$TextSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__TextSequence
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, bool isWin, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__TextSequence_3e1c1e4
          (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 03f1c1f0 to 0401c213 has its CatchHandler @ 03f1c868 */
  if ((bRam0000000005c380e6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c380e6 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_1 + 0x30),0);
                    /* try { // try from 03f1c228 to 0401c247 has its CatchHandler @ 03f1c894 */
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar1 != 0) {
                    /* try { // try from 03f1c254 to 0401c25b has its CatchHandler @ 03f1c854 */
      lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar1,0);
      if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 03f1c278 to 0401c2b7 has its CatchHandler @ 03f1ca88 */
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
        uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PunchTween_3e1c2c8
                          (param_1);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

