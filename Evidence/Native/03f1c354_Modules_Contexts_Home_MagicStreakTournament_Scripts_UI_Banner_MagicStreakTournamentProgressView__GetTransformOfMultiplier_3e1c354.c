/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$GetTransformOfMultiplier
UnityEngine_Transform_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__GetTransformOfMultiplier (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$GetTransformOfMultiplier
   UnityEngine_Transform_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__GetTransformOfMultiplier
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, int32_t index, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__GetTransformOfMultiplier_3e1c354
          (long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 03f1c35c to 0401c363 has its CatchHandler @ 03f1c844 */
  if ((bRam0000000005c380e9 & 1) == 0) {
                    /* try { // try from 03f1c378 to 0401c3b7 has its CatchHandler @ 03f1ca84 */
    FUN_012d0dc8(PTR_DAT_057c9888);
    bRam0000000005c380e9 = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),param_2 + -1,*(undefined8 *)PTR_DAT_057c9888),
     puVar1 = PTR_DAT_0576c200, lVar3 != 0)) {
    if ((bRam0000000005c34ac6 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057e9ad0,0);
      FUN_012d0dc8(PTR_DAT_0576c200);
      bRam0000000005c34ac6 = 1;
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x370);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = UnityEngine_Component__GetComponent_object__27205b8
                        (lVar3,*(undefined8 *)PTR_DAT_057e9ad0);
      *(undefined8 *)(lVar3 + 0x370) = uVar4;
      FUN_012d0d74((undefined8 *)(lVar3 + 0x370),uVar4);
    }
    return *(undefined8 *)(lVar3 + 0x370);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

