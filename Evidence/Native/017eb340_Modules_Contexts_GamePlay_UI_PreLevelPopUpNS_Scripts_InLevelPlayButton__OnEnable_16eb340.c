/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevelPlayButton$$OnEnable
void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__OnEnable (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevelPlayButton$$OnEnable
   void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__OnEnable
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__OnEnable_16eb340
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b20 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c24b20 = 1;
  }
  lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) {
LAB_017eb4e8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar8,*(undefined8 *)PTR_DAT_057a1e60);
  lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar8 == 0) ||
     ((lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0 ||
      (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar8,*(undefined8 *)PTR_DAT_05808828), plVar4 == (long *)0x0))))
  goto LAB_017eb4e8;
  lVar8 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_017eb458;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_017eb458:
  uVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
  if (plVar5 == (long *)0x0) goto LAB_017eb4e8;
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057de4f8) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_017eb4c4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057de4f8,4);
LAB_017eb4c4:
  iVar3 = (*(code *)*puVar6)(plVar5,uVar2,puVar6[1]);
  if (iVar3 == 2) {
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
    }
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
      return;
    }
    uVar7 = 1;
    goto LAB_017eb558;
  }
  if (iVar3 == 1) {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 != 0) {
      uVar7 = 1;
LAB_017eb544:
      UnityEngine_GameObject__SetActive_408e318(lVar8,uVar7,0);
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 != 0) {
      uVar7 = 0;
      goto LAB_017eb544;
    }
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    return;
  }
  uVar7 = 0;
LAB_017eb558:
  if (pcRam0000000005c3a388 == (code *)0x0) {
    pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
  }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a388)(lVar8,uVar7);
  return;
}

