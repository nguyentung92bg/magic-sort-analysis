/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.InitializeReturnToHomeWinDailyCommand$$PrepareHomeUi
void Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__PrepareHomeUi (Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.InitializeReturnToHomeWinDailyCommand$$PrepareHomeUi
   void Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__PrepareHomeUi
   (Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__PrepareHomeUi_214f720
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0224f724 to 0234f74b has its CatchHandler @ 0224f694 */
  if ((bRam0000000005c29b69 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fbec0);
                    /* try { // try from 0224f74c to 0234f75b has its CatchHandler @ 0224f75c */
    FUN_012d0dc8(PTR_DAT_057a1e60);
                    /* catch() { ... } // from try @ 0224f70c with catch @ 0224f75c
                       catch() { ... } // from try @ 0224f74c with catch @ 0224f75c */
                    /* try { // try from 0224f760 to 0234f763 has its CatchHandler @ 0224f76c */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 0224f764 to 0234f76f has its CatchHandler @ 0224f694 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0224f760 with catch @ 0224f76c
                        */
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c29b69 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_057fbec0);
    lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar7 != 0) &&
       ((lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0 &&
        (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar7,*(undefined8 *)PTR_DAT_057a1e60), plVar4 != (long *)0x0))
       )) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0224f834;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_0224f834:
      uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar1 = PTR_DAT_0576aae0;
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0x40);
        if (lVar6 != 0) {
          if ((bRam0000000005c2d720 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05808828,uVar2,0);
            FUN_012d0dc8(PTR_DAT_0576aae0);
            FUN_012d0dc8(PTR_DAT_057de4f8);
            bRam0000000005c2d720 = 1;
          }
          if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
              (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
             (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                         (lVar7,*(undefined8 *)PTR_DAT_05808828),
             plVar4 != (long *)0x0)) {
            lVar7 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057de4f8) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                  goto LAB_02a7acc4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057de4f8,4);
LAB_02a7acc4:
            uVar3 = (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
            lVar6 = *(long *)(lVar6 + 0x18);
            if (lVar6 != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__SetButton_297ef54
                        (lVar6,uVar2,uVar3);
              if ((*(long *)(lVar6 + 0xa8) != 0) &&
                 (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar6 + 0xa8),0),
                 lVar7 != 0)) {
                UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
                if ((*(long *)(lVar6 + 0xb0) != 0) &&
                   (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar6 + 0xb0),0)
                   , lVar7 != 0)) {
                  UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
                  if ((*(long *)(lVar6 + 0xb8) != 0) &&
                     (lVar7 = UnityEngine_Component__get_gameObject_408b480
                                        (*(long *)(lVar6 + 0xb8),0), lVar7 != 0)) {
                    UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
                    if ((*(long *)(lVar6 + 0xc0) != 0) &&
                       (lVar6 = UnityEngine_Component__get_gameObject_408b480
                                          (*(long *)(lVar6 + 0xc0),0), lVar6 != 0)) {
                      if (pcRam0000000005c3a388 == (code *)0x0) {
                        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000005c3a388)(lVar6,0);
                      return;
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

