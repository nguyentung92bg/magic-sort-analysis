/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelQuitButton$$OnQuitFromLevelButtonDown
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelQuitButton__OnQuitFromLevelButtonDown (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelQuitButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelQuitButton$$OnQuitFromLevelButtonDown
   void 
   Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelQuitButton__OnQuitFromLevelButtonDown
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelQuitButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelQuitButton__OnQuitFromLevelButtonDown_16f56c8
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c24b7c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c24b7c = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_017f57f8;
    Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__OpenOrCloseSettings_16f57fc
              ();
  }
                    /* try { // try from 017f5768 to 018f583f has its CatchHandler @ 017f5768
                       catch() { ... } // from try @ 017f5768 with catch @ 017f5768
                       catch() { ... } // from try @ 017f5924 with catch @ 017f5768
                       catch() { ... } // from try @ 017f59b8 with catch @ 017f5768
                       catch() { ... } // from try @ 017f59f4 with catch @ 017f5768
                       catch() { ... } // from try @ 017f5a54 with catch @ 017f5768
                       catch() { ... } // from try @ 017f5b18 with catch @ 017f5768
                       catch() { ... } // from try @ 017f5b5c with catch @ 017f5768 */
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) &&
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_05791da0), plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575bba8) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_017f57e4;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0575bba8,2);
LAB_017f57e4:
                    /* WARNING: Could not recover jumptable at 0x017f57f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    return;
  }
LAB_017f57f8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

