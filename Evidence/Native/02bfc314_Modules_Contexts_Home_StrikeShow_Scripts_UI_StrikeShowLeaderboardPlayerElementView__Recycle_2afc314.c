/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardPlayerElementView$$Recycle
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView__Recycle (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardPlayerElementView$$Recycle
   void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView__Recycle
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView__Recycle_2afc314
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2ec0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2ec0b = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Dispose_2981380
              (*(long *)(param_1 + 0x38),0);
  }
  lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_Transform__SetParent_409352c(lVar2,0,0);
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02bfc090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

