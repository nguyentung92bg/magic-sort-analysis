/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$Initialize
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__Initialize (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.EgoAreYouSureButtonController$$Initialize
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__Initialize
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__Initialize_16f26c8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  
                    /* catch() { ... } // from try @ 017f25e8 with catch @ 017f26c8 */
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    bRam0000000005c24b60 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar2,*(undefined8 *)PTR_DAT_057e8f70);
    uVar4 = Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_EgoAreYouSureButtonController__IsRewardedButtonEnabled_16f2878
                      ();
    if ((uVar4 & 1) == 0) {
      if (plVar3 != (long *)0x0) {
        lVar2 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 10) * 0x10 + 0x138);
              goto LAB_017f27ec;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0581aae8,10);
LAB_017f27ec:
        lVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if (lVar2 != 0) {
          uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_ALevel__IsMultipleBottlePlayOn_1f1708c
                            (lVar2,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),0,0);
            if ((uVar4 & 1) == 0) {
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_017f2874;
              UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),0,0);
              lVar2 = *(long *)(param_1 + 0x20);
            }
            else {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_017f2874;
              UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
              lVar2 = *(long *)(param_1 + 0x30);
            }
            if (lVar2 != 0) {
              uVar6 = 1;
              goto LAB_017f2864;
            }
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x48) != 0) {
      Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Initialize_16f28f4
                ();
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),1,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
          lVar2 = *(long *)(param_1 + 0x30);
          if (lVar2 != 0) {
            uVar6 = 0;
LAB_017f2864:
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar2,uVar6);
            return;
          }
        }
      }
    }
  }
LAB_017f2874:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

