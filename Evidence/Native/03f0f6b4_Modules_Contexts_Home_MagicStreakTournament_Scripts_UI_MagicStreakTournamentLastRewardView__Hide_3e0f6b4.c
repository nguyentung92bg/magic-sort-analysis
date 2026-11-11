/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentLastRewardView$$Hide
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Hide (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentLastRewardView$$Hide
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Hide
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Hide_3e0f6b4
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  if ((bRam0000000005c38070 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789dd8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c38070 = 1;
  }
  plVar9 = (long *)(param_1 + 0x50);
  if (*plVar9 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar9,0,0);
  }
  puVar5 = PTR_DAT_057874c0;
  puVar4 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar6 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*puVar8,puVar8[1],puVar8[2],*(undefined4 *)(param_1 + 0x38),uVar6,0);
    uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar6,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar5);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_057984e0;
    if (lVar7 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_1,*(undefined8 *)PTR_DAT_05789dd8,0);
      uVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (uVar6,lVar7,*(undefined8 *)puVar4);
      *(undefined8 *)(param_1 + 0x50) = uVar6;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

