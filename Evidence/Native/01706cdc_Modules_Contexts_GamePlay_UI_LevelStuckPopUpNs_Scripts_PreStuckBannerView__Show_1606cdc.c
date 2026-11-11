/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PreStuckBannerView$$Show
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PreStuckBannerView__Show (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PreStuckBannerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PreStuckBannerView$$Show
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PreStuckBannerView__Show
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PreStuckBannerView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PreStuckBannerView__Show_1606cdc
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c243f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c243f6 = 1;
  }
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
    lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar7 == 0) ||
       ((lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0 ||
        (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar7,*(undefined8 *)PTR_DAT_05808828), plVar4 == (long *)0x0))
       )) goto LAB_01706ed0;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_01706df4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_01706df4:
    uVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    if (plVar5 == (long *)0x0) goto LAB_01706ed0;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057de4f8) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_01706e60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057de4f8,4);
LAB_01706e60:
    iVar3 = (*(code *)*puVar6)(plVar5,uVar2,puVar6[1]);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_01706ed0;
                    /* try { // try from 01706e7c to 01806ea3 has its CatchHandler @ 01706fec */
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),0,0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01706ed0;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01706ed0;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),0,0);
    if (iVar3 == 2) {
      lVar7 = *(long *)(param_1 + 0x28);
    }
    else {
      if (iVar3 == 1) {
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 == 0) goto LAB_01706ed0;
        goto LAB_01706edc;
      }
      if (iVar3 != 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x18);
    }
                    /* try { // try from 01706ed8 to 01806eff has its CatchHandler @ 01706fe8 */
    if (lVar7 != 0) {
LAB_01706edc:
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar7,1);
      return;
    }
  }
LAB_01706ed0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

