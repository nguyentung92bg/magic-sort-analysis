/* IL2CPP: Modules.Contexts.GamePlay.UI.TryAgainPopUpNs.Scripts.LevelRewardsView$$UpdateView
void Modules_Contexts_GamePlay_UI_TryAgainPopUpNs_Scripts_LevelRewardsView__UpdateView (Modules_Contexts_GamePlay_UI_TryAgainPopUpNs_Scripts_LevelRewardsView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.TryAgainPopUpNs.Scripts.LevelRewardsView$$UpdateView
   void Modules_Contexts_GamePlay_UI_TryAgainPopUpNs_Scripts_LevelRewardsView__UpdateView
   (Modules_Contexts_GamePlay_UI_TryAgainPopUpNs_Scripts_LevelRewardsView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_TryAgainPopUpNs_Scripts_LevelRewardsView__UpdateView_40edafc
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 041edb04 to 042edb1b has its CatchHandler @ 041edb78 */
                    /* try { // try from 041edb1c to 042edb67 has its CatchHandler @ 041ed828 */
  if ((bRam0000000005c3aab7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc918);
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 041edb68 to 042edb77 has its CatchHandler @ 041edb78 */
    bRam0000000005c3aab7 = 1;
  }
  uStack_24 = 0;
                    /* catch() { ... } // from try @ 041edb04 with catch @ 041edb78
                       catch() { ... } // from try @ 041edb68 with catch @ 041edb78 */
                    /* try { // try from 041edb7c to 042edb7f has its CatchHandler @ 041edb88 */
                    /* try { // try from 041edb80 to 042edb8b has its CatchHandler @ 041ed828 */
                    /* catch() { ... } // from try @ 041edae0 with catch @ 041edb88
                       catch() { ... } // from try @ 041edb7c with catch @ 041edb88 */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar3,*(undefined8 *)PTR_DAT_057a1e60);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0 &&
        (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar3,*(undefined8 *)PTR_DAT_05808828), plVar4 != (long *)0x0))
       )) {
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_041edc28;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_041edc28:
      uVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057de4f8) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_041edc94;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057de4f8,3);
LAB_041edc94:
        lVar3 = (*(code *)*puVar6)(plVar5,uVar2,puVar6[1]);
        if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
             (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
            (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar7,*(undefined8 *)PTR_DAT_057bc918), lVar7 != 0)) &&
           ((lVar7 = Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__GetAdConfigModel_185c7e8
                               (lVar7,0), lVar3 != 0 &&
            (uVar2 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                               (lVar3,0), lVar7 != 0)))) {
          uStack_24 = Modules_Contexts_Application_Ads_Scripts_AdConfigModel__GetLevelWinCoinRewardByDifficulty_1b5e384
                                (lVar7,uVar2,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),1,0);
            plVar4 = *(long **)(param_1 + 0x28);
            uVar8 = System_Int32__ToString_26c9768(&uStack_24,0);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x558))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x560));
              plVar4 = *(long **)(param_1 + 0x30);
              uVar8 = System_Int32__ToString_26c9768(&uStack_24,0);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x558))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x560));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

