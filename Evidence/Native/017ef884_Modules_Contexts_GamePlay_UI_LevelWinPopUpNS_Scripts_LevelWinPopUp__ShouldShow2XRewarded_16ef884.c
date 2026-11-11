/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUp$$ShouldShow2XRewarded
bool Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__ShouldShow2XRewarded (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUp$$ShouldShow2XRewarded
   bool Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__ShouldShow2XRewarded
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp_o* __this, const MethodInfo*
   method); */

byte Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__ShouldShow2XRewarded_16ef884
               (void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b4b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2938);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24b4b = 1;
  }
  if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
      (lVar5 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar5 == 0)) ||
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057a2938), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c26b2d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0,0);
    bRam0000000005c26b2d = 1;
  }
  if ((*(long *)(lVar5 + 0x30) != 0) &&
     (lVar6 = Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__GetAdConfigModel_185c7e8
                        (*(long *)(lVar5 + 0x30),0), lVar6 != 0)) {
    bVar2 = *(byte *)(lVar6 + 0x2a);
    bVar8 = false;
    if (*(long *)(lVar5 + 0x18) != 0) {
      plVar11 = *(long **)(lVar5 + 0x28);
      if (plVar11 == (long *)0x0) goto LAB_01c5f69c;
      lVar5 = *plVar11;
      iVar1 = *(int *)(lVar6 + 0x2c);
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01c5f678;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01c5f678:
      iVar4 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      bVar8 = iVar1 <= iVar4;
    }
    return bVar8 & bVar2;
  }
LAB_01c5f69c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

