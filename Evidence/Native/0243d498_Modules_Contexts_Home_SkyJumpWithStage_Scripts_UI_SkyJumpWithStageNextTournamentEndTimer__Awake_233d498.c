/* IL2CPP: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI.SkyJumpWithStageNextTournamentEndTimer$$Awake
void Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentEndTimer__Awake (Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentEndTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI.SkyJumpWithStageNextTournamentEndTimer$$Awake
   void 
   Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentEndTimer__Awake
   (Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentEndTimer_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentEndTimer__Awake_233d498
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2a8cb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec640);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2a8cb = 1;
  }
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057ec640);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    *puVar7 = uVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

